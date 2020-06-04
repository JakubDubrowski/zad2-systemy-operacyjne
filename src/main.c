#include <stdio.h>
#include "funkcje.c"

int main(){
	int bok;
	printf("Podaj długość boku: ");
	scanf("%d", &bok);
	pole(bok);
	objetosc(bok);
	return 0;
}
