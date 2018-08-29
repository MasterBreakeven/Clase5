/*
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
                             //Comando strcpy


//La función retorna el valor de s1. Si al copiar una cadena a la otra se 
//superponen, entonces el comportamiento no está definido. Si el array/arreglo 
//apuntado por s2 es una cadena que es más corta que n caracteres, entonces 
//caracteres nulos son añadidos a la copia en el array apuntado por s1.


int main() {
	
	char texto[100]="Hola mundo";
	
	strcpy(texto_destino,texto_origen);
	printf ("%c",texto);
	
	return 0;
}
*/
/*
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
//Comando strcpy usuario ingresa
int main() {
	char texto[100];
	printf("ingrese una palabra o frase\n");
	//el gets es para cadena y el scanf es mas que todo para numeros
	gets(texto);
	int longitud = 0;
	//contar cuantos caracteres tienen la palabra
	longitud = strlen(texto);
	printf ("%d",longitud);
	
	return 0;
}
*/
/*
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
//Comando strcpy V2 Manda lo del origen al destino
int main() {
	//variables misma longitud
	char texto_origen[100]="Hola mundo";
	char texto_destino[100];
	
	strcpy(texto_destino,texto_origen);
	printf ("%s",texto_destino);
	
	return 0;
}
*/
/*
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
//Comando strcpy V2 Manda lo del origen al destino usuario ingreso
int main() {
	//variables misma longitud
	char texto_origen[100];
	char texto_destino[100];
	printf("ingrese lo que quiera\n");
	gets(texto_origen);
	//aparece en otra variable
	strcpy(texto_destino,texto_origen);
	printf ("lo que ingreso esta en otra parte %s",texto_destino);
	
	return 0;
}
*/
/*
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
                                    //Comando strcmp 
//La función retorna un número entero mayor, igual, o menor que cero,
//apropiadamente según la cadena apuntada por s1 es mayor, igual, o menor que 
//la cadena apuntada por s2.
//minuscula mayor mayuscula menor
int main() {
	//variables misma longitud
	char texto_1[100]="hola";
	char texto_2[100]="HoLA";
	int resultado;
	//compara una de la otra para ver la mayor
	resultado= strcmp(texto_1,texto_2);
	printf("%d",resultado);
	return 0;
}
*/
/*
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

                                    //Comando strcat 


//Añade una copia de la cadena apuntada por s2 (incluyendo el carácter nulo) al
//final de la cadena apuntada por s1. El carácter inicial de s2 sobrescribe el
//carácter nulo al final de s1.


//para unir dos variables
int main() {
	//variables misma longitud
	char texto_1[100]="Hola ";
	char texto_2[100]="Mundo";
	
	//une lo de una cadena con otra cadena strcat
	strcat(texto_1,texto_2);
	printf("%s",texto_1);
	return 0;
}
*/
/*
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//Comando strcat usuario ingresa
int main() {
	//variables misma longitud
	char texto_1[100];
	char texto_2[100];
	printf("ingrese dos palabras\n");
	gets(texto_1);
	gets(texto_2);
	//une lo de una cadena con otra cadena strcat
	strcat(texto_1,texto_2);
	printf("%s",texto_1);
	return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <iostream>
                               //Comando memcpy


//La función retorna el valor de s1. Si al copiar un objeto al otro se 
//superponen, entonces el comportamiento no está definido.


int main()
{
	char a[7] = "abcdefg";
	char *ptr;
	int i;
	
	memcpy( ptr, a, 5 );
	for( i=0; i<7; i++ )
		printf( "a[%d]=%c ", i, a[i] );
	printf( "\n" );
	for( i=0; i<5; i++ )
		printf( "ptr[%d]=%c ", i, ptr[i] );
	printf( "\n" );
	
	return 0;
}
*/
/*
                              //Comando memchr

//La función retorna un puntero al carácter localizado, o un puntero nulo si 
//el carácter no apareció en el objeto.

//busca la letra que le seleccione y muestra el texo desde alli
#include <stdio.h>
#include <string.h>
#include <iostream>
	int main()
{
	char cadena[] = "Erase una vez...";
	char *puntero; 
	
	puntero = (char *)memchr( cadena, 'a', 5 );
	printf( "%s\n", cadena); 
	printf( "%s\n", puntero ); 
	
	return 0;
}
*/
/*
                                 //Comando memcmp

//La función retorna un número entero mayor, igual, o menor que cero, 
//apropiadamente según el objeto apuntado por s1 es mayor, igual, o menor que 
//el objeto apuntado por s2.

//compara los datos almacenados en los arreglos y dice cual es mayor y menorde 
//los 2
#include <stdio.h>
#include <string.h>
#include <iostream>
int main()
{
	char a[3] = { 82, 81, 84 };
	char b[3] = { 85, 83, 86 };
	int i;
	
	for( i=0; i<3; i++ )
		printf( "a[%d]=%c ", i, a[i] );
	printf( "\n" );
	for( i=0; i<3; i++ )
		printf( "b[%d]=%c ", i, b[i] );
	printf( "\n" );
	
	i = memcmp( a, b, 4 );
	printf( "a es " );
	if( i < 0 )  printf( "menor que" );
	else if( i > 0 )  printf( "mayor que" );
	else  printf( "igual a" );
	printf( " b\n" );
	
	return 0;
}
*/

