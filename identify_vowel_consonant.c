#include<stdio.h>

int main(void) {
  char ch ;
  printf("Enter the Character :");
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    printf("Vowel");
else 
    if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
      printf("VOWEL");
    else {
      printf("Consonant");
    }
  
  return 0;
}
