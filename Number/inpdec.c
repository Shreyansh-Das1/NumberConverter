#include<stdio.h>
#include "Numsysconverter.c"
int i=0;
int arr[100];//Stores the converted number in reverse
void display()//Displays the array
{
    while(i>=0)
        printf("%d", arr[i--]);
}
void dec_to_base_p(int p)//Converts Decimal to number system of base p
{
    if(n==0)
        return ;
    arr[i++] = n % p;
    n = n / p;
    dec_to_base_p(p);
}
void dectooct()
{
    dec_to_base_p(8);
    printf("\nOctal Value: ");
    display();
}
void dectohex()
{
    dec_to_base_p(16);
    printf("\nHexadecimal: ");
    display();
}
void dectobin()
{
    dec_to_base_p(2);
    printf("\nBinary: ");
    display();
}
void dectowht(int t)
{
    switch(t)
    {
        case 1:
        {
            dectooct();
            break;
        }
        case 2:
        {
            dectohex();
            break;
        }
        case 3:
        {
            dectobin();
            break;
        }
    }
}
void intasdec()
{
    printf("\nEnter 1 to Octal system\n2 to convert to Hexadecimal\n3 to convert to Binary:\n");
    dectowht(scanf("%d"));
}