//
//  main.c
//  Assignment1FizzBuzz
//
//  Created by Michael Reining on 11/3/14.
//  Copyright (c) 2014 Michael Reining. All rights reserved.
//

#include <stdio.h>

// For Loop example

void printForLoop () {
    for (int number = 1; number <=100; number++) { // for Numbers 1 to 100
        if (number %3 ==0 && number %5 ==0) { // If multiple of 3 and 5
            printf("FizzBuzz\n");
        } else if (number %3 ==0) { // If multiple of 3
            printf("Fizz\n");
        } else if (number %5 == 0) { // If multiple of 5
            printf("Buzz\n");
        } else {
            printf("%d\n",number); // else just print number
        }
    }
}

// While Loop example

void printWhileLoop (int number) {
    while (number <101) {
        if (number %3 ==0 && number %5 ==0) {
            printf("FizzBuzz\n");
            number++;
        } else if (number %3 ==0){
            printf("Fizz\n");
            number++;
        } else if (number %5 ==0){
            printf("Buzz\n");
            number++;
        } else {
            printf("%d\n",number);
            number++;
            }
    }
}


int main(int argc, const char * argv[]) {
    printf("Assignment 1 completed with For Loop below:\n");
    
    printForLoop(); // execute for loop

    printf("\n Assignment 1 completed with While Loop below:\n");
    
    printWhileLoop(1); // execute while loop
    
    return 0;
}
