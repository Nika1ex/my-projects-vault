#!/bin/bash

SCRIPT_DIR=$(dirname "$(readlink -f "$0")")
output=$(source "${SCRIPT_DIR}/research.sh")
echo "$output"

read -p "Write output to file? [Y/n] " ans

if [[ $ans =~ [yY] ]]; then
    filename=$(date "+%d_%m_%y_%H_%M_%S").status
    echo "$output" > "${SCRIPT_DIR}/$filename"
    echo "Saved to "${SCRIPT_DIR}/$filename""
else
    echo "Not saved"
fi
