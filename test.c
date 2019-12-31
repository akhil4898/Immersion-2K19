// // C program to count the number of
// //   vowels and consonants in a string
// #include <stdio.h>

// // Function to count number
// // of vowels and consonant
// void count_vowels_and_consonant(char* str)
// {
// 	// Declare the variable vowels and consonant
// 	int vowels = 0, consonants = 0;

// 	int i;
// 	char ch;

// 	// Take each character from this string to check
// 	for (i = 0; str[i] != '\0'; i++) {

// 		ch = str[i];

// 		// If this character is a vowel,
// 		// increment the count of vowels
// 		if (ch == 'a' || ch == 'e'
// 			|| ch == 'i' || ch == 'o'
// 			|| ch == 'u' || ch == 'A'
// 			|| ch == 'E' || ch == 'I'
// 			|| ch == 'O' || ch == 'U')
// 			vowels++;

// 		// If this character is a space
// 		// skip it
// 		else if (ch == ' ')
// 			continue;

// 		else
// 			// Else increment the count of consonants
// 			consonants++;
// 	}

// 	// Print the total count of vowels and consonants
// 	printf("\nVowels: %d", vowels);
// 	printf("\nConsonants: %d\n", consonants);
// }

// // Driver function.
// int main()
// {
// 	char* str = "geeks for geeks";
// 	printf("String: %s", str);

// 	count_vowels_and_consonant(str);

// 	return 0;
// }

// #include <stdio.h>

// int main(void)
// {
// 	const volatile int local = 10;
// 	int *ptr = (int *)&local;
// 	printf("Initial value of local : %d \n", local);
// 	*ptr = 100;
// 	printf("Modified value of local: %d \n", local);
// 	return 0;
// }

#include <stdio.h>

int main(){
	int n1 = 0, n2 = 1, n3, i, number;
	printf("Enter the number of elements = ");
	scanf("%d", &number);
	printf("%d, %d", n1, n2);
	for(i = 2; i <= number; i++){
		n3 = n1 + n2;
		printf(", %d", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return 0;
}

