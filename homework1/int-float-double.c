#include<stdio.h>

float pow1(int a, int b);
double pow2(double a, int b);
double e_t_d(double *emp);

int main(){
	int i = 0;
	int max = 0, min = 0;
	printf("The first is the max and min of int\n");
	while(1){
		i++;
		if(i+1 <= 0){
			max = i;
			min = i + 1;
			break;
		}
	}
	printf("int max = %d\tmin = %d\n", max, min);
	printf("The second is the max and min of float\n");
	double f[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	float fmin = 0, fmax = 0;
	int fE = 254;
	fmax = pow1(2, (fE-127)) * e_t_d(f);
        fmin = (-1) * pow1(2, (fE-127)) * e_t_d(f);
	printf("float max = %f\tmin = %f\n", fmax, fmin);
	printf("The third is the max and min of double\n");
	double d[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	double dmax = 0, dmin = 0;
	int dE = 2046;
	dmax = pow2(2, (dE - 1023)) * e_t_d(d);
	dmin = (-1) * pow2(2, (dE - 1023)) * e_t_d(d);
	printf("double max = %lf\tmin = %lf\n", dmax, dmin);
	return 0;
	
}

float pow1(int a, int b){
	float sum = 1;
	int i = 0;
	for(i=0; i<b; i++){
		sum *= a;
	}
	return sum;
}

double pow2(double a, int b){
        double sum = 1;
        int i = 0;
	if(b < 0){
		for(i=0; i<-b; i++){
                	sum *= a;
        	}	
		sum = 1 / sum;
		return sum;
	}
        for(i=0; i<b; i++){
                sum *= a;
        }
        return sum;
}

double e_t_d(double *emp){
	double sum = 1;
	int i = 0;
	while(1){
		sum += pow2(2, emp[i]-(i + 2));
	       i++;	
	       if(emp[i]){
	           return sum;
	       }
	}
	return sum;
}

