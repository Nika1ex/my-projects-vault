#!/bin/bash

HOSTNAME=$(hostname)
TIMEZONE=$(timedatectl | grep "Time zone" | awk '{gsub(/[0)]/, "", $5); print $3, "UTC", $5}')
USER=$(whoami)
OS=$(grep PRETTY_NAME /etc/os-release | awk -F '"' '{print $2}')
DATE=$(date "+%d %b %Y %H:%M:%S")
UPTIME=$(uptime -p | sed 's/up //')
UPTIME_SEC=$(awk '{print $1}' /proc/uptime)
IP=$(ifconfig | grep -A1 enp0s3 | awk '/inet/ {print $2}')
MASK=$(ifconfig | grep -A1 enp0s3 | awk '/inet/ {print $4}')
GATEWAY=$(ip r | grep default | awk '{print $3}')
RAM_INFO=$(free -b | awk '/Mem:/ {print $2, $3, $4}')
RAM_TOTAL=$(echo "$RAM_INFO" | awk '{printf "%.3f GB", $1 / (1000^3)}')
RAM_USED=$(echo "$RAM_INFO" | awk '{printf "%.3f GB", $2 / (1000^3)}')
RAM_FREE=$(echo "$RAM_INFO" | awk '{printf "%.3f GB", $3 / (1000^3)}')
SPACE_ROOT_INFO=$(df -B1 / | tail -1)
SPACE_ROOT=$(echo "$SPACE_ROOT_INFO" | awk '{printf "%.2f MB", $2 / (1000^2)}')
SPACE_ROOT_USED=$(echo "$SPACE_ROOT_INFO" | awk '{printf "%.2f MB", $3 / (1000^2)}')
SPACE_ROOT_FREE=$(echo "$SPACE_ROOT_INFO" | awk '{printf "%.2f MB", $4 / (1000^2)}')

print "HOSTNAME =" " $HOSTNAME"
print "TIMEZONE =" " $TIMEZONE"
print "USER =" " $USER"
print "OS =" " $OS"
print "DATE =" " $DATE"
print "UPTIME =" " $UPTIME"
print "UPTIME_SEC =" " $UPTIME_SEC"
print "IP =" " $IP"
print "MASK =" " $MASK"
print "GATEWAY =" " $GATEWAY"
print "RAM_TOTAL =" " $RAM_TOTAL"
print "RAM_USED =" " $RAM_USED"
print "RAM_FREE =" " $RAM_FREE"
print "SPACE_ROOT =" " $SPACE_ROOT"
print "SPACE_ROOT_USED =" " $SPACE_ROOT_USED"
print "SPACE_ROOT_FREE =" " $SPACE_ROOT_FREE"
