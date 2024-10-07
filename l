Case Study: Sentinel Controlled Repetition. Given the following pseudocode, create a program that will implement a sentinel controlled repetition. For example, you can use (-1) as the sentinel value. You can use Problem 1 as your reference.
 

Pseudocode:

Initialize total to zero

Initialize counter to zero

 

Input the first grade

While the user has not as yet entered the sentinel

Add this grade into the running total

Add one to the grade counter

Input the next grade (possibly the sentinel)

If the counter is not equal to zero

Set the average to the total divided by the counter

Print the average

else

Print “No grades were entered”

 

 

 

/*Class average program with counter-controlled repetition */

#include<stdio.h>

 

int main()

{

     int counter, grade, total, average;

     /* initialization phase */

     total = 0;

     counter = 1;

 

     /* processing phase */

     while (counter <=10){

    printf("Enter the grade: ");

    scanf("%d", &grade);

    total = total + grade;

    counter = counter + 1;

     }

     /* termination phase */

     average = total / 10;

     printf("Class average is %d\n", average);

 

     return 0; /* program ends */

}

