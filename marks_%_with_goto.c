#include <stdio.h>

int main(void) {
  int e,h,m,c,t;
  float p ;
 english: printf("\nEnter the Marks of English :");
  scanf("%d",&e);
  if(e>100) {
    printf("Invalid Marks");
    goto english;
  }
  hindi :printf("\nEnter the Marks of Hindi :");
  scanf("%d",&h);
  if(h>100) {
    printf("Invalid Marks");
    goto hindi;
  }
  maths :printf("\nEnter the Marks of Maths :");
  scanf("%d",&m);
  if(m>100) {
    printf("Invalid Marks");
    goto maths;
  }
  computer :printf("\nEnter the Marks of Computer :");
  scanf("%d",&c);
  if(c>100) {
    printf("Invalid Marks");
    goto computer;
  }
  t = e+h+m+c ;
  printf("Total Marks :%d",t);
  p = t/4 ;
  printf("\nPercentage :%.2f ",p);
  return 0;
}
