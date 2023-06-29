// Write a programme to print n to 1 using a whlie loop.

#include<stdio.h>
#include<conio.h>

void main(){

int n,a;

clrscr();
a=1;

  printf("Enter any number : ");
  scanf("%d",&n);

while(n>=a){

  printf("%d\n",n);
  n--;

}

getch();
}