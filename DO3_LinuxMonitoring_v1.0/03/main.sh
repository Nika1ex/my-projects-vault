#!/bin/bash

for i in $@; do
    if ! [[ $i =~ ^[1-6]$ ]]; then
        echo "Invalid colour designation = $i 
Available colour designations: 1 - white, 2 - red, 3 - green, 4 - blue, 5 - purple, 6 - black" >&2
        exit 1
    fi
done

if [ $# -ne 4 ]; then
    echo "Enter only four colour designations
Available colour designations: 1 - white, 2 - red, 3 - green, 4 - blue, 5 - purple, 6 - black" >&2
    exit 1
fi

SCRIPT_DIR=$(dirname "$(readlink -f "$0")")
source "${SCRIPT_DIR}/color.sh"
source "${SCRIPT_DIR}/research.sh"
