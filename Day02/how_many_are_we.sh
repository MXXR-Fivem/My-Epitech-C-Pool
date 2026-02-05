#!

total=0

while IFS=';' read -r name year city; do
    if [ -n "$1" ]; then
        if [ "$1" == ${city,,} ]; then
            ((total++))
        fi
    else 
        ((total++))
    fi
done

echo $total