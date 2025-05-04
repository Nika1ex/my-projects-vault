#!/bin/bash

SCRIPT_DIR=$(dirname "$(readlink -f "$0")")
source "${SCRIPT_DIR}/is_number.sh"
arg=$1

if [ $# -ne 1 ]; then
    echo "Enter only one argument" >&2
    exit 1
fi

if is_number "$arg"; then
    echo "Invalid input" >&2
    exit 1
else
    echo "$arg"
fi