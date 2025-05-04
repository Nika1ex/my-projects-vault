#!/bin/bash

colors=(white red green blue purple black)

default_color_num=(
    $default_column1_background
    $default_column1_font_color
    $default_column2_background
    $default_column2_font_color
)

for i in ${default_color_num[@]}; do
    if [[ ! $i =~ ^[1-6]$ ]]; then
        echo "Invalid default colour designation = $i in default.conf" >&2
        exit 1
    fi
done

color_num=(
    ${column1_background:-${default_color_num[0]}}
    ${column1_font_color:-${default_color_num[1]}}
    ${column2_background:-${default_color_num[2]}}
    ${column2_font_color:-${default_color_num[3]}}
)

if [[ ${color_num[0]} -eq ${color_num[1]} || ${color_num[2]} -eq ${color_num[3]} ]]; then
    echo "The font and background colours of one column must not match. Edit color.conf and call the script again" >&2
    exit 1
fi

names_bg_color=${colors[$((color_num[0] - 1))]}
names_font_color=${colors[$((color_num[1] - 1))]}
values_bg_color=${colors[$((color_num[2] - 1))]}
values_font_color=${colors[$((color_num[3] - 1))]}

set_color() {
    case $1 in
        white) bg_color="47";;
        red) bg_color="41";;
        green) bg_color="42";;
        blue) bg_color="44";;
        purple) bg_color="45";;
        black) bg_color="40";;
    esac
    case $2 in
        white) font_color="37";;
        red) font_color="31";;
        green) font_color="32";;
        blue) font_color="34";;
        purple) font_color="35";;
        black) font_color="30";;
    esac
    printf "\e[%s;%sm" $bg_color $font_color
}

print() {
    set_color $names_bg_color $names_font_color
    echo -n "$1"
    set_color $values_bg_color $values_font_color
    echo -n "$2"
    tput sgr0
    echo
}
