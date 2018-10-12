#include <stdio.h>



class orden
{
	int	clave;
	int	cedula;
	char *cuenta;
	
		public:
			void insertar_clave(int clav)
			{
				clave=clav;
			};
			
			void insertar_cedula(int cedu)
			{
				cedula=cedu;
			};
			
			void insertar_cuenta(char cuent[30])
			{
				cuenta=cuent;
			};
			
			void mostrar()
			{	
			

			
				printf("Cuenta: %s \n",cuenta);
		
				printf("Numero de cedula:  %d \n",cedula);	
				
				printf("Clave: %d \n",clave);
			};
};

int main()
{	


	orden uno;
		int i;
		char m[4];
		int n=4;
		int ced;
		char tipo[30];
		
		printf("	Bienvenido\n");
		printf("Ingrese su numero de cedula:  \n");
		scanf("%d",&ced);
		printf("Tipo de cuenta:  \n");
		scanf("%s",&tipo);
		printf("Ingrese su clave:  \n");
		scanf("%d",&i);
					

		printf("Confirmar Datos: \n");
		uno.insertar_cuenta(tipo);
		uno.insertar_cedula(ced);
		uno.insertar_clave(i);
		uno.mostrar();
		
		return 0;
		
}
