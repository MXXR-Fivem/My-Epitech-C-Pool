#!

number=0

while IFS=: read -r pseudo x first_number sec_number name first_path sec_path; do
    if [[ $(echo "$name" | cut -d' ' -f2) == $1* ]]; then
        ((number++))
    fi
done

echo $number