#include <stdio.h>

int main(){
    double x,y;
    int p;
    scanf("%lf %lf", &x, &y);
    if ((x==0)&&(y==0))
        p=0;
    if ((x==0)&&(y!=0))
        p=5;
    if ((x!=0)&&(y==0))
        p=6;
    if ((x>0)&&(y>0))
        p=1;
    if ((x<0)&&(y>0))
        p=2;
    if ((x<0)&&(y<0))
        p=3;
    if ((x>0)&&(y<0))
        p=4;
    switch (p){
        case 0: printf("nachalo koordinat"); break;
        case 1: printf("first"); break;
        case 2: printf("second"); break;
        case 3: printf("third"); break;
        case 5: printf("na osi y"); break;
        case 6: printf("na osi x"); break;
        default: printf("fourths");
    }
}