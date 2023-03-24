#include <stdio.h>


// function prototypes
void printGreeting(char* aGreeting, char* aName);
void printAGreeting(char* greeting);

int main(void) {
  printGreeting("Hello", "cat");
  return 0;
}

void printWord(char* word) {
  printf("%s\n", word);
  return;
}

void printComma(void){
  printf(", ");
  return;
}

void printGreeting(char* greeting, char* addressee) {
  printWord(greeting);
  printComma();
  printWord(addressee);
  printf("!\n");
  return;
}

