

#include<stdio.h>
#include<stdbool.h>


int interruptor;
int light;


int light_state(int interruptor){

	if (interruptor == 1 ){
		light=!light;
	}
	else if (interruptor ==2 ){
		light =!light;
	}

	return light;
}

int main(void){

int input_interruptor;


	while (1){
		printf(" choose interrupter 1 or interrupter 2:\n ");
		input_interruptor = scanf ("%d", &interruptor);

		if (interruptor >2){
			printf("l'interupteur %d n'existe pas:\n", interruptor);
		}


		light=light_state(interruptor);

		if (light == 1 ){
			printf("lumiere allumée:\n");
		}
		else {
			printf("lumiere eteinte;\n");
		}
	}

	return 0;
}


