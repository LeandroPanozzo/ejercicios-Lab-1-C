#include<stdio.h>
#include<conio.h>
#include<string.h>

#define a "c:\\arch.dat"

struct registro
{
	int cliente;
	char nombre[20];
	float saldo;
};

int main()
{
	FILE *arch;
	struct registro reg;
	char seguir;
	
	if ((arch=fopen(a,"wb"))==NULL)
	{
		printf("No se pudo abrir el archivo");
		return 1;
	}
	
	do
	{
		printf("\nIngrese numero de cliente: ");
		scanf("%d",&reg.cliente);
		printf("Ingrese el nombre: ");
		scanf("%s",reg.nombre);
		printf("Ingrese el saldo: ");
		scanf("%f",&reg.saldo);
		fwrite(&reg,sizeof(reg),1,arch);
		printf("¿Desea terminar? (s/n): ");
		scanf("\n %c",&seguir);
	}
	while(seguir=='n');
	
	fclose(arch);
	getch();
	
	// Mostrar el contenido del archivo cargado previamente
	if ((arch=fopen(a,"rb"))==NULL)
	{
		printf("No se pudo abrir el archivo");
		return 1;
	}
	
	printf("\nContenido del archivo:\n");
	while(fread(&reg, sizeof(reg), 1, arch) == 1)
	{
		printf("Cliente: %d\n", reg.cliente);
		printf("Nombre: %s\n", reg.nombre);
		printf("Saldo: %.2f\n\n", reg.saldo);
	}
	
	fclose(arch);
	return 0;
}