/*
                       //Comando memmove

//La función retorna el valor de s1.


#include <stdio.h>
#include <string.h>
#include <iostream>
	int main()
{
	char a[7] = "abcdefg";
	char *ptr;
	int i;
	
	memmove( ptr, a, 5 );
	for( i=0; i<7; i++ )
		printf( "a[%d]=%c ", i, a[i] );
	printf( "\n" );
	for( i=0; i<5; i++ )
		printf( "ptr[%d]=%c ", i, ptr[i] );
	printf( "\n" );
	
	return 0;
}
*/
/*
                                  //Comando memset

//La función retorna el valor de s, en este caso F


#include <stdio.h>
#include <string.h>
#include <iostream>
int main()
{
	char c = 'F';
	char *s;
	int i;
	
	s = (char*)malloc(5*sizeof(char));
	memset( s, c, 5 );
	for( i=0; i<5; i++ )
		printf( "c[%d]=%c ", i, c );
	printf( "\n" );
	free(s);
	return 0;
}
*/
/*
                            //Comando strchr


//La función retorna un puntero a partir del carácter encontrado. Si no se ha 
//encontrado el carácter, c, entonces retorna un puntero null.

//muestra el texto desde la letra que yo le diga
#include <iostream>
#include <stdio.h>
#include <string.h>
	
	int main()
{
	char s[] = "Hola amigos";
	char c = 'a';
	
	printf( "s=%s\t", s );
	printf( "c=%c\n", c );
	printf( "strchr=%s\n", strchr( s, c ) );
	
	return 0;
}
*/

/*
                                //Comando strcoll


//La función retorna un número entero mayor, igual, o menor que cero, 
//apropiadamente según la cadena apuntada por s1 es mayor, igual, o menor que 
//la cadena apuntada por s2, cuando ambas son interpretadas apropiadamente 
//según la localidad actual.


//si es mayuscula es menor de lo contrario es mayor, identifica el mayor y menor
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "Abeja";
	char s2[] = "abeja";
	int i;
	
	printf( "s1=%s\t", s1 );
	printf( "s2=%s\n", s2 );
	
	i = strcoll( s1, s2 );
	printf( "s1 es " );
	if( i < 0 )  printf( "menor que" );
	else if( i > 0 )  printf( "mayor que" );
	else  printf( "igual a" );
	printf( " s2\n" );
	
	return 0;
}
*/
/*
                              //Comando strcspn

//busca lo que este almacenado en el s2 y dice en que espacio esta
#include <iostream>
#include <stdio.h>
#include <string.h>
	
	int main()
{
	char s1[13] = "Hola a todos";
	char s2[5] = "abcd";
	
	printf( "s1=%s\n", s1 );
	printf( "s2=%s\n", s2 );
	printf( "strcspn(s1,s2) = %d\n", strcspn( s1, s2 ) );
	
	return 0;
}
*/
/*
                            //Comando strerror


//La función retorna la cadena de caracteres conteniendo el mensaje asociado 
//con el número de error. Esta conversión y el contenido del mensaje dependen 
//de la implementación. La cadena no será modificada por el programa, pero sí 
//puede ser sobrescrito con otra llamada a la misma función.


//muestra los errores del 0 al 38 errores de compilacion
#include <iostream>
#include <stdio.h>
#include <string.h>
	
	int main()
{
	int errnum;
	
	for( errnum=0; errnum<39; errnum++ )
		printf( "strerror(%d) = %s\n", errnum, strerror( errnum ) );
	
	return 0;
}
*/
/*
                                   //Comando strlen

//muestra la longitud del texto
#include <iostream>
#include <stdio.h>
#include <string.h>
	
	int main()
{
	char s[13] = "Hola a todos";
	
	printf( "s=%s\n", s );
	printf( "strlen(s) = %d\n", strlen( s ) );
	
	return 0;
}
*/
/*
                            //Comando strncat

//busca la ubicacion que le demos y mustra el texto hasta esa ubicacion
#include <iostream>
#include <stdio.h>
#include <string.h>
	
	int main()
{
	char s1[11] = "Hola ";
	char s2[] = "amigos";
	
	printf( "s1=%s\t", s1 );
	printf( "s2=%s\n", s2 );
	strncat( s1, s2, 3 );
	printf( "s1=%s\n", s1 );
	
	return 0;
}
*/

