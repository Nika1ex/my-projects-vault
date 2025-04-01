#!/bin/bash

scp src/C3_SimpleBashUtils/cat/s21_cat raynaldd@192.168.50.152:/tmp
scp src/C3_SimpleBashUtils/grep/s21_grep raynaldd@192.168.50.152:/tmp
ssh raynaldd@192.168.50.152 "sudo mv /tmp/s21_* /usr/local/bin"
