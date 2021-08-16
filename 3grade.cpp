#include <stdio.h>
#include <conio.h>

int main() {
   char(grade);
   clrscr();

    printf("enter your grade");
    scanf("%c",&grade);
    
    switch(grade)
    {
        case 'A' :
         printf("excellent");
        break;
       
        
        case 'B' :
         printf("keep it up");
        break;
        
        
        case'C' :
        printf("not bad");
        break;
        
        case'D' :
        printf("improvement needed");
        break;
        
        case'E' :
        printf("poor");
        break;
        
        case'F' :
        printf("failed");
        break;
        
        
        default:
         printf("invalid grade");
        
    }
    getch();
    return 0;
}
