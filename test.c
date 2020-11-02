#include"my1.h"

int main(){
	FILE *fp = fopen("user.dat", "rb");
	int id[8], sum;
	char name[8];
	char htel[14];
	char tel[12];
	while(1){
		fscanf(fp,"%s %s %s %s", id, name, htel, tel);
		printf("%s %s %s %s", id, name, htel, tel);
		fseek(fp,4,SEEK_CUR);
		printf("%d\n",ftell(fp));
		if(ftell(fp)){
			break;
		}

	}
	printf("End\n");
	fclose(fp);
	return 0;
}
