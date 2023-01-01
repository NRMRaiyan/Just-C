#include<stdio.h>

int main(){

  int length;
  int breadth;
  
  printf("Enter value of length: ");
  scanf("%d", &length);
  printf("Enter value of breadth: ");
  scanf("%d", &breadth);

  printf("Area of the rectangle is %d.", length * breadth);
  return 0;
}
