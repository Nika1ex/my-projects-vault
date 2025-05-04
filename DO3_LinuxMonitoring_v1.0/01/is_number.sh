#!/bin/bash

function is_number() {
    local arg=$1
    if [[ $arg =~ ^[0-9]+$ ]]; then
        return 0
    else
        return 1
    fi
}