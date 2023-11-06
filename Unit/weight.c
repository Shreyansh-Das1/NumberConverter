#include<stdio.h>
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
void inputweight(){
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
