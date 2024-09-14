#include<stdio.h>
//a grade- outstanding- marks from 90 to 100
//b grade- excellent- marks from 80 to 90
//c grade- average- marks from 70 to 80
//d grade- work hard- marks below 70

int main(){

    int marks;
    printf("enter your marks ");
    scanf("%d", &marks);
    if(marks>=90 && marks<=100){
    printf("A grade = oustanding\n");

    }
    else if (marks>=80 && marks<=90){
        printf("B grade = excellent\n");

    }
    else if (marks>=70 && marks<=80){
        printf("C grade = average\n");

    }
    else if (marks<70){
        printf("D grade = word hard\n");

    }
    return 0;



    }


    


    
