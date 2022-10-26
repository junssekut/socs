// include stdio for input-output usage
#include <stdio.h>

// main function with returning value 0
int main() {
	// initialize variable for test cases and index for counting
	int testCase, index;
	
	// scan user input ( integer ) for how many test cases
	scanf("%d", &testCase);
	
	getchar();
	
	// begin to test cases, using for loop
	for (index = 1; index <= testCase; index++) {
		// initialize variable for length of 1 game ( per test case ), and char counter to count who are winning
		int gameLength, charCounter;
		
		scanf("%d", &gameLength);
		
		getchar();
		
		// initialize string variable for who won and who loses
		char result[256];
		
		// scan user input for game results ex: LBLBLBLBLB means lili won 5 and bibi won 5, it will be count as tie and the output is "None"
		scanf("%s", result);
		
		getchar();
		
		// lili and bibi score for winning
		int lili = 0;
		int bibi = 0;
		
		// for loop to count the win and lose, we iterate the result string one by one dividing the character and compare them to 'L' or 'B' or 'T', 
		// but ignore the 'T' as it is not usefull at all
		for (charCounter = 0; charCounter < gameLength; charCounter++) {
			if (result[charCounter] == 'L')
				lili++;
			
			if (result[charCounter] == 'B')
				bibi++;
					
		}

		// condition where lili won more than bibi, the output will be 'Lili' with an '\n' at the end of it
		if (lili > bibi)
			printf("Lili\n");
			
		// condition where no one won more than the other, the output will be 'None' with an '\n' at the end of it
		if (lili == bibi)
			printf("None\n");
			
		// condition where bibi won more than lili, the output will be 'Bibi' with an '\n' at the end of it
		if (bibi > lili)
			printf("Bibi\n");
		
		// do nothing at all if all three conditions do not match, just pass the loop and keep going untill it break or end
	}
	
	return 0;
}
