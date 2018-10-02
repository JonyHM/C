/*Julius Caesar used a system of cryptography, now known as Caesar Cipher, which shifted 
each letter 2 places further through the alphabet (e.g. 'A' shifts to 'C', 'R' shifts to 
'T', etc.). At the end of the alphabet we wrap around, that is 'Y' shifts to 'A'. We can, 
of course, try shifting by any number.

Input
The input contains several test cases. The first line of input contains an integer N that 
indicates the number of test cases. Each test case is composed by two lines. The first line 
contais a string that is a codified sentence. This string will contain between 1 and 50 
characters, inclusive. Each character is an uppercase letter ('A'-'Z'), that is the codified 
sentence to this modified Caesar Cipher. The second line contains the number of right shift, 
this value is between 0 and 25, inclusive.

Output
Given an encoded text and a number of shifted letters, decode it to the original sentence, 
acording to the explanation above and the following example.


6

VQREQFGT
2														TOPCODER

ABCDEFGHIJKLMNOPQRSTUVWXYZ
10													QRSTUVWXYZABCDEFGHIJKLMNOP

TOPCODER
0														TOPCODER

ZWBGLZ
25													AXCHMA

DBNPCBQ
1														CAMOBAP

LIPPSASVPH
4														HELLOWORLD
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	int N, shift, i, j, l, aux;
  char txt[50], alpha[50];
	
  scanf("%d", &N);
  for(i=0; i<N*2;i++){

	  fgets(txt, 50, stdin);
    scanf("\n%d", &shift);
		
		s(txt, shift);
	}
  for(j=0; j<strlen(txt); j++){
  	printf("%c", txt[j]);
  }

  return 0;
}

int s(char txt, int shift){
	int i, j, t=65;
	for(i=0; i<strlen(txt); i++){
		for(j=0; j<shift; j++){
			if(t>=65) t = t-1;
			else t = 90-1;
		}
	}
	return txt;
}