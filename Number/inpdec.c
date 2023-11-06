#include<stdio.h>
#include "Numsysconverter.c"
int i=0;
void display(int arr[])//Displays the array
{
    while(i>=0)
        printf("%d", arr[i--]);
}
void dec_to_base_p(int arr[], int p)//Coonverts Decimal to number system of base p
{
    while (n != 0) {
        arr[i++] = n % p;
        n = n / p;
    }
}
void dectooct()
{
    int octalNum[100];

    dec_to_base_p(octalNum,8);
    printf("\nOctal Value: ");
    display(octalNum);
}
void dectohex()
{
    int hexNum[100];
    dec_to_base_p(hexNum,16);
    printf("\nHexadecimal: ");
    display(hexNum);
}
void dectobin()
{
    int binNum[100];
    dec_to_base_p(binNum,2);
    printf("\nBinary: ");
    display(binNum);
}
void dectowht(int t)
{
    switch(t)
    {
        case 1:
        {
            dectooct();
        }
        case 2:
        {
            dectohex();
        }
        case 3:
        {
            dectobin();
        }
    }
}
void intasdec()
{
    printf("\nEnter 1 to Octal system\n2 to convert to Hexadecimal\n3 to convert to Binary:\n");
    dectowht(scanf("%d"));
}