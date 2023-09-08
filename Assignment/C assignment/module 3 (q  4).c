#include <stdio.h>

int main()
{
    int l,b,r,h;
    char c;
    float area;
    printf("enter the alphabet C to find area of circle\n");
    printf("enter the alphabet R to find area of rectangle\n");
    printf("enter the alphabet T to find area of triangle\n");
    printf("enter the alphabet S to find the area of square\n");
    printf("Enter your choice from the above list:\n");
    scanf("%c",&c);
    switch(c)
    {
        case 'C':
                printf("enter the value of radius:");
                scanf("%d",&r);
                area=3.14*r*r;
                printf("area of circle is:%f",area);
                break;
        case 'R':
                printf("enter the value of length:\n");
                scanf("%d",&l);
                printf("enter the value of breadth:\n");
                scanf("%d",&b);
                area=l*b;
                printf("area of rectangle is :%f",area);
                break;
        case 'T':
                printf("enter the value of base:");
                scanf("%d",&b);
                printf("enter the value of height:");
                scanf("%d",&h);
                area=0.5*b*h;
                printf("area of triangle is:%f",area);
                break;
        case 'S':
                printf("enter the value of length:");
                scanf("%d",&l);
                area=l*l;
                printf("area of square is:%f",area);
                break;
        default:
                printf("please enter the value from the above list only:");
    }
    return 0;
}
