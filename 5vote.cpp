#include <stdio.h>
#include <conio.h>

int main() {
   int age;
clrscr();
   
     printf("enter your age");
     scanf("%d",&age);
     
     if(age>=18)
   {
       printf("you are eligible to vote");
   }
   else if (age<18)
   {
       printf("you are not eligible to vote");
   }
   else
   {
        printf("invalid input");
   }
     getch();
    return 0;
}
