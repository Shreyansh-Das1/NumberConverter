#include<stdio.h>
#include "inpdec.c"
#include "convtodec.c"
#include<stdlib.h>
int n;
void numsys() {
    int choice;
    printf("\nEnter 1 to enter the number as Decimal\n2 for Octal\n3 for Hexadecimal\n4 for Binary");
    scanf("%d",&choice);
    printf("\nEnter the number: ");
    scanf("%d",&n);
    switch (choice) {
        case 1:
        intasdec();
        break;
        case 2:
            octodec();
            break;
        case 3:
            hextodec();
            break;
        case 4:
            bintodec();
            break;
        default:
            printf("\nEnter one of the above Options\nEnter 0 to clear screen and restart");
            if(scanf("%d")==0)
            {
                system("clear");
                numsys();
            }
    }
}




