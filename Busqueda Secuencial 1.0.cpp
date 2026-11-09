#include<stdio.h>
int n, i;
int t[5];
main()
{
	printf("Introduce los datos al array: ");
	for(i=0;i<=4;i++)
	{
		scanf("%d", &t[i]);
	}
	printf("Introduce el numero a buscar");
	scanf("%d", &n);
	i=0;
	while(i<=4 && t[i]!=n)
	{
		i++;
	}
	if(t[i]==n)
	{
		printf("Encontrado");
	}
	else
	{
		printf("No encontrado");
	}
}