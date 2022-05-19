/* autor:Oscar Vivaldi Partido Ramirez  realizado: 21/02/2022
programa  que calcula la media de las notas introducidas 
*/
#include <stdio.h>

int main(){
	int i=1, cuantosNumeros;
	float numero,media, suma;
	
	printf("cuantos numeros?");
	scanf("%d",&cuantosNumeros);
	
	while (i<=cuantosNumeros){
		printf("introduce la nota %d: ", i);
		scanf("%f",&numero);
		suma=suma+numero;
		i++;
	}
	
	media=suma/cuantosNumeros;
	printf("La media de estas %d notas es:%.2f", cuantosNumeros,media);
	return 0;
}

