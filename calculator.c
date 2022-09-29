//Simple calculator
#include<stdio.h>

int main(){
  int a,b,c;
  char ch;
  printf("Enter two numbers (seperated by space): ");
  scanf("%d %d", &a,&b);
  fflush(stdin);

  printf("Enter your choice: \n");
  printf("1. enter 1 for addition \n");
  printf("2. enter 2 for subtraction \n");
  printf("3. enter 3 for multiplication \n");
  printf("4. enter 4 for division \n");
  printf("5. enter 5 for modulo division \n");
  scanf("%c",&ch);
  
  switch(ch) {
  case '1':
    c=a+b;
    break;
  case '2':
    c=a-b;
    break;
  case '3':
    c=a*b;
    break;
  case '4':
    c=a/b;
    break;
  case '5':
    c=a%b;   
    break;
  default:
    printf("Wrong choice \n");
  }
  printf("The calculated value is %d \n", c);
  return 0;
}