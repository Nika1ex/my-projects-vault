#!/bin/bash

# Total number of folders, including subfolders
function count_folders() {
    echo -n "Total number of folders (including all nested ones) = "
    find $1 -mindepth 1 -type d 2>/dev/null | wc -l
}

# Top 5 folders with largest size in descending order (path and size)
function top5_folders() {
    echo "TOP 5 folders of maximum size arranged in descending order (path and size):"
    find $1 -mindepth 1 -type d -exec du --si {} + 2>/dev/null | sort -hr | 
    head -5 | awk '{printf "%d - %s, %sB\n", NR, $2, $1}'
}

# Total number of files
function count_all_files() {
    echo -n "Total number of files = "
    find $1 -type f 2>/dev/null | wc -l
}

# Number of configuration files (with .conf extension), text files, executable files, 
# log files (files with .log extension), archives, symbolic links
function count_specific_files() {
    local CONF=$(find $1 -type f -name *.conf 2>/dev/null | wc -l)
    local TEXT=$(find $1 -type f -name *.txt 2>/dev/null | wc -l)
    local EXEC=$(find $1 -type f -executable 2>/dev/null | wc -l)
    local LOG=$(find $1 -type f -name *.log 2>/dev/null | wc -l)
    local ARCH=$(find $1 -type f -exec file {} + 2>/dev/null | grep archive | wc -l)
    local SLINKS=$(find $1 -type l 2>/dev/null | wc -l)
    echo "Number of:  
Configuration files (with the .conf extension) = $CONF 
Text files = $TEXT  
Executable files = $EXEC
Log files (with the extension .log) = $LOG  
Archive files = $ARCH  
Symbolic links = $SLINKS" 
}

# Top 10 files with largest size in descending order (path, size and type)
function top10_files() {
    echo "TOP 10 files of maximum size arranged in descending order (path, size and type):"
    find $1 -type f -exec du --si {} + 2>/dev/null | sort -hr |  head -10 |
    awk '{
        fname = $2
        split(fname, arr, "/")
        split(arr[length(arr)], data, ".")
        ext = (length(data) > 1) ? data[length(data)] : "no extension"
        printf "%d - %s, %sB, %s\n", NR, $2, $1, ext
    }'
}

# TOP 10 executable files of the maximum size arranged in descending order (path, size and MD5 hash of file)
function top10_exec_files() {
    echo "TOP 10 executable files of the maximum size arranged in descending order (path, size and MD5 hash of file):"
    local count=0
    find $1 -type f -executable -exec du --si {} + 2>/dev/null | sort -hr | head -10 | 
    while read -r size fname; do
        hash=$(md5sum $fname | awk '{print $1}')
        ((count++))
        printf "%d - %s, %sB, %s\n" $count $fname $size $hash
    done
}

# Output
count_folders $directory
top5_folders $directory
count_all_files $directory
count_specific_files $directory
top10_files $directory
top10_exec_files $directory
END=$(date "+%s.%N")
TIME=$(echo "$END - $START" | bc -l)
printf "Script execution time (in seconds) = %.1f\n" $TIME
