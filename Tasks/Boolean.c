#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() 
{
    // boolean 1
    // int A = 0;
    // printf("Enter variable A ");
    // scanf("%i", &A);
    // printf("A positive %i", A > 0);

    // boolean 2
    // int A = 0;
    // printf("Enter variable A ");
    // scanf("%i", &A);
    // printf("A odd %i", A % 2 != 0);

    // boolean 3
    // int A = 0;
    // printf("Enter variable A ");
    // scanf("%i", &A);
    // printf("A even %i", A % 2 == 0);

    // boolean 4
    // int A = 0, B = 0;
    // printf("Enter variables A and B ");
    // scanf("%i %i", &A, &B);
    // printf("A > 2 and B <= 3 - %i", A > 2 && B <= 3);

    // boolean 5
    // int A = 0, B = 0;
    // printf("Enter variables A and B ");
    // scanf("%i %i", &A, &B);
    // printf("A >= 0 or B < -2 - %i", A >= 0 || B < -2);

    // boolean 6
    // int A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%i %i %i", &A, &B, &C);
    // printf("A < B < C - %i", A < B && B < C);

    // boolean 7
    // int A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%i %i %i", &A, &B, &C);
    // printf("B is between a, c - %i", (A < B && B < C) || (A > B && B > C));

    // boolean 8
    // int A = 0, B = 0;
    // printf("Enter variables A and B ");
    // scanf("%i %i", &A, &B);
    // printf("A and B odd - %i", A % 2 != 0 && B % 2 != 0);

    // boolean 9
    // int A = 0, B = 0;
    // printf("Enter variables A and B ");
    // scanf("%i %i", &A, &B);
    // printf("A or B odd - %i", A % 2 != 0 || B % 2 != 0);

    // boolean 10
    // int A = 0, B = 0;
    // printf("Enter variables A and B ");
    // scanf("%i %i", &A, &B);
    // printf("Exactly one of the numbers A and B odd - %i", (A % 2 != 0 && B % 2 == 0) || (A % 2 == 0 && B % 2 != 0));

    // boolean 11
    // int A = 0, B = 0;
    // printf("Enter variables A and B ");
    // scanf("%i %i", &A, &B);
    // printf("A and B same parity - %i", (A % 2 == 0 && B % 2 == 0) || (A % 2 != 0 && B % 2 != 0));

    // boolean 12
    // int A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%i %i %i", &A, &B, &C);
    // printf("A, B and C positive - %i", A > 0 && B > 0 && C > 0);

    // boolean 13
    // int A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%i %i %i", &A, &B, &C);
    // printf("Positive one of A, B, C - %i", A > 0 || B > 0 || C > 0);

    // boolean 14
    // int A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%i %i %i", &A, &B, &C);
    // printf("Exactly one of A, B, C - %i", (A > 0 && B <= 0 && C <= 0) || (A <= 0 && B > 0 && C <= 0) || (A <= 0 && B <= 0 && C > 0));

    // boolean 15
    // int A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%i %i %i", &A, &B, &C);
    // printf("Exactly two of A, B, C - %i", (A > 0 && B > 0 && C <= 0) || (A <= 0 && B > 0 && C > 0) || (A > 0 && B <= 0 && C > 0));

    // boolean 16
    // int A = 0;
    // printf("Enter variable A ");
    // scanf("%i", &A);
    // printf("A is an even two-digit number - %i", A % 2 == 0 && A > 9 && A < 100);

    // boolean 17
    // int A = 0;
    // printf("Enter variable A ");
    // scanf("%i", &A);
    // printf("A is an odd three-digit number - %i", A % 2 != 0 && A > 99 && A < 1000);

    // boolean 18
    // int A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%i %i %i", &A, &B, &C);
    // printf("One pair of identical ones from A, B, C - %i", A == B || B == C || C == A);

    // boolean 19
    // int A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%i %i %i", &A, &B, &C);
    // printf("One pair of mutually opposite numbers %i", A == -B || -A == B || A == -C || -A == C || B == -C || -B == C );

    // bolean 20
    // int number = 0;
    // printf("Enter variable number ");
    // scanf("%i", &number);
    // printf("All digits of a given number are different %i", ((number / 100) != (number / 10 % 10)) && ((number / 100) != (number % 10)) && ((number / 10 % 10) != (number % 10)));

    // bolean 21
    // int number = 0;
    // printf("Enter variable number ");
    // scanf("%i", &number);
    // printf("The digits of the measurement data determine the growth of the sequence %i", ((number / 100) < (number / 10 % 10)) && ((number / 10 % 10) < (number % 10)));

    // bolean 22
    // int number = 0;
    // printf("Enter variable number ");
    // scanf("%i", &number);
    // printf("The numbers define a definable age or descending sequence %i", ((number / 100) < (number / 10 % 10)) && ((number / 10 % 10) < (number % 10)) || ((number / 100) > (number / 10 % 10)) && ((number / 10 % 10) > (number % 10)));

    // bolean 23
    // int number = 0;
    // printf("Enter variable number ");
    // scanf("%i", &number);
    // printf("This number is read the same from left to right and from right to left %i", ((number / 1000) == (number % 10)) && ((number / 100 % 10) == (number / 10 % 10)));

    // bolean 24
    // int A = 0, B = 0, C = 0;
    // printf("Enter variables A (A != 0), B and C ");
    // scanf("%i %i %i", &A, &B, &C);
    // printf("The equation has real roots %i", (pow(B,2) - 4 * A * C) >= 0);

    // bolean 25
    // int x = 0, y = 0;
    // printf("Enter variables x and y ");
    // scanf("%i %i", &x, &y);
    // printf("The point with coordinates (x, y) lies in the second coordinate quadrant %i", x < 0 && y > 0);

    // bolean 26
    // int x = 0, y = 0;
    // printf("Enter variables x and y ");
    // scanf("%i %i", &x, &y);
    // printf("The point with coordinates (x, y) lies in the fourth coordinate quadrant %i", x > 0 && y < 0);

    // bolean 27
    // int x = 0, y = 0;
    // printf("Enter variables x and y ");
    // scanf("%i %i", &x, &y);
    // printf("A point with coordinates (x, y) lies in the second or third coordinate quadrant %i", (x < 0 && y > 0) || (x < 0 && y < 0));

    // bolean 28
    // int x = 0, y = 0;
    // printf("Enter variables x and y ");
    // scanf("%i %i", &x, &y);
    // printf("A point with coordinates (x, y) lies in the first or third coordinate quadrant %i", (x > 0 && y > 0) || (x < 0 && y < 0));

    // bolean 29
    // int x = 0, y = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    // printf("Enter variables x, y, x1, y1, x2 and y2 ");
    // scanf("%i %i %i %i %i %i", &x, &y, &x1, &y1, &x2, &y2);
    // printf("Point with coordinates (x,y) lies inside a rectangle, the upper left vertex of which has coordinates (x1,y1), the lower right vertex has coordinates (x2,y2), and the sides are parallel to the coordinate axes %i", (x >= x1 && x <= x2) && (y <= y1 && y >= y2));

    // bolean 30
    // int a = 0, b = 0, c = 0;
    // printf("Enter variables a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // printf("A triangle with sides a, b, c is equilateral %i", a == b && b == c && a == c);

    // bolean 31
    // int a = 0, b = 0, c = 0;
    // printf("Enter variables a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // printf("A triangle with sides a, b, c is isosceles %i", a == b || a == c || b == c);

    // bolean 32
    // int a = 0, b = 0, c = 0;
    // printf("Enter variables a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // printf("A triangle with sides a, b, c is a right triangle %i", pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(a,2) + pow(b,2));

    // bolean 33
    // int a = 0, b = 0, c = 0;
    // printf("Enter variables a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // printf("There is a triangle with sides a, b, c %i", a + b > c && a + c > b && b + c > a);

    // bolean 34
    // int x = 0, y = 0;
    // printf("Enter variable x and y (range 1-8) ");
    // scanf("%i %i", &x, &y);
    // printf("This field is white %i", (x + y) % 2 != 0);

    // bolean 35
    // int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    // printf("Enter variables x1, y1, x2 and y2 (range 1-8) ");
    // scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    // printf("These fields have the same color %i", ((x1 + y1) % 2 == 0 && (x2 + y2) % 2 == 0) || ((x1 + y1) % 2 != 0 && (x2 + y2) % 2 != 0));

    // bolean 36
    // int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    // printf("Enter variables x1, y1, x2 and y2 (range 1-8) ");
    // scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    // printf("A rook can move from one square to another in one move %i", x1 == x2 || y1 == y2);

    // bolean 37
    // int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    // printf("Enter variables x1, y1, x2 and y2 (range 1-8) ");
    // scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    // printf("The king can move from one square to another in one move %i", abs(x1 - x2) <= 0 && abs(y1 - y2) <= 0);

    // bolean 38
    // int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    // printf("Enter variables x1, y1, x2 and y2 (range 1-8) ");
    // scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    // printf("A bishop can move from one square to another in one move %i", abs(x1 - x2) == abs(y1 - y2));

    // bolean 39
    // int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    // printf("Enter variables x1, y1, x2 and y2 (range 1-8) ");
    // scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    // printf("The queen can move from one square to another in one move %i", x1 == x2 || y1 == y2 || abs(x1 - x2) == abs (y1 - y2));

    // bolean 40
    // int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    // printf("Enter variables x1, y1, x2 and y2 (range 1-8) ");
    // scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    // printf("A knight can move from one square to another in one move %i", (abs(x1 - x2) == 1 && abs(y1 - y2) == 2) || (abs(x1 - x2) == 2 && abs(y1 - y2) == 1));
}