#include<stdio.h>



float dec1;
float dec2;
float result;


int main(void){


	printf( "entrez nombre decimal" );
	scanf("%f" , &dec1);
	printf("entrez un deuxieme nombre decimal:\n");
	scanf("%f",  &dec2);


	result=  dec1 - dec2;



	if (result > 0){
		printf("la premier decimal est plus grande, donc le resultat est de %.2f", result);
	}
	else if (result < 0){
		printf(" la seconde decimal est plus grande, donc le resultat est de %.2f", result);
	}
	else{

		printf("return 0");
	}


	return 0;

}
