#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

// Constante administrador de la biblioteca
#define usuarioadmin "hackerman"
// Constante contraseña del administrador
#define contrasenaadmin "h4ck3r"

/*Preguntas para el profesor
1. Como dejar almacenados los 50 libros en el programa
2. Desde que años se consideran libros antiguos o nuevos, si se considera por fecha de publicacion o por fecha de anexo al sistema
3. Como comparar los libros para sacarlos en cantidades totales diferentes
*/

struct libreria{
	int ID;
	int codigoLibro;
	char nombreLibro[30];
	char autorLibro[30];
	char generoLibro[30];
	char editorialLibro[30];
	
	// fecha publicacion del libro
	int diaPublicacion;
	int mesPublicacion;
	int annoPublicacion;
	// fecha ingreso del libro
	int diaIngreso;
	int mesIngreso;
	int annoIngreso;
	// fecha pretamo de libro
	int diaPrestamo;
	int mesPrestamo;
	int annoPrestamo;
	// fecha devolucion del libro
	int diaDevolucion;
	int mesDevolucion;
	int annoDevolucion;
}libros[1000];

void roles(){
	//Variables
	int seleccionLogin, contadorLibros, diaActual, mesActual, annoActual, id = 51;
	char nomAdmin[30], contraAdmin[30];
	// Punteros
	int *p_selLogin, *p_contadorlibros, *p_diaActual, *p_mesActual, *p_annoActual;
	char *p_nomAdmin, *p_contraAdmin;
	//Asignacion de punteros
	// puntero entre seleccion1 y p_sele1
	p_selLogin = &seleccionLogin;
	p_nomAdmin = nomAdmin;
	p_contraAdmin = contraAdmin;
	p_contadorlibros = &contadorLibros;
	p_diaActual = &diaActual;
	p_mesActual = &mesActual;
	p_annoActual = &annoActual;
	
	*p_contadorlibros = 50;
	
	printf("Ingrese la fecha de hoy\n");
	printf("Dia: ");
	scanf("%d", &diaActual);
	printf("Mes: ");
	scanf("%d", &mesActual);
	printf("Año: ");
	scanf("%d", &annoActual);
	system("cls");
	
	// Preguntar el rol al que entra o salir del programa
	do{
		printf("Seleccione una opcion" 
			   "\n1. Administrador" 
			   "\n2. Usuario"
			   "\n0. Salir"
			   "\nIngrese la opcion: ");
		scanf("%d", &seleccionLogin);
		system("cls");
		switch(*p_selLogin){
			case 1:{		
				// validar que puso usuario y contraseña correctas
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
							c = 0;	
							//Ingreso validado el administrador
							//Declaracion de variable
							int seleccionMenu;
							system("cls");
							do{
								printf("MENU DEL ADMINISTRADOR\n");
								printf("Seleccione una opcion"
									   "\n1. Anexar libro"
									   "\n2. Inventario libros antiguos y nuevos"
									   "\n3. Consulta"
									   "\n0. Salir"
									   " \nIngrese la opcion: ");
								scanf("%d", &seleccionMenu);							
								system("cls");
								switch(seleccionMenu){
									// Caso 1 ya se realizo
									case 1:{				
										//Asigno el ID desde el sistema y muestro al administrador el valor
										libros[*p_contadorlibros].ID = id;										
										printf("ID: %d\n",libros[*p_contadorlibros].ID);
										//Pido el codigo del libro y lo almaceno en el struct
										printf("Ingrese el codigo del libro: ");										
										scanf("%d", &libros[*p_contadorlibros].codigoLibro);
										//Pido el nombre del libro y lo almaceno en el struct
										printf("Ingrese el nombre del libro: ");							
										fflush(stdin);										
										gets(libros[*p_contadorlibros].nombreLibro);
										//Pido el autor del libro y lo almaceno en el struct
										printf("Ingrese el autor del libro: ");							
										fflush(stdin);										
										gets(libros[*p_contadorlibros].autorLibro);
										//Pido el genero del libro y lo almaceno en el struct
										printf("Ingrese el genero del libro: ");							
										fflush(stdin);
										gets(libros[*p_contadorlibros].generoLibro);
										//Pido la editorial del libro y lo almaceno en el struct
										printf("Ingrese la editorial del libro: ");							
										fflush(stdin);
										gets(libros[*p_contadorlibros].editorialLibro);
										//Pido la fecha de publicacion del libro y lo almaceno en el struct
										printf("Ingrese la fecha de publicacion del libro\n");
										printf("Dia: ");
										scanf("%d", &libros[*p_contadorlibros].diaPublicacion);
										printf("Mes: ");
										scanf("%d", &libros[*p_contadorlibros].mesPublicacion);
										printf("Año: ");
										scanf("%d", &libros[*p_contadorlibros].annoPublicacion);
										// asigno la fecha de ingreso del libro al sistema
										// Dia actual
										libros[*p_contadorlibros].diaIngreso = *p_diaActual;
										// Mes actual
										libros[*p_contadorlibros].mesIngreso = *p_mesActual;
										// Año actual
										libros[*p_contadorlibros].annoIngreso = *p_annoActual;
										//Muestro la fecha de ingreso del libro al sistema
										printf("Fecha de ingreso del libro a la Base de Datos(DD/MM/YYYY): %d/%d/%d", 
											   libros[*p_contadorlibros].diaIngreso, 
											   libros[*p_contadorlibros].mesIngreso,
											   libros[*p_contadorlibros].annoIngreso);											
										//incremento en 1 el ID
										id++;
										//Incremento la cantidad de libro + 1
										*p_contadorlibros = *p_contadorlibros + 1;
										getch();
										system("cls");
										break;
									}
									case 2:{
										// Continuar para la clase 
										
										for(int i = 0; i < *p_contadorlibros; i++){
											printf("ID: %d\n", libros[i].ID);
											printf("Codigo libro: %d\n", libros[i].codigoLibro);
											printf("Nombre del libro: %s\n",libros[i].nombreLibro);
											printf("Autor del libro: %s\n",libros[i].autorLibro);
											printf("Genero del libro: %s\n",libros[i].generoLibro);
											printf("Editorial del libro: %s\n",libros[i].editorialLibro);
											printf("Fecha de publicacion del libro(DD/MM/YYYY): %d/%d/%d\n", 
												   libros[i].diaPublicacion, 
												   libros[i].mesPublicacion, 
												   libros[i].annoPublicacion);
											printf("Fecha de ingreso del libro a la Base de Datos(DD/MM/YYYY): %d/%d/%d\n",
												   diaActual, 
												   mesActual, 
												   annoActual);											
										}
										getch();
										system("cls");										
										break;
									};
									case 3:{
										break;
									};
									case 0:{
										printf("sesion terminada");										
										getch();
										system("cls");
										break;
									};
									default: {
										printf("La opcion ingresada no existe\n");  
										getch();
										system("cls");
										break;
									};
								}
									   
							} while(seleccionMenu != 0);
							getch();							
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
	}while(*p_selLogin != 0);
	getch();
	
}

//Funcion principal
int main(){	
	roles();		
	return 0;
}

