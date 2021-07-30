#!/bin/sh
cat /etc/passwd | cut -f 1 -d ':' | awk 'NR%2 == 0' |
rev | sort -fr | awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2" 'NR>=FT_LINE1 && NR<=FT_LINE2'  |
awk NF=NF RS= OFS=', ' | tr '\n' '.'

Escreva uma linha de comando que exiba a saída de um cat /etc/passwd, retirando os comentários,
uma linha a cada duas começando pela segunda, invertendo
cada login e ordenando em ordem alfabética inversa, mantendo apenas os logins
compreendidos entre FT_LINE1 e FT_LINE2 inclusos, separados por ", "(sem
aspas), e terminando com ".".