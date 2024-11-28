#include<stdio.h>
int main(){
    int a=10,b=20;
    printf("Before Swaping : %d  %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Afetr Swaping : %d  %d",&a,&b);
    return 0;
}