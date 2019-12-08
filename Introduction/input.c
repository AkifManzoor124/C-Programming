#include <stdio.h>

//definition of input function
int input(){
    int addend1;
    int addend2;
    int sum;
    //prompting the user for input of addend1
    printf("Choose an integer for the first addend1:");
    //receiving the input from user and storing at memory location &addend1
    scanf("%d", &addend1);
    printf("Choose an integer for the first addend2:");
    //receiving the input from user and storing at memory location &addend1
    scanf("%d", &addend2);
    //printing the value of variable "sum"
    printf("The value of addend1 is: %d\n", addend1);
    printf("The value of addend2 is: %d\n", addend2);
    printf("The sum of addend1 and addend2 is: %d\n", addend1 + addend2);
    return 0;
}

//causing errors.
//Not printing values of a and pi
//Answer is found here
//https://stackoverflow.com/questions/3744776/simple-c-scanf-does-not-work
int multipleinputs(){
    /*
    causing errors.
    Not printing values of a and pi
    Answer:
    https://stackoverflow.com/questions/3744776/simple-c-scanf-does-not-work

    char a;
    float pi;

    printf("What letter does my name start with? What is the value of pi? ");
    scanf("%c%f", &a, &pi);
    printf("You entered: %c and %f", a, pi);

    return 0;
    */

    int a;
    float b;
    printf("Enter integer and then a float: ");

    // Taking multiple inputs
    scanf("%d%f", &a, &b);
    printf("You entered %d and %f", a, b);
    return 0;
}
