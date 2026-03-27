#!/bin/bash
##
## EPITECH PROJECT, 2026
## C Pool Day02
## Author: Theo Busiris <theo.busiris@epitech.eu>
## File description:
## Count users by last name prefix
##

script_dir="$(dirname "$0")"
input_file="$script_dir/resources/passwd"
number=0

while IFS=: read -r pseudo x first_number sec_number name first_path sec_path; do
    if [[ $(echo "$name" | cut -d' ' -f2) == $1* ]]; then
        ((number++))
    fi
done < "$input_file"

echo $number