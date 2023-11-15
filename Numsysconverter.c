#include<stdio.h>
#include<math.h>
int n;
int dec=0,i=0,t;
int arr[100];//Stores the converted number in reverse
void display()//Displays the array
{
    while(i>=0)
        printf("%d", arr[i--]);
}
void dec_to_base_p(int p)//Converts Decimal to number system of base p
{
   if(n==p)
    {
        arr[0] = 0;
        arr[1] = 1;
        return ;
    }
    if(n==0)
        return ;
    arr[i++] = n % p;
    n = n / p;
    return dec_to_base_p(p);
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
    scanf("%d",&t);
    dectowht(t);
}
void convtodec(int p) //Convert any number of base p to decimal
{
         dec = 0, i = 0;
         int rem;
        while (n != 0) {

            // get remainder of n divided by 10
            rem = n % 10;

            // divide n by 10
            n /= 10;

            // multiply rem by (2 ^ i)
            // add the product to dec
            dec += rem * pow(p, i++);
        }
        n=dec;
}
void octodec()
{
    i=0;
    convtodec(8);
    printf("\nEnter 1 to Hexadecimal\n2 to convert to Binary:\n3 to convert to Decimal\n");
    scanf("%d",&t);
    switch(t)
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
    scanf("%d",&t);
    switch(t)
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
    scanf("%d",&t);
    switch(t)
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
void main() {
    int choice;
    printf("\nEnter 1 to enter the number as Decimal\n2 for Octal\n3 for Hexadecimal\n4 for Binary\n");
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
            printf("\nEnter one of the above Options");
    }
}




