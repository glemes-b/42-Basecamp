/*string de caracteres em linguagem c elas nao existem, por isso é uma convenção entre os 
programadores. É um grupo de bytes terminado em um byte de valor 0(zero)*/

#include <stdio.h>

int main(void)
{
	char str[] = "lol";
	str[0] = 'p';
		
	/*char *str;
	str = "lol";
	/*str[0] = 'p'; /*Segmentation fault (core dumped)
	/*char c;
	c = 0; /*    ou escreve-se \0 char 0 (zero) com valor 0 zero     */
	printf("%c %s\n", *str, str);
	return 0;
}