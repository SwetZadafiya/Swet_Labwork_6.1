// Write a programme to print 1 to n using do while loop.

#include<stdio.h>
#include<conio.h>

void main(){

int n,a;

clrscr();
a=1;

  printf("Enter any number : ");
  scanf("%d",&n);

do{
  printf("%d\n",a);
  a++;
}while(a<=n);

getch();
}