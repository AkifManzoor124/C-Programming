#include <stdio.h>

int if_example(){
    int a;
    int b;

    printf("Please input first number:");
    scanf("%d",&a);
    printf("Please input second number: ");
    scanf("%d",&b);

    if(a > b)
    {
        printf("%d is greater than %d",a,b);
    }
    else if(a < b)
    {
        printf("%d is less than %d", a,b);
    }
    else
    {
        printf("%d is equal to %d",a,b);
    }

    return 0;
}

int for_loop_example(){

    int starting_number;

    printf("This example will go though a 10 numbers starting from the number you choose:");
    scanf("%d",&starting_number);

    int i = starting_number;
    for(i = 0; i < 10; i++)
    {
        printf("%d\n",i + starting_number);
    }

    //Why does this print the same value as the above statement
    printf("\n");
    i = starting_number;
    for(i = 0; i < 10; ++i)
    {
        printf("%d\n",i + starting_number);
    }


    printf("\nThis time, we're skipping a number :D\n");
    i = starting_number;
    //Here we double the amount of loops to accommodate for i=i+2
    for(i = 0; i < 20; i = i+2)
    {
        printf("%d\n",i + starting_number);
    }

    return 0;
}

int while_example()
{

    int a;
    int b;

    printf("Pick a value for a\n");
    scanf("%d",&a);
    printf("Pick a value for b\n");
    scanf("%d",&b);

    while(a < b)
    {
        a++;
    }
    printf("%d and %d are now equal",a,b);

    return 0;

}

int do_while_example()
{
    //just testing the fact that double and float can be used together
    //There are special cases tho. Double holds 8 bytes and float holds 4 bytes
    float num;
    double sum;
    do
    {
        printf("Enter a number: ");
        scanf("%f",&num);
        sum += num;
    }
    while(num != 0.0);

    printf("sum: %lf",sum);

    return 0;
}

//program to sum a max of 10 numbers
//if the user enters a negative number, end the loop
//if the user enters 0, continue to next loop
int break_continue_example(){

    int num;
    int sum = 0;

    int i;
    while(i != 10)
    {
        printf("Please enter a number: ");
        scanf("%d",&num);
        if(num < 0){
            printf("You entered a negative number\nExiting\n");
            break;
        }
        if(num == 0){
            printf("You entered a 0\nMoving to next loop\n");
            continue;
        }
        sum += num;
        i++;
    }
    printf("sum: %d",sum);

    return 0;
}

//A calculator with operations +, -, /, and *
//Using switch cases for the operations
int switch_calculator_example()
{
    double a;
    double b;
    char operation;

    printf("Pick a value for a: ");
    scanf(" %lf",&a);

    printf("\nPick a value for b: ");
    scanf(" %lf",&b);

    printf("\nPlease pick an operation to perform: ");
    scanf(" %c",&operation);

    switch(operation)
    {
        case '+':
            printf("%lf + %lf = %lf" ,a, b, a+b);
            break;
        case '-':
            printf("%lf + %lf = %lf" ,a, b, a-b);
            break;
        case '/':
            printf("%lf + %lf = %lf" ,a, b, a/b);
            break;
        case '*':
            printf("%lf + %lf = %lf" ,a, b, a*b);
            break;
        default:
            printf("\nInvalid Operation");
    }

    return 0;
}
