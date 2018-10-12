#include <stdio.h>



class orden
{
	char *producto;
	char	*extras;
	char *bebida;
	
		public:
			void insertar_producto(char product[30])
			{
				producto=product;
			};
			
			void insertar_extra(char extr[30])
			{
				extras=extr;
			};
			
			void insertar_bebida(char bebid[30])
			{
				bebida=bebid;
			};
			
			void mostrar()
			{	
			

			//	printf("PRINCIPAL \n");
				printf("%s",producto);
			//	printf("Extras\n");
				printf("%s \n",extras);
			//	printf("Bebidas\n");
				printf("%s \n",bebida);	
			};
};

int main()
{	
	orden Cero;
			Cero.insertar_producto("- Hamburguesa simple \n - Hambuerguesa de Pollo \n - Hambuerguesa doble\n");
			Cero.insertar_bebida("- Pepsi \n - Coca-Cola \n - Sprite \n");
		    Cero.insertar_extra("- Tocino\n - Queso\n - N/A \n");
			Cero.mostrar();

	orden uno;
		char fuerte[30];
		char ext[30];
		char drink[30];
		
		printf("	Bienvenido a TROPI BURGER\n");
		printf("Elija su plato principal: ");
		scanf("%s",&fuerte);
		printf("Elija un extra:");
		scanf("%s",&ext);
		printf("Elija el sabor de su bebida:");
		scanf("%s",&drink);
		
		printf("su orden es:");
		uno.insertar_producto(fuerte);
		uno.insertar_extra(ext);
		uno.insertar_bebida(drink);
		uno.mostrar();
		
		return 0;
		
}
			
