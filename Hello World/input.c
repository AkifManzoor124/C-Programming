#include <stdio.h>

//definition of input function
int input(){
    int value;
    //prompting the user for input of integer value
    printf("Choose an integer for variable 'value':");
    //receiving the input from user and storing at memory location &value
    scanf("%d", &value);
    //printing the value of variable "value"
    printf("The chosen integer value of variable 'value' is %d", value);
    return 0;
}
