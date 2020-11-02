#include "my.h"

void input(){
	user *use;
	use = (user *)malloc(sizeof(use));
	char c;
	do{
	printf("Please input your id(only use number): \n");
	scanf("%d", &use->id);
	getchar();
	printf("Please input your name(length <= 8): \n");
	scanf("%s", &use->name);
	getchar();
	printf("Please input your hometelephone(0451-57022449): \n");
	scanf("%s", &use->htel);
	getchar();
	printf("Please input your telephone(18870471234): \n");
	scanf("%s",&use->tel);
	getchar();
	save(use);
	printf("Do you want to input(y/n):  \n");
	scanf("%c", &c);
	getchar();
	}while(c == 'y');
}

void save(user *use){
	FILE *fp = fopen("user.dat", "a+");
	if(fp == NULL){
		err_exit("error to open file!\n");
	}

	fprintf(fp, "%d\t%s\t%s\t%s\n", use->id, use->name, use->htel, use->tel);
	printf("Succeed to input!\n");
}

