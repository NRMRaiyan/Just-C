#include<stdio.h>

int main(){

  double side;
  printf("Enter value of one side: ");
  scanf("%lf", &side);

  side = side * side;

  printf("Area of the square is %f.", side);
  return 0;
}
