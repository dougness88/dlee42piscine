cat /etc/passwd | grep -v "#" | sed 's/:\*..*//' | sed '1d; n; d'| rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}"p | tr '\n' ' '| sed 's/ /,/g' | sed 's/[^.]$/&./'
