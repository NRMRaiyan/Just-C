#include <stdio.h>

int main(){
  float C, fh;

  printf("In Fahrenheit: ");
  scanf("%f", &fh);

  C = 5 * (fh - 32) / 9;

  printf("In Centigrate: %f", C);

  return  0;
}
