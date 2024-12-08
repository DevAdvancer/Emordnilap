#include <stdio.h>
#include <string.h>
#include <ctype.h>


void to_uppercase_first_word(char str[0]) {
  str[0] = toupper(str[0]);
}

void reverse_string(char str[], char reversed[]) { 
  int length = strlen(str);
  for (int i = 0; i < length; i++) {
    reversed[i] = str[length - i - 1];
  }
  reversed[length] = '\0'; // terminating the null reversed string
}

int is_emordnilap(char word1[], char word2[]) { 
  char reversed[100];
  reverse_string(word1, reversed);
  return strcmp(reversed, word2);
}

int main() {
  char word1[100], word2[100], temp1[100], temp2[100];
  // Taking input of first Number
  printf("Enter the first word: ");
  scanf("%s", word1);
  
  // Taking input of second number
  printf("Ente the second word: ");
  scanf("%s", word2);
  
  // Copying the word to temp
  strcpy(temp1, word1);
  strcpy(temp2, word2);
  
  // Making them in Lower case 
  to_uppercase_first_word(temp1);
  to_uppercase_first_word(temp2);
  
  // printf("%s \t %s", temp1, temp2);
  
  if (is_emordnilap(temp1, temp2)) {
    printf("The words %s and %s are emordnilap\n", word1, word2);
  } else {
    printf("The words %s and %s are not emordnilap\n", word1, word2);
  }
}