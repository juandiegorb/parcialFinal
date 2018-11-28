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
	char nombreLibro[50];
	char autorLibro[50];
	char generoLibro[50];
	char editorialLibro[50];
	
	// fecha publicacion del libro
	int diaPublicacion;
	int mesPublicacion;
	int annoPublicacion;
	// fecha ingreso del libro
	int diaIngreso;
	int mesIngreso;
	int annoIngreso;
	// fecha prestamo de libro
	int diaPrestamo;
	int mesPrestamo;
	int annoPrestamo;
	// fecha devolucion del libro
	int diaDevolucion;
	int mesDevolucion;
	int annoDevolucion;
}libros[1000];

void libros_antiguos(struct libreria libros[1000]){
	
	for(int i=0; i<50; i++){
		libros[i].ID = i+1;
		libros[i].diaIngreso = 10;
		libros[i].mesIngreso = 5;
		libros[i].annoPrestamo = 2010;
	}
	///LIBRO 1
	libros[0].codigoLibro = 1120;
//	libros[0].nombreLibro = "sergio";
	strcpy(libros[0].nombreLibro,"50 sombras de Grey");
	strcpy(libros[0].autorLibro, "E.L. James");
	strcpy(libros[0].generoLibro, "Romance");
	strcpy(libros[0].editorialLibro, "vintage books");
	libros[0].diaPublicacion = 20;
	libros[0].mesPublicacion = 10;
	libros[0].annoPublicacion = 2008;
	///LIBRO 2
	libros[1].codigoLibro = 1121;
	strcpy(libros[1].nombreLibro,"Harry Potter y la PIEDRA FILOSOFAL");
	strcpy(libros[1].autorLibro, "J.K. Rowling");
	strcpy(libros[1].generoLibro, "Novela");
	strcpy(libros[1].editorialLibro, "Bloomsbury ");
	libros[1].diaPublicacion = 07;
	libros[1].mesPublicacion = 02;
	libros[1].annoPublicacion = 1997;
	///LIBRO 3
	libros[2].codigoLibro = 1122;
	strcpy(libros[2].nombreLibro,"Harry Potter y la CAMARA SECRETA");
	strcpy(libros[2].autorLibro, "J.K. Rowling");
	strcpy(libros[2].generoLibro, "Novela");
	strcpy(libros[2].editorialLibro, "SALAMANDRA");
	libros[2].diaPublicacion = 8;
	libros[2].mesPublicacion = 12;
	libros[2].annoPublicacion = 1999;
	///LIBRO 4
	libros[3].codigoLibro = 1123;
	strcpy(libros[3].nombreLibro,"Harry Potter Y el PRICIONERO DE AZKABAN");
	strcpy(libros[3].autorLibro, "J.K. Rowling");
	strcpy(libros[3].generoLibro, "Novela");
	strcpy(libros[3].editorialLibro, "salamandra ");
	libros[3].diaPublicacion = 07;
	libros[3].mesPublicacion = 02;
	libros[3].annoPublicacion = 2000;
	///LIBRO 5
	libros[4].codigoLibro = 1124;
	strcpy(libros[4].nombreLibro,"Harry Potter  y el CALIZ DEL FUEGO");
	strcpy(libros[4].autorLibro, "J.K. Rowling");
	strcpy(libros[4].generoLibro, "Novela");
	strcpy(libros[4].editorialLibro, "salamandra");
	libros[4].diaPublicacion = 07;
	libros[4].mesPublicacion = 05;
	libros[4].annoPublicacion = 2001;
	///LIBRO 6
	libros[5].codigoLibro = 1125;
	strcpy(libros[5].nombreLibro,"Harry Potter y la ORDEN DEL FENIX");
	strcpy(libros[5].autorLibro, "J.K. Rowling");
	strcpy(libros[5].generoLibro, "Novela");
	strcpy(libros[5].editorialLibro, "salamandra ");
	libros[5].diaPublicacion = 07;
	libros[5].mesPublicacion = 02;
	libros[5].annoPublicacion = 2004;
	///LIBRO 7
	libros[6].codigoLibro = 1126;
	strcpy(libros[6].nombreLibro,"Harry Potter y el MISTERIO DEL PRINCIPE");
	strcpy(libros[6].autorLibro, "J.K. Rowling");
	strcpy(libros[6].generoLibro, "Novela");
	strcpy(libros[6].editorialLibro, "salamandra");
	libros[6].diaPublicacion = 15;
	libros[6].mesPublicacion = 11;
	libros[6].annoPublicacion = 2006;
	///LIBRO 8
	libros[7].codigoLibro = 1127;
	strcpy(libros[7].nombreLibro,"Harry Potter y las RELIQUIAS DE LA MUERTE");
	strcpy(libros[7].autorLibro, "J.K. Rowling");
	strcpy(libros[7].generoLibro, "Novela");
	strcpy(libros[7].editorialLibro, "salamandra");
	libros[7].diaPublicacion = 15;
	libros[7].mesPublicacion = 11;
	libros[7].annoPublicacion = 2008;
	///LIBRO 9
	libros[8].codigoLibro = 1121;
	strcpy(libros[8].nombreLibro,"Harry Potter y la PIEDRA FILOSOFAL");
	strcpy(libros[8].autorLibro, "J.K. Rowling");
	strcpy(libros[8].generoLibro, "Novela");
	strcpy(libros[8].editorialLibro, "Bloomsbury ");
	libros[8].diaPublicacion = 07;
	libros[8].mesPublicacion = 02;
	libros[8].annoPublicacion = 1997;
	///LIBRO 10
	libros[9].codigoLibro = 1122;
	strcpy(libros[9].nombreLibro,"Harry Potter y la CAMARA SECRETA");
	strcpy(libros[9].autorLibro, "J.K. Rowling");
	strcpy(libros[9].generoLibro, "Novela");
	strcpy(libros[9].editorialLibro, "SALAMANDRA");
	libros[9].diaPublicacion = 8;
	libros[9].mesPublicacion = 12;
	libros[9].annoPublicacion = 1999;
	///LIBRO 11
	libros[10].codigoLibro = 1123;
	strcpy(libros[10].nombreLibro,"Harry Potter Y el PRICIONERO DE AZKABAN");
	strcpy(libros[10].autorLibro, "J.K. Rowling");
	strcpy(libros[10].generoLibro, "Novela");
	strcpy(libros[10].editorialLibro, "salamandra ");
	libros[10].diaPublicacion = 07;
	libros[10].mesPublicacion = 02;
	libros[10].annoPublicacion = 2000;
	///LIBRO 12
	libros[11].codigoLibro = 1124;
	strcpy(libros[11].nombreLibro,"Harry Potter  y el CALIZ DEL FUEGO");
	strcpy(libros[11].autorLibro, "J.K. Rowling");
	strcpy(libros[11].generoLibro, "Novela");
	strcpy(libros[11].editorialLibro, "salamandra");
	libros[11].diaPublicacion = 07;
	libros[11].mesPublicacion = 05;
	libros[11].annoPublicacion = 2001;
	///LIBRO 13
	libros[12].codigoLibro = 1125;
	strcpy(libros[12].nombreLibro,"Harry Potter y la ORDEN DEL FENIX");
	strcpy(libros[12].autorLibro, "J.K. Rowling");
	strcpy(libros[12].generoLibro, "Novela");
	strcpy(libros[12].editorialLibro, "salamandra ");
	libros[12].diaPublicacion = 07;
	libros[12].mesPublicacion = 02;
	libros[12].annoPublicacion = 2004;
	///LIBRO 14
	libros[13].codigoLibro = 1126;
	strcpy(libros[13].nombreLibro,"Harry Potter y el MISTERIO DEL PRINCIPE");
	strcpy(libros[13].autorLibro, "J.K. Rowling");
	strcpy(libros[13].generoLibro, "Novela");
	strcpy(libros[13].editorialLibro, "salamandra");
	libros[13].diaPublicacion = 15;
	libros[13].mesPublicacion = 11;
	libros[13].annoPublicacion = 2006;
	///LIBRO 15
	libros[14].codigoLibro = 1127;
	strcpy(libros[14].nombreLibro,"Harry Potter y las RELIQUIAS DE LA MUERTE");
	strcpy(libros[14].autorLibro, "J.K. Rowling");
	strcpy(libros[14].generoLibro, "Novela");
	strcpy(libros[14].editorialLibro, "salamandra");
	libros[14].diaPublicacion = 15;
	libros[14].mesPublicacion = 11;
	libros[14].annoPublicacion = 2008;
	///LIBRO 16
	libros[15].codigoLibro = 1121;
	strcpy(libros[15].nombreLibro,"Harry Potter y la PIEDRA FILOSOFAL");
	strcpy(libros[15].autorLibro, "J.K. Rowling");
	strcpy(libros[15].generoLibro, "Novela");
	strcpy(libros[15].editorialLibro, "Bloomsbury ");
	libros[15].diaPublicacion = 07;
	libros[15].mesPublicacion = 02;
	libros[15].annoPublicacion = 1997;
	///LIBRO 17
	libros[16].codigoLibro = 1122;
	strcpy(libros[16].nombreLibro,"Harry Potter y la CAMARA SECRETA");
	strcpy(libros[16].autorLibro, "J.K. Rowling");
	strcpy(libros[16].generoLibro, "Novela");
	strcpy(libros[16].editorialLibro, "SALAMANDRA");
	libros[16].diaPublicacion = 8;
	libros[16].mesPublicacion = 12;
	libros[16].annoPublicacion = 1999;
	///LIBRO 18
	libros[17].codigoLibro = 1123;
	strcpy(libros[17].nombreLibro,"Harry Potter Y el PRICIONERO DE AZKABAN");
	  strcpy(libros[17].autorLibro, "J.K. Rowling");
	strcpy(libros[17].generoLibro, "Novela");
	strcpy(libros[17].editorialLibro, "salamandra ");
	libros[17].diaPublicacion = 07;
	libros[17].mesPublicacion = 02;
	libros[17].annoPublicacion = 2000;
	///LIBRO 19
	libros[18].codigoLibro = 1124;
	strcpy(libros[18].nombreLibro,"Harry Potter  y el CALIZ DEL FUEGO");
	strcpy(libros[18].autorLibro, "J.K. Rowling");
	strcpy(libros[18].generoLibro, "Novela");
	strcpy(libros[18].editorialLibro, "salamandra");
	libros[18].diaPublicacion = 07;
	libros[18].mesPublicacion = 05;
	libros[18].annoPublicacion = 2001;
	///LIBRO 20
	libros[19].codigoLibro = 1125;
	strcpy(libros[19].nombreLibro,"Harry Potter y la ORDEN DEL FENIX");
	strcpy(libros[19].autorLibro, "J.K. Rowling");
	strcpy(libros[19].generoLibro, "Novela");
	strcpy(libros[19].editorialLibro, "salamandra ");
	libros[19].diaPublicacion = 07;
	libros[19].mesPublicacion = 02;
	libros[19].annoPublicacion = 2004;
	///LIBRO 21
	libros[20].codigoLibro = 1126;
	strcpy(libros[20].nombreLibro,"Harry Potter y el MISTERIO DEL PRINCIPE");
	strcpy(libros[20].autorLibro, "J.K. Rowling");
	strcpy(libros[20].generoLibro, "Novela");
	strcpy(libros[20].editorialLibro, "salamandra");
	libros[20].diaPublicacion = 15;
	libros[20].mesPublicacion = 11;
	libros[20].annoPublicacion = 2006;
	///LIBRO 22
	libros[21].codigoLibro = 1127;
	strcpy(libros[21].nombreLibro,"Harry Potter y las RELIQUIAS DE LA MUERTE");
	strcpy(libros[21].autorLibro, "J.K. Rowling");
	strcpy(libros[21].generoLibro, "Novela");
	strcpy(libros[21].editorialLibro, "salamandra");
	libros[21].diaPublicacion = 15;
	libros[21].mesPublicacion = 11;
	libros[21].annoPublicacion = 2008;
	///LIBRO 23
	libros[22].codigoLibro = 1121;
	strcpy(libros[22].nombreLibro,"Harry Potter y la PIEDRA FILOSOFAL");
	strcpy(libros[22].autorLibro, "J.K. Rowling");
	strcpy(libros[22].generoLibro, "Novela");
	strcpy(libros[22].editorialLibro, "Bloomsbury ");
	libros[22].diaPublicacion = 07;
	libros[22].mesPublicacion = 02;
	libros[22].annoPublicacion = 1997;
	///LIBRO 24
	libros[23].codigoLibro = 1122;
	strcpy(libros[23].nombreLibro,"Harry Potter y la CAMARA SECRETA");
	strcpy(libros[23].autorLibro, "J.K. Rowling");
	strcpy(libros[23].generoLibro, "Novela");
	strcpy(libros[23].editorialLibro, "SALAMANDRA");
	libros[23].diaPublicacion = 8;
	libros[23].mesPublicacion = 12;
	libros[23].annoPublicacion = 1999;
	///LIBRO 25
	libros[24].codigoLibro = 1123;
	strcpy(libros[24].nombreLibro,"Harry Potter Y el PRICIONERO DE AZKABAN");
		   strcpy(libros[24].autorLibro, "J.K. Rowling");
	strcpy(libros[24].generoLibro, "Novela");
	strcpy(libros[24].editorialLibro, "salamandra ");
	libros[24].diaPublicacion = 07;
	libros[24].mesPublicacion = 02;
	libros[24].annoPublicacion = 2000;
	///LIBRO 26
	libros[25].codigoLibro = 1124;
	strcpy(libros[25].nombreLibro,"Harry Potter  y el CALIZ DEL FUEGO");
	strcpy(libros[25].autorLibro, "J.K. Rowling");
	strcpy(libros[25].generoLibro, "Novela");
	strcpy(libros[25].editorialLibro, "salamandra");
	libros[25].diaPublicacion = 07;
	libros[0].mesPublicacion = 05;
	libros[25].annoPublicacion = 2001;
	///LIBRO 27
	libros[26].codigoLibro = 1125;
	strcpy(libros[26].nombreLibro,"Harry Potter y la ORDEN DEL FENIX");
	strcpy(libros[26].autorLibro, "J.K. Rowling");
	strcpy(libros[26].generoLibro, "Novela");
	strcpy(libros[26].editorialLibro, "salamandra ");
	libros[26].diaPublicacion = 07;
	libros[26].mesPublicacion = 02;
	libros[26].annoPublicacion = 2004;
	///LIBRO 28
	libros[27].codigoLibro = 1126;
	strcpy(libros[27].nombreLibro,"Harry Potter y el MISTERIO DEL PRINCIPE");
	strcpy(libros[27].autorLibro, "J.K. Rowling");
	strcpy(libros[27].generoLibro, "Novela");
	strcpy(libros[27].editorialLibro, "salamandra");
	libros[27].diaPublicacion = 15;
	libros[27].mesPublicacion = 11;
	libros[27].annoPublicacion = 2006;
	///LIBRO 29
	libros[28].codigoLibro = 1127;
	strcpy(libros[28].nombreLibro,"Harry Potter y las RELIQUIAS DE LA MUERTE");
	strcpy(libros[28].autorLibro, "J.K. Rowling");
	strcpy(libros[28].generoLibro, "Novela");
	strcpy(libros[28].editorialLibro, "salamandra");
	libros[28].diaPublicacion = 15;
	libros[28].mesPublicacion = 11;
	libros[28].annoPublicacion = 2008;
	///LIBRO 30
	libros[29].codigoLibro = 1120;
	strcpy(libros[29].nombreLibro,"50 sombras de Grey");
	strcpy(libros[29].autorLibro, "E.L. James");
	strcpy(libros[29].generoLibro, "Romance");
	strcpy(libros[29].editorialLibro, "vintage books");
	libros[29].diaPublicacion = 20;
	libros[29].mesPublicacion = 10;
	libros[29].annoPublicacion = 2008;
	///LIBRO 31
	libros[30].codigoLibro = 1130;
	strcpy(libros[30].nombreLibro,"Juego de Tronos");
	strcpy(libros[30].autorLibro, "George R.R. Martin");
	strcpy(libros[30].generoLibro, "Novela");
	strcpy(libros[30].editorialLibro, "Bantam Spectra");
	libros[30].diaPublicacion = 06;
	libros[30].mesPublicacion = 8;
	libros[30].annoPublicacion = 1996;
	///LIBRO 32
	libros[31].codigoLibro = 1131;
	strcpy(libros[31].nombreLibro,"Juego de Tronos Choque de Reyes");
	strcpy(libros[31].autorLibro, "George R.R. Martin");
	strcpy(libros[31].generoLibro, "Novela");
	strcpy(libros[31].editorialLibro, "Bantam Spectra");
	libros[31].diaPublicacion = 16;
	libros[31].mesPublicacion = 11;
	libros[31].annoPublicacion = 1998;
	///LIBRO 33
	libros[32].codigoLibro = 1132;
	strcpy(libros[32].nombreLibro,"Juego de Tronos Tormenta de espadas");
	strcpy(libros[32].autorLibro, "George R.R. Martin");
	strcpy(libros[32].generoLibro, "Novela");
	strcpy(libros[32].editorialLibro, "Bantam Spectra");
	libros[32].diaPublicacion = 8;
	libros[32].mesPublicacion = 8;
	libros[32].annoPublicacion = 2000;
	///LIBRO 34
	libros[33].codigoLibro = 1133;
	strcpy(libros[33].nombreLibro,"Juego de Tronos Festin de cuervos");
	strcpy(libros[33].autorLibro, "George R.R. Martin");
	strcpy(libros[33].generoLibro, "Novela");
	strcpy(libros[33].editorialLibro, "Bantam Spectra");
	libros[33].diaPublicacion = 17;
	libros[33].mesPublicacion = 10;
	libros[33].annoPublicacion = 2005;
	///LIBRO 35
	libros[34].codigoLibro = 1134;
	strcpy(libros[34].nombreLibro,"Juego de Tronos Danza de dragones");
	strcpy(libros[34].autorLibro, "George R.R. Martin");
	strcpy(libros[34].generoLibro, "Novela");
	strcpy(libros[34].editorialLibro, "Bantam Spectra");
	libros[34].diaPublicacion = 12;
	libros[34].mesPublicacion = 07;
	libros[34].annoPublicacion = 2011;
	///LIBRO 36
	libros[35].codigoLibro = 1135;
	strcpy(libros[35].nombreLibro,"Juego de Tronos Vientos en invierno");
	strcpy(libros[35].autorLibro, "George R.R. Martin");
	strcpy(libros[35].generoLibro, "Novela");
	strcpy(libros[35].editorialLibro, "Bantam Spectra");
	libros[35].diaPublicacion = 10;
	libros[35].mesPublicacion = 9;
	libros[35].annoPublicacion = 2018;
	///LIBRO 37
	libros[36].codigoLibro = 1136;
	strcpy(libros[36].nombreLibro,"Juego de Tronos Sueño de primavera");
	strcpy(libros[36].autorLibro, "George R.R. Martin");
	strcpy(libros[36].generoLibro, "Novela");
	strcpy(libros[36].editorialLibro, "Bantam Spectra");
	libros[36].diaPublicacion = 10;
	libros[36].mesPublicacion = 9;
	libros[36].annoPublicacion = 2019;
	///LIBRO 38
	libros[37].codigoLibro = 1137;
	strcpy(libros[37].nombreLibro,"Juego de Tronos Sueño de primavera");
	strcpy(libros[37].autorLibro, "George R.R. Martin");
	strcpy(libros[37].generoLibro, "Novela");
	strcpy(libros[37].editorialLibro, "Bantam Spectra");
	libros[37].diaPublicacion = 10;
	libros[37].mesPublicacion = 9;
	libros[37].annoPublicacion = 2019;
	///LIBRO 39
	libros[38].codigoLibro = 1130;
	strcpy(libros[38].nombreLibro,"Juego de Tronos");
	strcpy(libros[38].autorLibro, "George R.R. Martin");
	strcpy(libros[38].generoLibro, "Novela");
	strcpy(libros[38].editorialLibro, "Bantam Spectra");
	libros[38].diaPublicacion = 06;
	libros[38].mesPublicacion = 8;
	libros[38].annoPublicacion = 1996;
	///LIBRO 40
	libros[39].codigoLibro = 1131;
	strcpy(libros[39].nombreLibro,"Juego de Tronos Choque de Reyes");
	strcpy(libros[39].autorLibro, "George R.R. Martin");
	strcpy(libros[39].generoLibro, "Novela");
	strcpy(libros[39].editorialLibro, "Bantam Spectra");
	libros[39].diaPublicacion = 16;
	libros[39].mesPublicacion = 11;
	libros[39].annoPublicacion = 1998;
	///LIBRO 41
	libros[40].codigoLibro = 1132;
	strcpy(libros[40].nombreLibro,"Juego de Tronos Tormenta de espadas");
	strcpy(libros[40].autorLibro, "George R.R. Martin");
	strcpy(libros[40].generoLibro, "Novela");
	strcpy(libros[40].editorialLibro, "Bantam Spectra");
	libros[40].diaPublicacion = 8;
	libros[40].mesPublicacion = 8;
	libros[40].annoPublicacion = 2000;
	///LIBRO 42
	libros[41].codigoLibro = 1133;
	strcpy(libros[41].nombreLibro,"Juego de Tronos Festin de cuervos");
	strcpy(libros[41].autorLibro, "George R.R. Martin");
	strcpy(libros[41].generoLibro, "Novela");
	strcpy(libros[41].editorialLibro, "Bantam Spectra");
	libros[41].diaPublicacion = 17;
	libros[41].mesPublicacion = 10;
	libros[41].annoPublicacion = 2005;
	///LIBRO 43
	libros[42].codigoLibro = 1134;
	strcpy(libros[42].nombreLibro,"Juego de Tronos Danza de dragones");
	strcpy(libros[42].autorLibro, "George R.R. Martin");
	strcpy(libros[42].generoLibro, "Novela");
	strcpy(libros[42].editorialLibro, "Bantam Spectra");
	libros[42].diaPublicacion = 12;
	libros[42].mesPublicacion = 07;
	libros[42].annoPublicacion = 2011;
	///LIBRO 44
	libros[43].codigoLibro = 1135;
	strcpy(libros[43].nombreLibro,"Juego de Tronos Vientos en invierno");
	strcpy(libros[43].autorLibro, "George R.R. Martin");
	strcpy(libros[43].generoLibro, "Novela");
	strcpy(libros[43].editorialLibro, "Bantam Spectra");
	libros[43].diaPublicacion = 10;
	libros[43].mesPublicacion = 9;
	libros[43].annoPublicacion = 2018;
	///LIBRO 45
	libros[44].codigoLibro = 1136;
	strcpy(libros[44].nombreLibro,"Juego de Tronos Sueño de primavera");
	strcpy(libros[44].autorLibro, "George R.R. Martin");
	strcpy(libros[44].generoLibro, "Novela");
	strcpy(libros[44].editorialLibro, "Bantam Spectra");
	libros[44].diaPublicacion = 10;
	libros[44].mesPublicacion = 9;
	libros[44].annoPublicacion = 2019;
	///LIBRO 46
	libros[45].codigoLibro = 1137;
	strcpy(libros[45].nombreLibro,"Juego de Tronos Sueño de primavera");
	strcpy(libros[45].autorLibro, "George R.R. Martin");
	strcpy(libros[45].generoLibro, "Novela");
	strcpy(libros[45].editorialLibro, "Bantam Spectra");
	libros[45].diaPublicacion = 10;
	libros[45].mesPublicacion = 9;
	libros[45].annoPublicacion = 2019;
	///LIBRO 47
	libros[46].codigoLibro = 1130;
	strcpy(libros[46].nombreLibro,"Juego de Tronos");
	strcpy(libros[46].autorLibro, "George R.R. Martin");
	strcpy(libros[46].generoLibro, "Novela");
	strcpy(libros[46].editorialLibro, "Bantam Spectra");
	libros[46].diaPublicacion = 06;
	libros[46].mesPublicacion = 8;
	libros[46].annoPublicacion = 1996;
	///LIBRO 48
	libros[47].codigoLibro = 1131;
	strcpy(libros[47].nombreLibro,"Juego de Tronos Choque de Reyes");
	strcpy(libros[47].autorLibro, "George R.R. Martin");
	strcpy(libros[47].generoLibro, "Novela");
	strcpy(libros[47].editorialLibro, "Bantam Spectra");
	libros[47].diaPublicacion = 16;
	libros[47].mesPublicacion = 11;
	libros[47].annoPublicacion = 1998;
	///LIBRO 49
	libros[48].codigoLibro = 1132;
	strcpy(libros[48].nombreLibro,"Juego de Tronos Tormenta de espadas");
	strcpy(libros[48].autorLibro, "George R.R. Martin");
	strcpy(libros[48].generoLibro, "Novela");
	strcpy(libros[48].editorialLibro, "Bantam Spectra");
	libros[48].diaPublicacion = 8;
	libros[48].mesPublicacion = 8;
	libros[48].annoPublicacion = 2000;
	///LIBRO 50
	libros[49].codigoLibro = 1133;
	strcpy(libros[49].nombreLibro,"Juego de Tronos Festin de cuervos");
	strcpy(libros[49].autorLibro, "George R.R. Martin");
	strcpy(libros[49].generoLibro, "Novela");
	strcpy(libros[49].editorialLibro, "Bantam Spectra");
	libros[49].diaPublicacion = 17;
	libros[49].mesPublicacion = 10;
	libros[49].annoPublicacion = 2005;	
}

