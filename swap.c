#include<stdio.h>
int main(){
    printf("This program is about swaping a value without third variable");
    int a=10,b=20;
    printf("Before Swaping : %d  %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Afetr Swaping : %d  %d",&a,&b);
    return 0;
}