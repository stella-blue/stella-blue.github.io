#include <stdio.h>

int main(void){
	int a = 4;
	for(int i=1; i<=50; i++){
		printf("        <span id=\"tabelem-%d-%d\" class=\"select\" onclick=\"doAction(%d, %d)\"> </br></span>\n", a, i, a, i);
	}
}
