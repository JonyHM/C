/* Grandma is solving a word search puzzle. You really want to help her and will build an algorithm that, given the word search 
puzzle and the words to be searched, will print how many times each word appears.

In this puzzle, the words will be only in horizontal or vertical. The words do not wrap around. The words can also overlap the 
others, it is, the same letter in the puzzle may be used by more than one word. Count words with a single letter only once, see 
the first test case sample!

Input
The first line contains an integer T (T ≤ 100) indicating the number of test cases.

The first line of each test case will have two numbers, L (1 ≤ L ≤ 10* or 1 ≤ L ≤ 50**) and C (1 ≤ C ≤ 10* or 1 ≤ C ≤ 50**), the 
number of lines and columns of the word search puzzle respectively. The following L lines will have C lowercase letters of the 
English alphabet indicating the puzzle configuration. The next line there will be an integer P (1 ≤ P ≤ 50) indicating how many 
words there are to be searched. The following P lines contains the words that need to be searched. The words will have the limits 
accordingly to the size of the word search puzzle. The strings only contains lowercase letters of the English alphabet.

*for around 90% of the cases;
**for the other test cases.

Output
For each case, output for each word in a single line the number of times it appears in the word search puzzle, in the same order 
of the input. If the word is not found, print 0.
*/

#include<stdio.h>
#include<string.h>

int main(){
	//variables declaration
	int T, L, C, P, i, count;
	
	//scanning for the number of test cases, number of lines and columns of the puzzle
	scanf("%d", &T);
	scanf("%d", &L);
	scanf("%d", &C);
	
	for(i=0; i<T; i++){
		
		//puzzle configuration
		for(i=0; i<L; i++){
			char puzzle[L][C];
			puzzle[i] = gets(puzzle[i]);
		}

		//how many words there are to be serched
		scanf("%d", P);
		
		//input the words to be searched
		for(i=0; i<P; i++){
			char words[P];
			words[i] = gets(words);
		}
		
		if()
		//search for the words in every line
		for(i=0; i<P; i++){
			for(x=0; x<)
		}

		//here we have to test the arrays, checking if the given words on "words" are in the puzzle "puzzle" 

	}
	return 0;
}