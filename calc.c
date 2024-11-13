#include <stdio.h>
#include <math.h>
int main (){
    int choice;
    float num2;
    float num1;
    float ans;
    int shut;
    printf("\t-----CAlCULATOR-----\n");
    do{
    printf("Enter 1 to add to numbers\nEnter 2 to subtract two numbers\nEnter 3 to multiply to numbers\nEnter 4 numbers to divide two numbers\n: ");
    scanf("%d",&choice);
        switch(choice){
            //addition
            case 1:
            printf("\nEnter the first number: ");
            scanf("%f",&num1);
            printf("\nEnter the second number: ");
            scanf("%f",&num2);
            ans = num1+num2;
            printf("%.2f+%.2f=%.2f",num1,num2,ans);
            break;
            //subtraction
            case 2:
            printf("\nEnter the first number: ");
            scanf("%f",&num1);
            printf("\nEnter the second number: ");
            scanf("%f",&num2);
            ans = num1-num2;
            printf("%.2f-%.2f=%.2f",num1,num2,ans);
            break;
            //multiplication
            case 3:
            printf("\nEnter the first number: ");
            scanf("%f",&num1);
            printf("\nEnter the second number: ");
            scanf("%f",&num2);
            ans = num1*num2;
            printf("%.2f+%.2f=%.2f",num1,num2,ans);
            break;
            //division
            case 4:
            printf("\nEnter the first number: ");
            scanf("%f",&num1);
            printf("\nEnter the second number: ");
            scanf("%f",&num2);
            ans = num1*num2;
            printf("%.2f/%.2f=%.2f",num1,num2,ans);
            break;
            default: 
            printf("\nPLease enter the correct input");
            break;
        } 
        printf("Do you want to quit\npress 1 to quit \npress 2 to continue\n:");
        scanf("%d",&shut);}
    while(shut!=1);
    return 0;
}