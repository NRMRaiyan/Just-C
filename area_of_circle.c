#include<stdio.h>

int main(){

  double radius, area;
  printf("Enter value of radius: ");
  scanf("%lf", &radius);

  area = 3.1416 * radius * radius;

  printf("Area of the circle is %f.", area);
  return 0;
}
