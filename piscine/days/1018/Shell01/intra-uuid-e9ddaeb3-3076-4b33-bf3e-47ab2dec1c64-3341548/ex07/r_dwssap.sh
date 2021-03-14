cat /etc/passwd | sed '/#/d' | awk '{if (NR%2==0) print} | sed 's/:.*//' | rev | sort -r | sed -n "${FT_LINE},${FT_LINE}p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | tr -d '\n'
