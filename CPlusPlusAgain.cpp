
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
//#include<conio.h>
//#include<iostream>
#include<stdlib.h> //for system function
#include<math.h> //math functions
//#include<cmath>
//#include <string>
#include <sstream>
#define G 6.67E-11

int main()

///* Viet chuong trinh nhap vao diem trung binh. In ra man hinh la PASS neu average >= 5 */
//{
//	float average;
//	printf("Insert your average score here (must not exceed 10 nor lower than 0): ");
//	scanf("%f", &average);
//	if (average>=5)
//	{
//		printf("Fuck yourself and have a life! Your average is: %f", average);
//	}
//	else 
//	{
//		printf("Take your ass back to class! Your average is: %f", average);
//	}
//	_getch();
//}

///* Write a program. Input Math and Lit score. Caculate the average >=5, Math and Lit has to be over 2.*/
//{
//	float M, L, average;
//	printf("Insert your Math and Literature score here, respectively: ");
//	scanf("%f%f", &M, &L);
//	average=(M+L)/2;
//	if ((average>=5)&&(M>2)&&(L>2))
//	{
//		printf("Ok, genius. Get out of here! Your average is: %.1f", average);
//	}
//	else
//	{
//		printf("Boo hoo! You've failed. Miserably! Your average is: %.1f", average);
//	}
//	_getch();
//}

///*Write a program determine whether a person must go serve the military or not. Nam, tuoi 18 - 25.*/
//{
//	float g, a;
//	printf("Insert your gender and age, respectively (male - 69, female - 96): ");
//	scanf("%f%f", &g, &a);
//	if ((g==69)&&(18>=a<=25))
//	{
//		printf("Get yourself together and defend our nation!");
//	}
//	if ((g!=69)||((a<18)&&(a>25)))
//	{
//		printf("You can go hard and you can go home!");
//	}
//	_getch();
//}

/*Write a program determine whether or not this person can be hired. Secretary female 18 - 25, male >30*/

//{
//	float g, A;
//	printf("Input your gender and age respectively (male - 69, female - 96): ");
//	scanf("%f%f", &g, &A);
//	if (((g==69)&&(A>30))||((g==96)&&((18<=A)&&(A<=25))))
//	{
//			printf("You've been hired as a secretary!");
//	}
//	else
//	{
//			printf("Go home, you're drunk!");
//	}
//	_getch();
//}

/* Write a program which has the following conditions as seen in the document*/
//{
//	float a, b, c, A;
//	printf("Input your math, lit and eng score to see how you are graded (respectively): ");
//	scanf("%f%f%f", &a,&b,&c);
//	if ((a<0||a>10)&&(b<0||b>10)&&(c<0||c>0))
//		printf("Are you fooling with me?");
//	else
//	{
//		A=(a+b+c)/3;
//			 if (A<5&&A>=0)
//		printf("You're graded as F");
//			else if (A<7)
//		printf("You're graded as C. Your average is: %f", A);
//			else if (A<8)
//		printf("You're graded as B");
//			else if (A<9)
//		printf("You're graded as A");
//			else
//		printf("You're graded as A+");
//			_getch();
//	}
//}

/*Hausaufgaben Eins: Insert any type of input. Print out whether it is a number type, letter type, math type or other types. */

//{
//	char in;
//	printf("Please insert any type of character here: ");
//	scanf("%c", &in);
//	if ((in >= 0 && in <= 46)||in==63||in==64)
//		printf("This is a special character: &c", in);
//	else if (in == 47 || in <= 62)
//		printf("This is a math operator: %c", in);
//	else if (in <= 90)
//		printf("This is an alphabet character: %c", in);
//	else if (in >= 97 && in <= 110)
//		printf("This is an alphabet character: %c", in);
//	else
//		printf("Other: &c", in);
//	_getch();
//}

/*Hausaufgaben Zwei: Insert two real number a and b. Solve and print out the result of ax + b = 0*/
//{
//	float a, b;
//	float x; //Solution
//	printf("Insert 2 real numbers respectively to the equation: ax + b = 0 \nto find the solution(s)");
//	scanf("%f%f", &a, &b);
//	if (a == 0) 
//	{
//		if (b == 0)
//			printf("Infinite solutions");
//		else 
//			printf("No solutions");
//	}
//	else {
//		x = -b / a;
//		printf("The solution to the equation is: %.1f", x);
//	}
//	_getch();
//}

/*Hausaufgaben Drei: Solve the quadratic equation*/
//{
//	float a, b, c; //Base numbers
//	float x1, x2; //Solution 1  and 2
//	float delta; //delta
//	printf("Insert 3 base numbers to the quadratic equation \n ax^2 + bx + c = 0 \n");
//	scanf("%f%f%f", &a,&b,&c);
//	delta = b*b - (4 * a * c);
//	if (delta < 0)
//		printf("No solutions \n");
//	else if (delta == 0)
//	{
//		x1 = x2 = -b / (2 * a);
//		printf("The solution is: %f \n", a);
//	}
//	else
//	{
//		x1 = (-b - sqrt(delta)) / (2*a);
//		x2 = (-b - sqrt(delta)) / (2*a);
//		printf("The solutions are x1 = %.2f and x2 = %.2f \n", x1, x2);
//		_getch();
//	}
//	system("PAUSE");
//}

// Learn to code again
{
    float a, b, c; //base numbers
    float x1, x2; //Solutions
    float delta;
    printf("Insert 3 base numbers to the quadratic fx \n");
    scanf("%f%f%f", &a, &b, &c);
    delta = b*b - (4*a*c);
    if (delta < 0)
        printf("Solutions are not available");
        else if (delta == 0)
        {
            x1 = x2 = -b / (2*a);
            printf("The solution is: %.02f \n", x1);
        }
    else
    {
        x1 = (-b - sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        printf("the solutions are x1 = %.2f and x2 = %.2f \n", x1, x2);
    }
    system("PAUSE");
}