//Funcion anexar libros
void Anexar_libros(int *p_contadorlibros, int &id, int *p_diaActual,int *p_mesActual, int *p_annoActual ){
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
}
//Funcion de los menus
void menus(struct libreria libros[1000]){
	//Variables
	int seleccionLogin, seleccionMenu, seleccionConsulta, contadorLibros, diaActual, mesActual, annoActual, id = 51, contaViejos, contaNuevos, contaL_dupli[1000000];
	char nomAdmin[30], contraAdmin[30];
	// Punteros
	int *p_selLogin, *p_contadorlibros, *p_diaActual, *p_mesActual, *p_annoActual, *p_contaViejos, *p_contaNuevos;
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
	p_contaViejos = &contaViejos;
	p_contaNuevos = &contaNuevos;
	
	*p_contaViejos = 0;
	*p_contaNuevos = 0;
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
		//Menu login
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
							system("cls");
							do{
								//Menu administrador
								printf("MENU DEL ADMINISTRADOR\n");
								printf("Seleccione una opcion"
									   "\n1. Anexar libro"
									   "\n2. Inventario libros antiguos y nuevos"
									   "\n3. Prestamo de libro segun existencia"
									   "\n4. Consultas de libros"
									   "\n0. Salir"
									   " \nIngrese la opcion: ");
								scanf("%d", &seleccionMenu);							
								system("cls");
								switch(seleccionMenu){
									// Caso 1 ya se realizo
									case 1:{				
										//Llamo la funcion anexar libros
										Anexar_libros(p_contadorlibros, id, p_diaActual, p_mesActual,p_annoActual);
										break;
									}
									case 2:{
										// Continuar para la clase 		
											
										
											
										for(int i = 0; i < *p_contadorlibros; i++){
											if(i<50){
												*p_contaViejos = *p_contaViejos + 1;
											}else{
												*p_contaNuevos = *p_contaNuevos + 1;
											}
										}
										printf("	---- Cantidad de libros antiguos: %d ----\n",*p_contaViejos);
										printf("	---- Cantidad de libros nuevos: %d ----\n\n",*p_contaNuevos);
										
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
											if(i%9==0){
												getch();
												
												
												
											}
										}
										
										for(int i=0; i< *p_contadorlibros; i++){
											for(int j=i+1; j<*p_contadorlibros; j++){
												if(libros[i].codigoLibro == libros[j].codigoLibro){
													// aux datos libros
													int auxCodigo = libros[j].codigoLibro;
													char auxNombre[50] = libros[j].nombreLibro;
//													strcpy(auxNombre[50], libros[j].nombreLibro);
													char auxAutorLibro[50] = libros[j].autorLibro;
													char auxGeneroLibro[50] = libros[j].generoLibro;
													char auxEditorialLibro[50] = libros[j].editorialLibro;
													// aux fecha publicacion
													int auxDiaPublicacion = libros[j].diaPublicacion;
													int auxMesPublicacion = libros[j].mesPublicacion;
													int auxAnnoPublicacion = libros[j].annoPublicacion;
													// aux fecha Ingreso
													int auxDiaIngreso = libros[j].diaIngreso;
													int auxMesIngreso = libros[j].mesIngreso;
													int auxAnnoIngreso = libros[j].annoIngreso;
													// aux fecha prestamo
													int auxDiaPrestamo = libros[j].diaPrestamo;
													int auxMesPrestamo = libros[j].mesPrestamo;
													int auxAnnoPrestamo = libros[j].annoPrestamo;
													// aux fecha devolucion
													int auxDiaDevolucion = libros[j].diaDevolucion;
													int auxMesDevolucion = libros[j].mesDevolucion;
													int auxAnnoDevolucion = libros[j].annoDevolucion;													
													
													
													
												}
											}
										}
										
										
										getch();
										system("cls");										
										break;
									}
									case 3:{
										
										break;
									}
									case 4:{
											do{
												printf("MENU DE CONSULTA\n");
												printf("Seleccione una opcion de consulta"
													   "\n1. Consulta por genero"
													   "\n2. Consulta por nombre de autor"
													   "\n3. Consulta por nombre del libro"
													   "\n4. Consulta por editorial"
													   "\n5. Consulta por año de publicacion"
													   "\n0. Salir"
													   " \nIngrese la opcion: ");
												scanf("%d", &seleccionConsulta);							
												system("cls");
												switch(seleccionConsulta){
													case 1:{
														
														break;
													}
													case 2:{
															
														
														break;
													}
													case 3:{
															
														break;
													}
													case 4:{
														
														break;
													}
													case 5:{
														
														break;
													}
													case 0:{
														
														break;
													}
													default:{
														printf("la opcion no existe");
													};
												}
											} while(seleccionConsulta != 0);																				
										break;
									}								
									case 0:{
										printf("sesion terminada");										
										getch();
										system("cls");
										break;
									}
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
}

//Funcion principal
int main(){	
	libros_antiguos(libros);
	menus(libros);		
	return 0;
}

