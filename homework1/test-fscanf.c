#include "my1.h"

int main(){
	FILE *fp = fopen("user.dat", "rb");
	char c[1024];
	int i = 0, sum;
	memset(c, '\0', sizeof(c));
	while(1){
		sum = fscanf(fp, "%s %s %s %s", &c[i], &c[i+1], &c[i+2], &c[i+3]);
		printf("%d\n", sum);
		i += 4;
		if(ftell(++fp) == EOF){
			break;
		}
	}
	int j = 0;
	for(j=0; j<i+4; j++){
		printf("%s\n", &c[j]);
	}
	return 0;

}
