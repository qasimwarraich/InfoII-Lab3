#include <stdio.h>
const int MAX_LENGTH = 1000;

int strLength(char s[]) {
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return i;
}

void reverse(char s[]) {
  int strlen = strLength(s);
  int i = 0;
  char reversedString[strlen+1];
  while (s[i] != '\0') {
    reversedString[strlen - i - 1] = s[i];
    i++;
  }
  reversedString[strlen] = '\0';
  printf("Result string: %s\n", reversedString);
}

int main() {
  char s[MAX_LENGTH + 1];
  int length;

  printf("Please enter a string: ");
  scanf("%[^\n]s", s);
  reverse(s);
}
// Linux, Mac: gcc task1.c -o task1; ./task1
