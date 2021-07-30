void testaPonteiro(int b)  //*b = a

{
	b = b + 10;
	printf("Valor de b: %d\n", *b);
}

int main()
{
	int a;
	a = 10;
	printf("Valor de a: %d\n", a);
	testaPonteiro(&a);
	printf("Valor de a: %d\n", a);
}