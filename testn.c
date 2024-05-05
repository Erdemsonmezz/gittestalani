#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int bol(int a, int b) {
	
	if (b <= 0) {
		return -1;
	} else if (a > b) {
	return a/b;
	}
	
}

int main(int argc, char *argv[]) {
	int sonuc;
	
	sonuc = bol(4,0);
	
	
	printf("%d", sonuc);
	
	
	return 0;
}
