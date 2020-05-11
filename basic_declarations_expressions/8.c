/*
Write a C program to convert specified days into years, weeks and days. Go to the editor
Note: Ignore leap year. 

Test Data :
Number of days : 1329 
Expected Output :
Years: 3 
Weeks: 33 
Days: 3 
*/
#include <stdio.h>

int main() {

  int days;

  printf("Number of days: ");
  scanf("%d", &days);

  int years = days >= 365 ? days / 365 : 0;
  printf("Years: %d\n", years);
  
  int remainingDays = days;
  if(years > 0){
    remainingDays = days - years * 365;
  }
  
  int weeks = remainingDays >= 7 ? remainingDays / 7 : 0;
  printf("Weeks: %d\n", weeks);

  if(years > 0){
    remainingDays = remainingDays - weeks * 7;
  }

  printf("Days: %d\n", remainingDays);

  return 0;
}