/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    float p,t,r,si,ci;
    printf("enter the principal amount:");
    scanf("%f",&p);
    printf("enter the time period:");
    scanf("%f",&t);
    printf("enter the rate:");
    scanf("%f",&r);
    si=(p*r*t)/100;
    printf("the simple intrest obtained is:%f\n",si);
    ci=p*pow((1+r/100),t);
    printf("the compound intrest you obtained is :%f\n",ci);
    return 0;
}
