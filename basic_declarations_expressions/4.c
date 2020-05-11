/*
Write a C program to print the following characters in a reverse way. Go to the editor
Test Characters: 'X', 'M', 'L' 
Expected Output: 
The reverse of XML is LMX
*/
#include <stdio.h>

int main(){

  char X = 'X';
  char M = 'M';
  char L = 'L';

  printf("The reverse of %c%c%c id %c%c%c\n", X,M,L,L,M,X);
  return 0;
}