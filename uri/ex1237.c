/*Find the longest common substring between the two informed Strings. The substring can be any part of the String, including the entire 
String. If there is no common substring, return 0. The search is case sensitive ('x' != 'X').
Input
The input contains several test cases. Each test case is composed by two lines that contains a string each. Both input Strings will contain 
between 1 and 50, inclusive, letters (a-z, A-Z), and/or spaces.
Output
The length of the longest common substring between the two Strings.

abcdef
cdofhij
2

TWO
FOUR
1

abracadabra
open
0

Hey This java is hot
Java is a new paradigm
7

*/

#include<stdio.h>
#include<string.h>

int main(){
	
	//variables declaration
  // int i=0, j=0;
  int cont(char l1[50], char l2[50]);
  char l1[50], l2[50];
	
	//ask for the words to be compared
	fgets(l1, sizeof(l1), stdin);
	fgets(l2, sizeof(l2), stdin);

  cont(l1,l2);
	
	return 0;
}
	
int cont(char l1[50], char l2[50]){
  int i, j, count=0, maior=0;
	for(i=0; i<strlen(l1); i++){
 	  for(j=0; j<strlen(l2); j++){
      if(l1[i] == EOF && l2[j] == EOF) break;
 		  if(l1[i] == l2[j]){
 			  count++;
        
 				if(l1[i+1] != l2[j+1]){
					if(count>maior) maior = count;
 					count = 0;
 				}else break;
 			}
 		}
 	}		
 	return printf("\n%d\n", maior);
}

 	// int rec(char l1[50], char l2[50], int i, int j){
 	// 	int count = 0;
		
 	// 	if(l1[i] == l2[j]){
 	// 		count++;
 	// 		return rec(l1,l2,i+1,j+1);
 	// 	}else if(l1[i] != l2[j] && count>0){
 	// 		return printf("\n%d\n", count);
 	// 	}else if(j>strlen(l2)){
 	// 		return rec(l1,l2,i+1,j=0);
 	// 	}else if(i == strlen(l1)){
 	// 		return printf("\n%d\n", count);
 	// 	}else	return rec(l1,l2,i,j+1);
 	// }
	
 	// rec(l1,l2,0,0);
	
	 
