#include <stdio.h>

int main(void) {
  
    int a;
    int b;
    int swap;

  printf("Enter number: ");
  scanf("%d", &a);
  printf("Enter another number: ");
  scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap = a;
    a = b;
    b = swap;

    printf("After swapping: a = %d, b = %d\n", a, b);
  
  return 0;
}
