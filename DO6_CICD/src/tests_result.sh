#!/bin/bash

if grep -q FAILED ../s21_cat_result.txt ../s21_grep_result.txt; then
  echo "Integration tests FAILED";
  exit 1;
fi
echo "Integration tests SUCCEEDED";
