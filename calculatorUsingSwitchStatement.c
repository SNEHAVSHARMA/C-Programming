#include<stdio.h>
int main()
{   int a,b;
    char op;
    printf("Enter the value for a : ");
    scanf("%d",&a);
    printf("Enter the value for b : ");
    scanf("%d",&b);
    printf("Enter the operation to be performed : ");
    scanf(" %c",&op);
    switch(op)
    {
      case '+':
        printf("a + b = %d", a+b);
        break;
      case '-':
          printf("a - b = %d", a-b);
           break;
      case '*':
          printf("a*b= %d",a*b);
           break;
      case '/':
          printf("a/b= %d",a/b);
           break;
      case '%':
          printf("a%b= %d",a%b);
           break;
      default:
          printf("Invalid Input");
    }

}
