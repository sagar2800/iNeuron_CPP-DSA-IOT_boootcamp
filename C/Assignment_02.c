//1. Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Unit digit of %d is %d",n,n%10);
    return 0;
}

//2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The number %d without last digit is %d",n,n/10);
    return 0;
}

//3. Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
    return 0;
}

//4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
    return 0;
}

//5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a three digit number\n");
    scanf("%d",&n);
     for (i=1;i<=3;i++)
    {
        sum+=(n % 10);
        n/=10;
    }
    printf("The sum of the given numbers  is %d", sum);
    return 0;
}

//6. Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter any character\n");
    scanf("%c",&c);
    printf("ASCII value of %c :%d",c,c);
    return 0;
}

//7. Write a program to find the position of first 1 in LSB.

//8. Write a program to check whether the given number is even or odd using a bitwise operator.


//9. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;

    printf("Size of %d %d %d %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    return 0;
}

//10. Write a program to make the last digit of a number stored in a variable as zero.(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
    int a=4225;
    printf("%d",10 *(a/10));
    return 0;
}

/*11. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 
      and digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a digit to append to this number");
    scanf("%d",&b);
    printf("\nResult: %d",(a*10)+b);
    return 0;
}


//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
    int dollar_rate=76.23,total_inr;
    printf("Enter the rupees\n");
    scanf("%d",&total_inr);
    printf("%d INR is worth %d USD",total_inr,(total_inr/dollar_rate));
    return 0;
}

//13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter three digit number\n");
    scanf("%d",&a);
    printf("One position towards the right is %d",(a%10)*100+(a/10));
    return 0;
}
