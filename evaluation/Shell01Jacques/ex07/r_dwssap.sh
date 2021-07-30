#!/bin/sh
awk -F ":" '{print $1}' /etc/passwd 
| awk 'NR%2==0' 
| rev 
| sort -r 
| awk -v  line1=$FT_LINE1 -v line2=$FT_LINE2 'NR==line1, NR==line2 {print $0}' 
| awk '{print $0}' ORS=" " 
| awk '{gsub(" ", ", ", $0); print}'
| awk '{gsub(", $",".",$0);print}' 
| tr -d "\n"