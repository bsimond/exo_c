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




#include <stdlib.h>
#include <stdio.h>

#define ARRAY_SIZE 128

int main (int argc, char *argv[]) {


	FILE* fichier = NULL;

    fichier = fopen("/home/simond/Atollic/TrueSTUDIO/STM32_workspace_9.3/61_count_char_file.c/Debug/texte_exo", "r");

   char line[ ARRAY_SIZE  ];

    char vowel[]= {'a','e','i','o','u','y','A','E','I','O','U','Y','é','à','è','ù','â','ê','î','ô','û',};

    	char consonne[]= {'b','c','d','f','g','h','j','k','l','m', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z',
    			'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z','ç',};



    	int lenfichier= strlen (fichier);
    	int lenvowel= strlen(vowel);
    	int lenconsonne= strlen(consonne);
    	int nbrvowel=0;
    	int nbrconsonne=0;
    	int nbrlettre=0;
    	int nbrline =0;



    while ( fgets ( line, ARRAY_SIZE  , fichier ) != NULL ){
    	nbrline+=1	;
    	printf("Ligne %d : %s",nbrline, line);


    	for (int i=0;line[i]!='\0' ; i++){
    		for(int j=0; j< lenvowel; j++){
    			if(line[i]== vowel[j]){
    				nbrvowel+=1;
    			}
    		}
    		for (int k=0; k<lenconsonne; k++){
    			if (line[i]==consonne[k]){
    				nbrconsonne+=1;
    			}
    		}
    	}
    }

    nbrlettre=nbrconsonne+nbrvowel;


    printf( "il y a %d de lettre:\n", nbrlettre );
    printf("il y a %d consonne;\n", nbrconsonne);
    printf("il y a %d voyelle :\n", nbrvowel);


    	float tauxvoyelle=0;
    	float tauxconsonne=0;



    	tauxvoyelle= (nbrvowel*100.00)/nbrlettre;
    	printf("il y a %.2f %% de voyelle dans le texte:\n",tauxvoyelle);
    	tauxconsonne= 100.00 - tauxvoyelle;
    	printf("il y a %.2f %% de consonne dans le texte",tauxconsonne );

     fclose(fichier);
     return 0;

 }



