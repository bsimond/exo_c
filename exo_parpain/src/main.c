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

int tolerance=2;
int ref_weight = 19000 ;
int ref_width = 200 ;
int ref_length = 500 ;
int ref_height = 200 ;
int value_weight;
int value_width;
int value_lenght;
int value_height;
int input_weight;
int input_width;
int input_lenght;
int input_height;




bool in_range(value,ref,tolerance){

	int val_min;
	int val_max;
	val_min= ref-((ref*tolerance)/100);
	val_max= ref+((ref*tolerance)/100);

	if ((value < val_max) && (value >val_min)){
		return true;
	}
	else {
		return false;
	}
}


int check_number_error() {
	int cpt_error = 0;
	if(!in_range(value_lenght, ref_length, tolerance )){
		cpt_error += 1;
	}
	if (!in_range(value_width,ref_width,tolerance )){
		cpt_error +=1;
	}
	if (!in_range(value_height,ref_height,tolerance )) {
		cpt_error +=1;
	}
	return cpt_error;
}

int main(int argc , char* argv []) {

	printf ("entrez un poids:\n");
	input_weight= scanf("%d", &value_weight);
	printf ("entrez une largeur:\n");
	input_width= scanf("%d",&value_width);
	printf ("entrez une largeur:\n ");
	input_lenght=scanf( "%d", &value_lenght );
	printf("entrez une hauteur:\n");
	input_height= scanf("%d,", &value_height );

	int cpt =0;

    cpt =check_number_error();
	if (in_range(value_weight,ref_weight,tolerance )){
		if (cpt <= 1){
			printf("categorie A");
		}
		else {
			printf("categorie B");
		}
	}
	else {
		if (cpt == 0 ){
			printf("categorie B");
		}
		else {
			printf("categorie C");
		}
	}
	return 0;
}
