#include <stdio.h>
#include <stdlib.h>



int comparer(const char s1[], const char s2[]){

int i;

	for ( i=0 ;(s1[i]!= '\0' && s2[i]!= '\0' && s1[i]==s2[i]) ; i++){


int main (int argc, char *argv[]) {

	char s1;
	char s2;
	int result;

	printf("entrez un mot");
	scanf("%s", &s1);
	printf("entrez un deuxieme mot");
	scanf("%s", &s2);

	result =comparer(s1,s2);

		if (result==0){
			printf("les mot sont identiques");
		}
		else if (result ==-1){
			printf ("%s, est en premier dans l'alphabet", s1 );
		}
		else {
			printf("%s , est en premier dans l alphabet", s2 );
		}

return 0;
}


