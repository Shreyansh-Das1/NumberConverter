#include<stdio.h>
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
void squaremetreconvert(double input,int unit){
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
    printf("Enter unit to be converted into(same format as input)\n");
    int out;
    scanf("%d",&out);
    printf("Enter input area:");
    double input;
    scanf("%lf",&input);
    if(l==1)
        squaremetreconvert(input,out);
    else{
        double temp=converttosquaremetre(input,l);  //convert given input to squaremetre
        squaremetreconvert(temp,out);  //reusing function
    }
}

