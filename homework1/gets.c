#include<stdio.h>
#include<stdlib.h>

int main(){
	char a[8] = {'q','w','e','r','t','y','u','i'};
	char b[8] = {'1','2','3','4','5','6','7','8'};

	int i = 0;
	for(i=0; i<8; i++){
		printf("a[%d] = %c\t", i, a[i]);
		printf("b[%d] = %c\n", i, b[i]);
	}
	printf("use gets(): \n");
	printf("input gets(a):\n");
	gets(a);
	printf("input gets(b):\n");
	gets(b);
	for(i=0; i<8; i++){
                printf("a[%d] = %c\t", i, a[i]);
                printf("b[%d] = %c\n", i, b[i]);
        }
	return 0;
}
