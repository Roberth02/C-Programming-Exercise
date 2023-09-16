/*ENUNCIADO: 
EN UNA TIENDA DONDE SOLO HAY 10 PRODUCTOS SE DESEA CALCULAR EL TOTAL DE GANANCIA QUE PRODUJO DICHO 
NEGOCIO ESTE MES. PARA ELLO SE CUENTA POR PRODUCTO CON: PRECIO DEL COSTO, PRECIO DE VENTA, CODIGO Y 
CANTIDAD VENDIDA EN ESE PERIODO. REALIZAR UN PROGRAMA QUE PERMITA CALCULAR LAS GANANCIAS DE LA TIENDA*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float precio_costo[10], precio_venta[10], ganancias[10], total; 
    int codigo[10], cantidad_vendida, op, i, cantidad_vendidaprod; 
    char nombre_product[10][20]; 


    do{

        printf("1- Registrar productos\n"); 
        printf("2- Visualizar productos\n");
        printf("3- Calcular ganancias\n"); 
        printf("4- Salir\n\n");  

        scanf ("%i", &op); 
        
        system("cls");

        switch (op){

        case 1:
            
            for(i = 0; i <= 9 ; i++){

                printf("Ingrese el nombre del producto: "); 
                scanf("%s",nombre_product[i]); 
            
                printf("\n\nIngrese el precio de costo del producto %i (%s): ", i+1, nombre_product[i]);
                scanf("%f",&precio_costo[i]); 
                
                printf("\n\nIngrese el precio de venta del producto %i (%s): ", i+1, nombre_product[i]);
                scanf("%f",&precio_venta[i]);  

                printf("\n\nIngrese el codigo del producto %i (%s): ", i+1, nombre_product[i]); 
                scanf("%i",&codigo[i]);

                system("cls");
            }	
            break;
            
        case 2:
        	
        	for(i = 0; i <= 9; i++){
        		
        		printf("Producto %i\n\n", i+1);
        		printf("\nNombre: %s", nombre_product[i]);
        		printf("\nPrecio de costo: %.2f $", precio_costo[i]);
        		printf("\nPrecio de venta: %.2f $", precio_venta[i]);
        		printf("\nCodigo del producto: %i \n\n", codigo[i]);
			}
			
			system("pause");
			system("cls");
			
            break;
        
		case 3:
			
			//printf("¿Cuantos productos fueron vendidos este mes?: ");
			//scanf("%i", &cantidad_vendida); 
			
			for(i = 0; i <= 9; i++){
				
				printf("¿Cuantas unidades del producto (%s) fueron vendidas este mes?: " , nombre_product[i]);
				scanf("%i", &cantidad_vendidaprod); 
				
				ganancias[i] =  (precio_venta[i] - precio_costo[i]) * cantidad_vendidaprod; 
				
				printf("\nLa ganancia del producto (%s) es: %.2f \n\n", nombre_product[i], ganancias[i]);
				
				total += ganancias[i]; 	
			}
			
			printf("La ganancia total es: %.2f", total); 
			
            break;
            
        case 4:
        	
        	exit(-1);
        	
        	break;
        }
    } while (op >= 1 && op <= 4);

    printf("Ingrese una opcion valida");
    
    system("pause");
	system("cls");
        
    
    return main(); 
}
