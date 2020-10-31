#include <stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
void err_exit(char *s){
	printf("USAGE: *s is faile\n");
	exit(1);
}

typedef struct user{
	int id;
	char name[8];
	char htel[12];
	char tel[14];
}user;

void input();
void save(user *use);
char *mysort();
