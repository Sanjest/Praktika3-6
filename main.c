#define TERMINAL_VAL 0
#include <stdio.h>
int main(){
	int i;
	do{
		printf("Type number: ");
		scanf("%d", &i);
	}
	while (i!=TERMINAL_VAL);
}
