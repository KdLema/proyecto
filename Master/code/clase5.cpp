#include <stdio.h>


class Producto 
{
char *nombre;
int	cantidad;
char *usuario;

		public:
			void insertar_cantidad(int cantida)
			{
				cantidad=cantida;
			};
			
			void insertar_usuario(char usuari[30])
			{
				usuario=usuari;
			};
			
			void insertar_nombre(char nombr[30])
			{
				nombre=nombr;
			};
			
			void mostrar()
			{	
			

			
				printf("Usuario: %s \n",usuario);
		
				printf("Producto:  %s \n",nombre);	
				
				printf("Cantidad: %d \n",cantidad);
			};
};

int main()
{	


		Producto uno;
		
		char name[30];
		int i;
		char prod[80];
		
		printf("	Bienvenido a OXXO\n");
		printf("Ingrese su usuario: \n");
		scanf("%s",&name);
		printf("Ingrese el producto que desea:\n");
		scanf("%s",&prod);
		printf("Ingrese la cantidad: \n");
		scanf("%d",&i);

		printf("Su Pedido consta de : \n");
		
		uno.insertar_usuario(name);
		uno.insertar_nombre(prod);
		uno.insertar_cantidad(i);
		uno.mostrar();
		printf("Gracias por la compra");
		return 0;
		
}
