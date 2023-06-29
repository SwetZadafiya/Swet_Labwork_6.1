//Write a programme to print odd number to n to 1 using a while loop.

#include<stdio.h>
#include<conio.h>

void main(){

int a;

clrscr();

  printf("Enter any number : ");
  scanf("%d",&a);

while(a>=1){
  if(a%2!=0){
  printf("%d\n",a);
  }a--;
}

getch();
}