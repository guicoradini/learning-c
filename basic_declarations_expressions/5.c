#include <stdio.h>

int calculatePerimeter(int height, int width);
int calculateArea(int height, int width);

int main(){

  int height = 7;
  int width = 5;

  printf("Perimeter of the rectangle = %d inches\n", calculatePerimeter(height, width));
  printf("Area of the rectangle = %d square inches\n", calculateArea(height, width));
  
  return 0;
}

int calculatePerimeter(int height, int width){
  return height * 2 + width * 2;
}

int calculateArea(int height, int width){
  return height * width;
}