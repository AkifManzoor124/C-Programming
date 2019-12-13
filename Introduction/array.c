//program to take 5 values from the user and store them in an array
//print the elements stored in the array

int array_example1(){

    int num;

    printf("How many values would you like to input?");
    scanf("%d",&num);

    double values[num];

    for(int i = 0; i < num ;i++)
    {
        printf("Please input a value:");
        scanf("%lf",&values[i]);
    }

    // printing elements of an array
    for(int i = 0; i < num; i++)
    {
        printf("%lf\n", values[i]);
    }

    return 0;
}
