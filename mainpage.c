#include<stdio.h>

int outputtype,n;
void dectooct()
{
    int octalNum[100];

    int i = 0;
    while (n != 0) {

        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
}
void dectohex()
{
    int hexNum[100];

    int i = 0;
    while (n != 0) {

        hexNum[i] = n % 16;
        n = n / 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", hexNum[j]);
}
void dectowht()
{
    switch(outputtype)
    {
        case 1:
        {
            dectooct();
        }
        case 2:
        {
            dectohex();
        }
    }
}
void main()
{
    printf("\nEnter the number:\n");
    scanf("%d",&n);
    printf("\nEnter 1 to Octal system\n2 to convert to Hexadecimal\n");
    scanf("%d",&outputtype);
    dectowht();
}