/*
                                  //Comando strncmp


//dice cuantas letras tienen igual s1,s2
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[9] = "artesano";
	char s2[8] = "artista";
	int i;
	
	printf( "s1=%s\t", s1 );
	printf( "s2=%s\n", s2 );
	
	i = strncmp( s1, s2, 3 );
	printf( "Las 3 primeras letras de s1 son " );
	if( i < 0 )  printf( "menores que" );
	else if( i > 0 )  printf( "mayores que" );
	else  printf( "iguales a" );
	printf( " s2\n" );
	
	return 0;
}
*/
/*
                              //Comando strncpy


//muestra en s1 la cantidad de longitud que nosotros le demos
#include <iostream>
#include <stdio.h>
#include <string.h>
	
	int main()
{
	char s2[8] = "abcdefg";
	char s1[8];
	
	strncpy( s1, s2, 3 );
	printf( "s2=%s\n", s2 );
	printf( "s1=%s\n", s1 );
	
	return 0;
}
*/
/*
							//Comando strpbrk


//muestra apartir de la letra a buscar que se la damos nosotros en este caso
//muestra a partir de la d que fue la primera letra encontrada
#include <iostream>
#include <stdio.h>
#include <string.h>
	
	int main()
{
	char s1[13] = "Hola a todos";
	char s2[5] = "deip";
	
	printf( "s1=%s\n", s1 );
	printf( "s2=%s\n", s2 );
	printf( "strpbrk(s1,s2) = %s\n", strpbrk( s1, s2 ) );
	
	return 0;
}
*/
/*
									//Comando strrchr

//muestra el texto a partir del caracter ingresado en este caso a 
#include <iostream>
#include <stdio.h>
#include <string.h>
	
	int main()
{
	char s[] = "Hola amigos";
	char c = 'a';
	
	printf( "s=%s\t", s );
	printf( "c=%c\n", c );
	printf( "strrchr=%s\n", strrchr( s, c ) );
	
	return 0;
}
*/
/*
                                    //Comando strspn


//La función retorna la longitud de esta subcadena.
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[13] = "Hola a todos";
	char s2[5] = "Hola";
	
	printf( "s1=%s\n", s1 );
	printf( "s2=%s\n", s2 );
	printf( "strspn(s1,s2) = %d\n", strspn( s1, s2 ) );
	
	return 0;
}
*/
/*
                                          //Comando strstr

//muestra el texto a partir de las letras dadas
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[13] = "Hola a todos";
	char s2[3] = "la";
	
	printf( "s1=%s\n", s1 );
	printf( "s2=%s\n", s2 );
	printf( "strstr(s1,s2) = %s\n", strstr( s1, s2 ) );
	
	return 0;
}
*/
/*
                          //comando strtok


//Rompe la cadena s1 en segmentos o tókens. 
#include <iostream>
#include <stdio.h>
#include <string.h>
	
	int main()
{
	char s1[49] = "Esto es un ejemplo para usar la funcion strtok()";
	char s2[4] = " \n\t";
	char *ptr;
	
	printf( "s1=%s\n", s1 );
	
	ptr = strtok( s1, s2 );    // Primera llamada => Primer token
	printf( "%s\n", ptr );
	while( (ptr = strtok( NULL, s2 )) != NULL )    // Posteriores llamadas
		printf( "%s\n", ptr );
	
	return 0;
}
*/
/*
                           //comando strxfrm

//muestra la longitud del s2 en el s1
#include <iostream>
#include <stdio.h>
#include <string.h>
	
	int main()
{
	char s2[8] = "abcdefg";
	char s1[7];
	int i;
	
	i = strxfrm( s1, s2, 4 );
	printf( "s2=%s\n", s2 );
	printf( "s1=%s\tlonguitud=%d\n", s1, i );
	
	return 0;
}
*/
