/*
 *****************************************************************************

  File        : main.cpp

  The MIT License (MIT)
  Copyright (c) 2019 STMicroelectronics

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

 *****************************************************************************
 */

#include<stdio.h>
#include<stdbool.h>


bool nuit_partiel;
int hour;
int intense=0;
int input_hour;

int economie(hour, intense){
	int economie;

	economie= intense - 100;
		return economie
}



int light_night(nuit_partiel, hour ){

	if (hour > 0 && hour < 60*5) {
		intense=70;
		printf("le luminaire est a %d %%", intense);
		return intense;
	}
	else if ((hour > 60*18 && hour < 60*20 ) || (hour > 60*6 && hour <60*8)) {
		intense=50;
		printf("le luminaire est a %d %%", intense);
		return intense;
	}
	else {
		intense=100;
		printf("le luminaire est a %d %%", intense);
		return intense;
	}
}

int main(int argc , char* argv []){

	printf("quel heure est-il?:\n");
	input_hour=scanf("%d",&hour);


		if (hour <=60*8  || hour >= 60*18 ){
			light_night(nuit_partiel , hour);
		}
		else if (hour > 60*8 || hour < 60*18 ){
			printf("il fait jour, pas besoin de lumiere");
		}

		intense=economie (hour,intense);
		for (int i== 0;  )

		return 0;
}


