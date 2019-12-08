#include <stdio.h>

//definition of input function
int input(){
    int value;
    //prompting the user for input of integer value
    printf("Choose an integer for variable 'value':");
    //receiving the input from user and storing at memory location &value
    scanf("%d", &value);
    //printing the value of variable "value"
    printf("The chosen integer value of variable 'value' is %d\n", value);
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
