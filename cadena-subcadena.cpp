#include <stdio.h>
int cad=0, subc=0, a=0;
char cadena[20] = "\0", subcadena[20]="\0";
main(){
	printf("Ingresa una palabra ");
	scanf("%s",cadena);
	while( cadena[cad] != '\0'){
		cad++;
	}
	printf("Igresa una palabra que este dentro de la palabra anterior ");
	scanf("%s",subcadena);
	while( subcadena[subc] != '\0'){ 
		subc++;
	}
	
	if(subc <= cad)
	{ 
		for(int i=0; i<=cad; i++)
		{
			if(cadena[i] == subcadena[a] and subcadena[a] != '\0')
			{
				a++;
			}
		}
		if( a == subc){ 
			printf("\nla cadena %s si existe",subcadena);
		}
		else{ 
			printf("\nla cadena %s no existe",subcadena);
		}
	}
	else
	{ 
		printf("La subcadena no puede ser mas grande que la cadena", subcadena, cadena);
	}
	
}
