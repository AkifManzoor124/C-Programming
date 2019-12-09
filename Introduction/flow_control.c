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

