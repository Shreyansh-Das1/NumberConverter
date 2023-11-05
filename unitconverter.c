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
double  converttosquaremetre(double input,int unit){
    switch (unit)
    {
    case 2:
        return input*10000; //hectare to squaremetre
    case 3:
        return input*4047; //acre to squaremetre
    case 4:
        return input/10.764; //sqarefoot to squaremetre
    }
}
void sqauremetreconvert(double input,int unit){
   switch (unit)
   {
   case 1:
        printf("area(in squaremetres):%lf",input); //squaremetre to metre
        break;
        case 2:
        printf("area(in hectares):%lf",input/10000); //squaremetre to hectare
        break;
        case 3:
        printf("area(in acres):%lf",input/4047); //squaremetre to acres
        break;
        case 4:
        printf("area(in squarefeet):%lf",input*10.764); //squaremetre to squarefeet
   }
}
void inputarea(){
    printf("Enter the input unit\n");    //Selecting unit
    printf("1 for squaremetres\n2 for hectares\n3 for acres\n4 for squarefeet\n");
    int l;
    scanf("%d",&l);
    printf("Enter unit to be coverted into(same format as input)\n");
    int out;
    scanf("%d",&out);
    printf("Enter input area:");
        double input;
        scanf("%lf",&input);
    if(l==1) squaremetreconvert(input,out);
    else{
        double temp=converttosquaremetre(input,l);  //convert given input to squaremetre
        sqauremetreconvert(temp,out);  //reusing function
    }
}
double  converttoKg(double input,int unit){
    switch (unit)
    {
    case 2:
        return input/1000; //gram to Kg
    case 3:
        return input/2.205; //pound to Kg
    case 4:
        return input*10000; //metric tonnes to Kg
    }
}
void Kgconvert(double input,int unit){
   switch (unit)
   {
   case 1:
        printf("weight(in Kg):%lf",input); //Kg to Kg
        break;
        case 2:
        printf("weight(in grams):%lf",input*1000); //Kg to gram
        break;
        case 3:
        printf("weight(in pounds):%lf",input*2.205); //Kg to pounds
        break;
        case 4:
        printf("weight(in metric tonnes):%lf",input/1000); //Kg to metric tonnes
   }
}
void inputlweight(){
    printf("Enter the input unit\n");    //Selecting unit
    printf("1 for Kg\n2 for grams\n3 for pounds\n4 for metric tonnes\n");
    int l;
    scanf("%d",&l);
    printf("Enter unit to be coverted into(same format as input)\n");
    int out;
    scanf("%d",&out);
    printf("Enter input weight:");
        double input;
        scanf("%lf",&input);
    if(l==1) Kgconvert(input,out);
    else{
        double temp=converttoKg(input,l);  //convert given input to Kg
        Kgconvert(temp,out);  //reusing function
    }
}
void main(){
   printf("Enter\n");
   printf("1 for length\n 2 for area\n3 for weight\n");
   int a;
   scanf("%d",&a);
   switch (a)   //selecting dimension
   {
   case 1:
   inputlength();
   break;
   case 2:
   inputarea();
   break;
   case 3:
   inputweight();
   break;
   default:
   printf("Please enter a valid number");
    break;
   }
}