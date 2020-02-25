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



#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(int argc, char *argv[]) {


	char  phrase[]="Qu'est-ce qu'un processeur ARM ?"
					"C'est un type de processeur particulier dont l'agencement des composants"
					"électroniques permet une taille réduite. ARM est l'acronyme de Advanced Risk"
					"Machine. A l'origine, le A de ARM signifiait Acorn, le nom de la société qui a"
					"équipé pour la première fois un ordinateur avec un processeur ARM, en 1987."
					"Depuis, l'architecture ARM a rencontré un succès qui ne se dément pas,"
					"notamment ces dernières années. Des processeurs ARM, on en trouve dans tous"
					"les smartphones récents : iPhone 4, Samsung Galaxy S, tout comme dans l'iPad,"
					"le Nokia N97 ou le Nexus One de Google. Mais la société ARM ltd ne fabrique"
					"pas, à proprement parler, les processeurs. Elle conçoit les architectures des"
					"processeurs, leurs plans en quelque sorte. Ce sont les clients qui, après"
					"achat des licences, produisent les processeurs. Par exemple, Samsung fabrique"
					"un processeur ARM pour ses téléphones haut de gamme (Samsung Galaxy S et"
					"Wave), reposant sur l'architecture ARM Cortex-A8, cadencée à 1 GHz. Le"
					"processeur Apple A4, qui équipe les iPhone 4 et les iPad, utilise exactement"
					"la même architecture Cortex-A8. Ces <petits>  processeurs connaissent un tel"
					"succès qu'ils évoluent très rapidement : Samsung a déjà annoncé le remplaçant"
					"de Cortex-A8 ; celui-ci répond au nom de Cortex-A9 et intègre deux coeurs,"
					"comme dans les PC. Quant au Cortex-A15, qui devrait être disponible dans une"
					"vingtaine de mois, on sait déjà qu'il s'agira d'un processeur quatre coeurs"
					"cadencé à 2,5 GHz et basse consommation ! Un tel processeur devrait avoir des"
					"performances similaires à celles d'un ordinateur portable très haut de gamme,"
					"alors qu'il est prévu pour être embarqué dans un téléphone de seulement"
					"quelques millimètres d'épaisseur.";


	char vowel[]= {'a','e','i','o','u','y','A','E','I','O','U','Y','é','à','è','ù','â','ê','î','ô','û'};

	char consonne[]={'b','c','d','f','g','h','j','k','l','m', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z','ç',
			'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z'};



	int lenphrase= strlen (phrase);
	int lenvowel= strlen(vowel);
	int lenconsonne= strlen(consonne);
	int nbrvowel=0;
	int nbrconsonne=0;
	int nbrlettre=0;



	for (int i=0; i<lenphrase ; i++){
		for(int j=0; j< lenvowel; j++){
			if(phrase[i]== vowel[j]){
				nbrvowel+=1;
			}
		}
		for (int k=0; k<lenconsonne; k++){
			if (phrase[i]==consonne[k]){
				nbrconsonne+=1;
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


 return 0;
}












