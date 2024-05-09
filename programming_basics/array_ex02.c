//recursion with arrays

#include <stdio.h>
#define SIZE 80

// function prototype

int testPalindrome(char array[], int left, int right);

int main(void)

{

char string[SIZE]; // original string

char copy[SIZE]; // copy of the string without spaces

puts("Enter a sentence:");

char c; // holds the input temporarily

unsigned int count = 0; // length of the string

// get the sentence to test from the user
while ((c = getchar() ) != '\n' && count < SIZE) {

string[count++] = c;
}

string[count] = '\0'; // ends the string

unsigned int copyCount = 0;

// creates a copy of the string without spaces
for (unsigned int i = 0; string[i] != '\0'; ++i) {

if (string[i] != ' ' && string[i] != "," &&

string[i] != '.' && string[i] != '!') {

copy[copyCount++] = string[i];

}

}

// prints whether the sentence is or is not a palindrome
if (testPalindrome(copy, 0, copyCount - 1)) {

printf("\"%s\" is a palindrome\n", string);

}

else {

printf("\"%s\" is not a palindrome\n", string);

}

}

// recursive function to see if the sentence is a palindrome
int testPalindrome(char array[], int left, int right)

{
// tests the array to see if it is a palindrome
if (left == right || left > right) {

return 1;

}

else if (array[left] != array[right]) {

return 0;

}

else {

return testPalindrome(array, left + 1, right - 1);

}

}