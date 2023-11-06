#include<stdio.h>
#include "length.c"
#include "area.c"
#include "weight.c"

void unitconvert(){
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