#include <stdio.h>

int main(){


    const PI =3.14159;
    float r,a,v;
    a=0.0;
    v=0.0;
    printf("enter the radius of the circle:");
    scanf("%f",&r);
    a+= PI* 4*r*r;
    v+= 4.0/3.0 *PI *r*r*r;
    printf("the surface area of the sphere is %fand its volume is %f",a,v);


    return 0;
}