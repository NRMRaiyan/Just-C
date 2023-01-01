#include<stdio.h>

int main(){

  double radius;
  printf("Enter value of radius: ");
  scanf("%lf", &radius);

  radius = 3.1416 * radius * radius;

  printf("Area of the circle is %f.", radius);
  return 0;
}
