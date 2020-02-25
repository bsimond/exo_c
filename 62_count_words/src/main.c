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

	int nbrline=0;
	nbrmot=0;
	char mot;

	FILE* fichier = NULL;

    fichier = fopen("/home/simond/Atollic/TrueSTUDIO/STM32_workspace_9.3/61_count_char_file.c/Debug/texte_exo", "r");

   char line[ ARRAY_SIZE  ];

   while ( fgets ( line, ARRAY_SIZE  , fichier ) != NULL ){
       	nbrline+=1	;
       	printf("Ligne %d : %s",nbrline, line);

        int i = 0;

           //Tant que nous ne sommes pas arrivés a la fin de la chaine, continuer
           while (chaine[i] != '\0')
           {
               /*si chaine[1] est une minuscule
                *Car les minuscules se situent entre 97 et 122 inclusivement
                */
               if (chaine[i]  >= 97 &&  chaine[i] <= 122)

                   //Convertir en majuscules
                   chaine[i] = chaine[i] - 32;
               i++;
           }


   }
       	return 0;


}
