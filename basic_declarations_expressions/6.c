#include <stdio.h>

float calculatePerimeter(int radius);
float calculateArea(int radius);

int main(){

  int radius = 6;

  printf("Perimeter of the Circle = %f inches\n", calculatePerimeter(radius));
  printf("Area of the Circle = %f square inches\n", calculateArea(radius));
  
  return 0;
}

float calculatePerimeter(int radius) {
  return 2 * 3.14 * radius;
}

float calculateArea(int radius) {
  return 3.14 * radius * radius;
}