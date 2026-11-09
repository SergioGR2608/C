#include<stdio.h>
int i, n, encontrado;
int t[5];
main()
{
	//INTRODUCIR VALORES EN EL ARRAY
	printf("Introduce los datos al array: ");
	for(i=0;i<=4;i++)
	{
		scanf("%d", &t[i]);
	}
	//INTRODUCIR EL NÚMERO
	printf("Introduce el numero: ");
	scanf("%d", &n);
	//BÚSQUEDA
	i=0;
	encontrado='n';
	for(i=0;i<=4;i++)
	{
		if(t[i]==n)
		{
			encontrado='s';
		}
	}
	//COMPROBACIÓN DE LOS VALORES
	if(encontrado=='n')
	{
		printf("No encontrado");
	}
	if(encontrado=='s')
	{
		printf("Encontrado");
	}
}