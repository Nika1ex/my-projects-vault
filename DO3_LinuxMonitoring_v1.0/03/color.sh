#!/bin/bash

colors=(white red green blue purple black)

names_bg=$1
names_font=$2
values_bg=$3
values_font=$4

if [[ $names_bg -eq $names_font || $values_bg -eq $values_font ]]; then
    echo "The font and background colours of one column must not match. Call the script again" >&2
    exit 1
fi

names_bg_color=${colors[$((names_bg - 1))]}
names_font_color=${colors[$((names_font - 1))]}
values_bg_color=${colors[$((values_bg - 1))]}
values_font_color=${colors[$((values_font - 1))]}

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
