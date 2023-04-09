//1. Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
    int month = 0;
    while(month == 0 || month > 12)
    {
        printf("Enter the month to know the number of days: ");
        scanf("%d", &month);
        switch(0)
        {
            case 0:
                if(month <= 0 || month > 12)
                {
                    printf("Invalid Entry.Please re-enter\n");
                    break;
                }
            case 1:
                if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                {
                    printf("This month has 31 days");
                    break;
                }
            case 2:
                if(month == 4 || month == 6 || month == 9 || month == 11)
                {
                    printf("This month has 30 days");
                    break;
                }
            case 3:
                printf("This month has 28 days");
                break;
        }
    }
    return 0;
}
/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c = 'a';
    c--;
    int a,b;
    while(c < 'a' || c > 'd')
    {
        printf("\nEnter any of the following:\n");
        printf("a.Addition\nb.Substraction\nc.Multiplication\nd.Division\ne.Exit\n");
        scanf("%c", &c);
        switch(c)
        {
            case 'a':
                printf("Enter two numbers:");
                scanf("%d %d", &a, &b);
                printf("Sum is %d", a + b);
                break;
            case 'b':
                printf("Enter two numbers:");
                scanf("%d %d", &a, &b);
                printf("Difference is %d", a - b);
                break;
            case 'c':
                printf("Enter two numbers:");
                scanf("%d %d", &a, &b);
                printf("Product is %d", a * b);
                break;
            case 'd':
                printf("Enter two numbers:");
                scanf("%d %d", &a, &b);
                printf("Quotient is %d", a / b);
                break;
            case 'e':
                exit(0);
            default:
                printf("Enter a valid choice\n");
        }
    }
    return 0;
}
//3. Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 0;
    while(n <= 0 || n > 7)
    {
        printf("Enter the day number: ");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
                printf("Push yourself because no one else is going to do it for you");
                break;
            case 2:
                printf("You should never give up");
                break;
            case 3:
                printf("Love every moment");
                break;
            case 4:
                printf("Love yourself first");
                break;
            case 5:
                printf("Work hard to get success");
                break;
            case 6:
                printf("Wake up before the sunrise");
                break;
            case 7:
                printf("Do meditation everyday");
                break;
            default:
                printf("Wrong choice.Re-enter\n");
        }
    }
    return 0;
}
/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int side1, side2, side3;
    char a;
    printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf("c. Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("d. Exit\n");
    scanf("%c", &a);
    switch(a)
    {
        case 'a':
            printf("Enter length of three sides of a triangle: ");
            scanf("%d %d %d", &side1, &side2, &side3);
            if (side1 == side2 || side2 == side3 || side3 == side1) 
                printf("This is an Isosceles triangle");
            else
                printf("This is not an Isosceles triangle");
            break;
        case 'b':
            printf("Enter length of three sides of a triangle: ");
            scanf("%d %d %d", &side1, &side2, &side3);
            if ((side1 * side1) == (side2 * side2) + (side3 * side3)
                || (side2 * side2) == (side3 * side3) + (side1 * side1)
                || (side3 * side3) == (side2 * side2) + (side1 * side1))
                printf("The triangle is Right Angled Triangle");
            else
                printf("The triangle is not a Right Angled Triangle");
            break;
        case 'c':
            printf("Enter length of three sides of a triangle: ");
            scanf("%d %d %d", &side1, &side2, &side3);
            if ((side1 == side2) && (side2 == side3))
                printf("The Triangle is an Equilateral Triangle");
            else
                printf("The Triangle is not Equilateral Triangle");
            break;
        case 'd':
            exit(0);
        default:
            printf("Enter a valid choice\n");
    }
}
/*5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
*/
#include<stdio.h>
int main()
{
    int var;
    printf("Enter a number: ");
    scanf("%d", &var);
    switch(var)
    {
        case 1:
            printf("Good");
            break;
        case 2:
            printf("Better");
            break;
        case 3:
            printf("Best");
            break;
        default:
            printf("Invalid");
    }
}
/*
6. Program to check whether a year is a leap year or not. Using switch
statement
*/
#include<stdio.h>
int main()
{
    int y,num = 1;
    printf("Enter the year: ");
    scanf("%d", &y);
    switch(1)
    {
        case 1:
            if(y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
            {
                printf("%d is a leap year", y);
                break;
            }
        case 2:
            printf("%d is not a leap year",y);
    }
    return 0;
}
/*
7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
#include <stdio.h>
int main()
{
    float units, bill;
    printf("Enter the electricity units consumed: ");
    scanf("%f", &units);

    switch(units) {
        case units <= 50:
            bill = units * 0.5;
            break;
        case units <= 150:
            bill = 50 * 0.5 + (units - 50) * 0.75;
            break;
        case units <= 250:
            bill = 50 * 0.5 + 100 * 0.75 + (units - 150) * 1.20;
            break;
        default:
            bill = 50 * 0.5 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
            break;
    }

    bill = bill * 1.20; // add 20% surcharge to the bill

    printf("Total electricity bill = Rs. %.2f", bill);

    return 0;
}
//8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch(1)
    {
        case 1:
            if(num > 0)
            {
                num = -1 * num;
                printf("%d", num);
                break;
            }
        case 2:
            num = num - (num * 2);
            printf("%d", num);
    }
    return 0;
}
//9. Program to Convert even number into its upper nearest odd number Switch Statement.
#include <stdio.h>
int main()
{
    int even_num, odd_num;
    printf("Enter an even number: ");
    scanf("%d", &even_num);
    switch (even_num % 2) {
        case 0:
            odd_num = even_num + 1;
            printf("%d converted to its upper nearest odd number is %d", even_num, odd_num);
            break;
        case 1:
            printf("%d is already an odd number", even_num);
            break;
    }
    return 0;
}
//10. C program to find all roots of a quadratic equation using switch case
#include <stdio.h>
int main()
{
    float a, b, c, delta, root1, root2, real_part, imag_part;
    printf("Enter the coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b*b - 4*a*c;

    switch(delta > 0) {
        case 1:
            root1 = (-b + sqrt(delta)) / (2*a);
            root2 = (-b - sqrt(delta)) / (2*a);
            printf("The roots are real and distinct: %f and %f\n", root1, root2);
            break;
        case 0:
            switch(delta < 0) {
                case 1:
                    real_part = -b / (2*a);
                    imag_part = sqrt(-delta) / (2*a);
                    printf("The roots are complex conjugates: %f + %fi and %f - %fi\n", real_part, imag_part, real_part, imag_part);
                    break;
                case 0:
                    root1 = -b / (2*a);
                    printf("The root is real and repeated: %f\n", root1);
                    break;
            }
            break;
    }

    return 0;
}
