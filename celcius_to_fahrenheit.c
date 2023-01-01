#include <stdio.h>

int main(){
  float c, fh;

  printf("In Centigrate: ");
  scanf("%f", &c);

  fh = (c * 1.8) + 32;

  printf("In fahrenheit: %f", fh);

  return  0;
}
