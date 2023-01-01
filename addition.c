#include <stdio.h>

int main() {
  int num1;
  int num2;
  char op;
    
  printf("Enter a number: ");
  scanf("%d", &num1);
  printf("Enter operator: ");
  scanf("%s", &op);
  printf("Enter another number: ");
  scanf("%d", &num2);
    
  if(op == '+'){
      printf("Addition of two numbers is- %d\n", num1 + num2);
  } else {
    printf("Invalid operator!\n");
  }
return 0;
}
