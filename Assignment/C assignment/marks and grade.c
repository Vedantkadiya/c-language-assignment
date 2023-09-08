/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int s1, s2, s3, total, all;
  double pr;
  printf ("enter the maths marks:");
  scanf ("%d", &s1);
  printf ("enter the gujrati marks:");
  scanf ("%d", &s2);
  printf ("enter the physics marks:");
  scanf ("%d", &s3);
  printf ("three subject total:");
  scanf ("%d", &all);
  total = s1 + s2 + s3;
  printf ("the total marks you have obtained is:%d\n", total);
  pr=total/3;
  printf ("the percentage you obtained is:%f\n", pr);
    if(pr>80)
    {
        printf("The grade you have obtained is A+");
    }
    else if(pr>70)
    {
        printf("The grade you have obtained is A");
    }
    else if(pr>60)
    {
        printf("the grade you have obtained is B");
    }
    else if(pr>=35)
    {
        printf("you have passed");
    }
    else if(pr<35)
    {
        printf("you have fail");
    }
    else
    {
        printf("the given value entered by you is invalid");
    }
  return 0;
}
