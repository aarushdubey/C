#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter a ");
    scanf("%d",&a);
    printf("enter b ");
    scanf("%d",&b);
    printf("enter c ");
    scanf("%d",&c);

    if(a==b && b==c && c==a){
    printf("it is an equilateral triangle");
    }
    else if(a==b || b==c || c==a)
    {
        printf("isoceles triangle");

    }
    else if(a!=b && b!=c && c!=a){
        printf("scalene triangle");

    }
    
    return 0;


    



    
}