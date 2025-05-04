#!/bin/bash

START=$(date "+%s.%N")
directory=$1

if [ $# -ne 1 ]; then
    echo "$0: Enter only one argument (absolute or relative path to a directory)" >&2
    exit 1
fi

if [ ! -d $directory ]; then
    echo "$0: $directory: No such directory" >&2
    exit 1
fi

if [ ${directory: -1} != '/' ]; then
    echo "$0: $directory: Invalid directory path (must end with a '/')" >&2
    exit 1
fi

SCRIPT_DIR=$(dirname "$(readlink -f "$0")")
source "${SCRIPT_DIR}/research.sh"