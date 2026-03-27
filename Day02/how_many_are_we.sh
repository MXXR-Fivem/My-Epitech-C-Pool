#!/bin/bash
##
## EPITECH PROJECT, 2026
## C Pool Day02
## Author: Theo Busiris <theo.busiris@epitech.eu>
## File description:
## Count students, optionally filtered by campus
##

script_dir="$(dirname "$0")"
input_file="$script_dir/resources/students.csv"
total=0

while IFS=';' read -r name year city; do
    if [ -n "$1" ]; then
        if [ "${1,,}" == "${city,,}" ]; then
            ((total++))
        fi
    else 
        ((total++))
    fi
done < "$input_file"

echo $total