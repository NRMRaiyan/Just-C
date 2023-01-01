#include <stdio.h>

int main() {
  
  float num;
  printf("Feet: ");
  scanf("%f", &num);
  printf("Meter: %.3f\n", num*0.3048);
  
  return 0;
}
