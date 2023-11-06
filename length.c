#include<stdio.h>
double converttometre(double input,int unit){
    switch (unit)
    {
        //no fall through due to return statements
        case 2:
            return input/100;  //centimetre to meter
        case 3:
            return input/39.37; //inches to meters
        case 4:
            return input/3.281; //feet to metres;
    }
}
void metreconvert(double input,int unit){
    switch(unit){
        case 1:
            printf("length(in metres):%lf",input); //metre to metre
            break;
        case 2:
            printf("length(in centimetres):%lf",input/100); //metre to centimeter
            break;
        case 3:
            printf("length(in inches):%lf",input*39.37); //metre to inches
            break;
        case 4:
            printf("length(in feet):%lf",input*3.281); //metre to feet
    }
}
void inputlength(){
    printf("Enter the input unit\n");    //Selecting unit
    printf("1 for metres\n2 for centimeters\n3 for inches\n4 for feet\n");
    int a;
    scanf("%d",&a);
    printf("Enter unit to be coverted into(same format as input)\n");
    int out;
    scanf("%d",&out);
    printf("Enter input length:");
    double input;
    scanf("%lf",&input);
    if(a==1) metreconvert(input,out);
    else{
        double temp=converttometre(input,a);  //convert given input to metre
        metreconvert(temp,out);  //reusing function
    }
}