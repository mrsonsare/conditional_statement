#include <stdio.h>

int main(void) {
  int n,a,b,c;
  printf("\n___________.....Menu.....___________");
  printf("\n1.Addition\n2.Swapping\n3.Maximum between 2");
  printf("\n\nEnter Your Input :");
  scanf("%d",&n);
  switch (n){
    case 1 : {
      printf("Enter Two Numbers :");
      scanf("%d%d",&a,&b);
      c = a + b ;
      printf("Addition of %d and %d is %d",a,b,c);
      break;
    }
    case 2 : {
      printf("Enter the values A & B :");
      scanf("%d%d",&a,&b);
      printf("Before Swapping\n  A = %d & B = %d ",a,b);
      c = a ;
      a = b ;
      b = c ;
      printf("\nAfter Swapping\n  A = %d & B = %d ",a,b);
      break;
    }
    case 3 : {
      printf("Enter The values A & B :");
      scanf("%d%d",&a,&b);
      if (a > b) {
        printf("%d is greater",a);
      }
      if (b > a) {
        printf("%d is greater",b);
      }
      
      
      
        break;
      
    }
  }
  return 0;
}
