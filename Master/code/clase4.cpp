#include <stdio.h>


class Usuario
{
char *nombre;
int	cedula;
char *ciudad;

		public:
			void insertar_cedula(int cedul)
			{
				cedula=cedul;
			};
			
			void insertar_ciudad(char ciuda[30])
			{
				ciudad=ciuda;
			};
			
			void insertar_nombre(char nombr[30])
			{
				nombre=nombr;
			};
			
			void mostrar()
			{	
			

			
				printf("Nombre: %s \n",nombre);
		
				printf("numero de cedula:  %d \n",cedula);	
				
				printf("Ciudad de nacimiento: %s \n",ciudad);
			};
};

int main()
{	


	Usuario uno;
		
		char name[30];
		int id;
		char city[30];
		
		printf("	Bienvenido\n");
		printf("ingrese su nombre completo: \n");
		scanf("%s",&name);
		printf("Ingrese su numero de cedula: \n");
		scanf("%d",&id);
		printf("Ingrese su lugar de nacimineto: \n");
		scanf("%s",&city);

		printf("Confirmar Datos: \n");
		uno.insertar_nombre(name);
		uno.insertar_cedula(id);
		uno.insertar_ciudad(city);
		uno.mostrar();
		
		return 0;
		
}
