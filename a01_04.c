
#include<stdio.h>
#include<conio.h>

int main()
{
    int r;
    float a, p=3.14;
    printf("Enter the radius of a circle.\n");
    scanf("%d",&r);
    a= p*r*r;
    printf("Area of a circle is %f having the radius %d",a,r);
    getch();

    return 0;
}
