#include<stdio.h>
 
void main() {
	for (int _inumber1 = 0; _inumber1 < 5; _inumber1++) {
		for (int _inumber2 = 4; _inumber2 > _inumber1; _inumber2--) {
			printf (" ");
		}
		for (int _inumber3 = 0; _inumber3 <= _inumber1; _inumber3++) {
			printf ("*");
		}
		printf("\n");
	}
	
	fgetc(stdin);
}