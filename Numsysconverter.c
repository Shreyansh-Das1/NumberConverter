#include<stdio.h>
#include<math.h>
#include <string.h>
int n;
int dec=0,i=0,t;
char arr[100];//Stores the converted number in reverse
void display(){//Displays the array

    while(i>=0)
        printf("%c", arr[i--]);
}
char inttochar(int l)
{
    switch(l)
    {
        case 1:
            return '1';
        case 2:
            return '2';
        case 3:
            return '3';
        case 4:
            return '4';
        case 5:
            return '5';
        case 6:
            return '6';
        case 7:
            return '7';
        case 8:
            return '8';
        default:
            return '9';
    }
}
void dec_to_base_p(int p){//Converts Decimal to number system of base p
   if(n==p)
    {
        arr[0] = 0;
        arr[1] = 1;
        return ;
    }
    if(n==0)
        return ;
    if(n%p>=10)
    {
        int ind=n%p -10;
        char rem[]={'A','B','C','D','E','F'};
        arr[i++]=rem[ind];
    }
    else
     arr[i++] = inttochar(n % p);
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
void convtodec(int p){ //Convert any number of base p to decimal
         dec = 0, i = 0;
         int rem;
        while (n != 0) {

            // get remainder of n divided by 10
            rem = n % 10;
            // divide n by 10
            n /= 10;
            // multiply rem by (p ^ i)
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
void hextodec() {
    char hexa[100];
    i = 0;
    //Stores the Hexadecimal in a character array as it contains characters A-F
    printf("\nEnter the Number: ");
    scanf("%s",&hexa);
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int j, power = 0, digit;

    // Converting hexadecimal number to equivalent decimal number
    for (i = strlen(hexa) - 1; i >= 0; i--) {

        for (j = 0; j < 16; j++) {
            if (hexa[i] == hexDigits[j]) {
                n += j * pow(16, power);
            }
        }
        power++;
    }
        printf("\nEnter 1 to Octal\n2 to convert to Binary:\n3 to convert to Decimal\n");
        scanf("%d", &t);
        switch (t) {
            case 1:
                dectooct();
                break;
            case 2:
                dectobin();
                break;
            case 3:
                printf("\nDecimal Value: %d", n);
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
    if(choice!=3) {
        printf("\nEnter the number: ");
        scanf("%d", &n);
    }
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




