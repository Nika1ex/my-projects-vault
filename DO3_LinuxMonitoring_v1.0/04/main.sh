#!/bin/bash

SCRIPT_DIR=$(dirname "$(readlink -f "$0")")
source "${SCRIPT_DIR}/color.conf"
source "${SCRIPT_DIR}/default.conf"

color_num=(
    $column1_background 
    $column1_font_color 
    $column2_background 
    $column2_font_color
)

for i in ${color_num[@]}; do
    if [[ ! $i =~ ^[1-6]$ ]]; then
        echo "Invalid colour designation = $i in color.conf" >&2
        exit 1
    fi
done

source "${SCRIPT_DIR}/color.sh"
source "${SCRIPT_DIR}/research.sh"

declare -A exists=()

[[ -n "$column1_background" ]] && exists[0]=1
[[ -n "$column1_font_color" ]] && exists[1]=1
[[ -n "$column2_background" ]] && exists[2]=1
[[ -n "$column2_font_color" ]] && exists[3]=1

type=(background "font color")

echo
for ((i=0; i<${#default_color_num[@]}; ++i)); do
    if [ -n "${exists[$i]}" ]; then
        color_index=$((color_num[i] - 1))
        echo "Column $((i / 2 + 1)) ${type[$((i % 2))]} = ${color_num[i]} (${colors[color_index]})"
    else
        def_index=$((def_color_num[i] - 1))
        echo "Column $((i / 2 + 1)) ${type[$((i % 2))]} = default (${colors[def_index]})"
    fi
done
