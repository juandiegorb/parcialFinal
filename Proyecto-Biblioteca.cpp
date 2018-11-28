#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

// Constante administrador de la biblioteca
#define usuarioadmin "hackerman"
// Constante contraseña del administrador
#define contrasenaadmin "h4ck3r"

void roles(){
	//Variables
	int seleccion1;
	char nomAdmin[30], contraAdmin[30];
	// Punteros
	int *p_sel1;
	char *p_nomAdmin, *p_contraAdmin;
	//Asignacion de punteros
	// puntero entre seleccion1 y p_sele1
	p_sel1 = &seleccion1;
	p_nomAdmin = nomAdmin;
	p_contraAdmin = contraAdmin;
	// Preguntar el rol al que entra o salir del programa
	
	do{
		printf("Seleccione una opcion \n1. Administrador \n2. Usuario \n0. Salir \nIngrese la opcion: ");
		scanf("%d", &seleccion1);
		system("cls");
		switch(*p_sel1){
			case 1:{
				int c = 0;
				do{					
					printf("Ingrese el usuario del administrador: ");
					fflush(stdin);
					gets(nomAdmin);
					printf("Ingrese la contraseña del administrador: ");
					fflush(stdin);
					gets(contraAdmin);
					int res1 = strcmp(p_nomAdmin,usuarioadmin);
					int res2 = strcmp(p_contraAdmin,contrasenaadmin);
					if(res1 == 0){
						if(res2 == 0){
							system("cls");
							c = 0;			
							// Aqui continuamos mañana
						}else{
							printf("Contraseña incorrecta\n");
							c = 1;
							getch();
							system("cls");
						}
					}else{
						printf("Usuario incorrecto\n");
						c = 1;
						getch();
						system("cls");
					}
				}while(c != 0);				
				getch();
				system("cls");
				break;
			}
			case 2:{
				getch();
				system("cls");
				break;
			}
			case 0: {
				printf("Gracias por usar el programa\n");
				getch();
				system("cls");
				break;
			}
			default: {
				printf("La opcion ingresada no existe\n");  
				getch();
				system("cls");
				break;
			}
		}
	}while(*p_sel1 != 0);
	getch();
	
}

//Funcion principal
int main(){	
	roles();		
	return 0;
}

