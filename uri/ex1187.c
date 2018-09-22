/*Read an uppercase character that indicates an operation that will be performed in an array M[12][12]. Then, calculate and print the sum or average 
considering only that numbers that are included in the green area of this array, like shown in the following figure.

Input
The first line of the input contains a single uppercase character O ('S' or 'M'), indicating the operation Sum or Average (Média in portuguese) to be 
performed with the elements of the array. Follow 144 double numbers of the array.

Output
Print the calculated result (sum or average), with one digit after the decimal point.*/

#include<stdio.h>

int main(){
	double M, s=0;
	char O;
	int i, f, g=1;
	
	scanf("%s", &O);
	
	for(i=0; i<12; i++){
		for (f=0; f<12; f++){
			scanf("%lf", &M);
			if (f>=g && f<=11 - g){
				s += M;
			}
		}
		g++;
	}
	if(O=='S'){
		printf("%.1f\n", s);
	}else if(O=='M'){
		s = s/30;
		printf("%.1f\n", s);
	}
	
	return 0;
}