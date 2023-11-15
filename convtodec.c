#include<stdio.h>
#include<math.h>
#include "inpdec.c"
int dec=0;
void convtodec(int p) //Convert any number of base p to decimal
{
    dec=0,i=0;
    while (n!= 0) {
        dec = dec + (n % 10) * pow(p, i++);
        n = n/ 10;
    }

}
void octodec()
{
    i=0;
    convtodec(8);
    printf("\nEnter 1 to Hexadecimal\n2 to convert to Binary:\n3 to convert to Decimal\n");
    switch(scanf("%d"))
    {
        case 1:
            dectohex();
            break;
        case 2:
            dectobin();
            break;
        case 3:
            printf("\nDecimal Value: %d",n);
    }
}
void hextodec()
{
    i=0;
    convtodec(16);

    printf("\nEnter 1 to Octal\n2 to convert to Binary:\n3 to convert to Decimal\n");
    switch(scanf("%d"))
    {
        case 1:
            dectooct();
            break;
        case 2:
            dectobin();
            break;
        case 3:
            printf("\nDecimal Value: %d",n);
    }
}
void bintodec()
{
    i=0;
    convtodec(2);
    printf("\nEnter 1 to Octal\n2 to convert to HexaDecimal:\n3 to convert to Decimal\n");
    switch(scanf("%d"))
    {
        case 1:
            dectooct();
            break;
        case 2:
            dectohex();
            break;
        case 3:
            printf("\nDecimal Value: %d",n);
    }
}
