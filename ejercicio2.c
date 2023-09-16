/*ENUNCIADO 3: 
Escriba un programa que, tratando una fraccion como una estructura de dos componentes, permita realizar las operaciones de multiplicacion
y division entre las dos fracciones. El programa debera preguntar la operacion a realizar y despues de datos para ejecutarla, 
y repetir estos pasos hasta que se seleccione entre las operaciones la opcion terminar */

#include<stdio.h>
#include<stdlib.h>

int main(){

    int num[2], denom[2],multi[2], div[2], op, op2, i; 

    do{

        printf("1- Calcular fracciones\n"); 
        printf("2- Salir\n\n");  

        scanf ("%i", &op); 
        
        system("cls");

        switch (op){

        case 1:
        	
        	printf("Elige la operacion\n\n");
        	printf("1- Multiplicacion de fracciones\n"); 
        	printf("2- Division de fracciones\n\n"); 
        	scanf ("%i", &op2);
        	
        	system("cls");
        	
        	for (i = 0; i < 2; i++){
        		
        		printf("Ingrese el numerador de la fraccion %i: ", i+1); 
        		scanf("%i",&num[i]); 
        		
        		printf("Ingrese el denominador de la fraccion %i: ", i+1);
        		scanf("%i",&denom[i]);
			}
			
			for (i = 0; i < 1; i++){
				
			multi[i] = (num[i] * num[i+1]);
			multi[i+1] = (denom[i] * denom[i+1]);

			
			div[i] = num[i] * denom[i+1];
			div[i+1] = num[i+1] * denom[i];
			}
			
			if (op2 == 1){
				
				for (i = 0; i < 1; i++){
					
					printf("El resultado de la multiplicacion las fracciones es: %i / %i \n\n",multi[i], multi[i+1]); 
				}	
			}else if(op2 == 2){
				
				for (i = 0; i < 1; i++){
					printf("El resultado de la division de las fracciones es: %i / %i \n\n",div[i], div[i+1]);
				}
			}
			
			system("pause");
			system("cls");
        	
            break;
            
        case 2:
        	
			exit(-1);
            break;
            
        }
        
    } while (op >= 1 && op <= 2 );

    printf("Ingrese una opcion valida\n\n");
    
    system("pause");
	system("cls");
        
    
    return main(); 
}


