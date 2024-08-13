#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() 
{
    // if 1
    // int a = 0;
    // printf("Enter variable a ");
    // scanf("%i", &a);
    // if (a > 0) { // 1 solution
    //     ++a;
    // }
    // printf("%i", a);

    // (a > 0) ? printf("%i", ++a) : printf("%i", a); // 2 solution
    // printf("%i", a = (a > 0) ? ++a : a); // 3 solution


    // if 2
    // int a = 0;
    // printf("Enter variable a ");
    // scanf("%i", &a);
    // if (a > 0) { // 1 solution
    //     ++a;
    // }else {
    //     a = a - 2;
    // }
    // printf("%i", a);

    // printf("%i", a = (a > 0) ? ++a : a - 2); // 2 solution


    // if 3
    // int a = 0;
    // printf("Enter variable a ");
    // scanf("%i", &a);
    // if (a > 0) { // 1 solution
    //     ++a;
    // }else if (a == 0) {
    //     a = 10;
    // }else {
    //     a = a - 2;
    // }
    // printf("%i", a);

    // printf("%i", a = (a > 0) ? ++a : (a == 0) ? 10 : a - 2); // 2 solution


    // if 4
    // int a = 0, b = 0, c = 0, counter = 0;
    // printf("Enter variables a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // if (a > 0) { // 1 solution
    //     ++counter;
    // }
    // if (b > 0) {
    //     ++counter;
    // }
    // if (c > 0) {
    //     ++counter;
    // }

    // a = (a > 0) ? ++counter : 0; // 2 solution
    // b = (b > 0) ? ++counter : 0;
    // c = (c > 0) ? ++counter : 0;
    // printf("%i", counter);


    // if 5
    // int a = 0, b = 0, c = 0, counter = 0, counterNegative = 0;
    // printf("Enter variables a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // if (a > 0){ // 1 solution
    //     ++counter;
    // }else {
    //     ++counterNegative;
    // }
    // if (b > 0){
    //     ++counter;
    // }else {
    //     ++counterNegative;
    // }
    // if (c > 0){
    //     ++counter;
    // }else {
    //     ++counterNegative;
    // }

    // a = (a > 0) ? ++counter : ++counterNegative; // 2 solution
    // b = (b > 0) ? ++counter : ++counterNegative;
    // c = (c > 0) ? ++counter : ++counterNegative;
    // printf("Positive = %i\nNigative = %i", counter, counterNegative);


    // if 6
    // int a = 0, b = 0;
    // printf("Enter variables a and b ");
    // scanf("%i %i", &a, &b);
    // if (a > b) { // 1 solution
    //     printf("%i", a);
    // }else {
    //     printf("%i", b);
    // }

    // (a > b) ? printf("%i", a) : printf("%i", b); // 2 solution


    // if 7
    // int a = 0, b = 0;
    // printf("Enter variables a and b ");
    // scanf("%i %i", &a, &b);
    // if (a < b) { // 1 solution
    //     printf("%i", 1);
    // }else {
    //     printf("%i", 2);
    // }

    // (a < b) ? printf("%i", 1) : printf("%i", 2); // 2 solution


    // if 8
    // int a = 0, b = 0;
    // printf("Enter variables a and b ");
    // scanf("%i %i", &a, &b);
    // if (a > b) { // 1 solution
    //     printf("%i %i", a, b);
    // }else {
    //     printf("%i %i", b, a);
    // }

    // (a > b) ? printf("%i %i", a, b) : printf("%i %i", b, a); // 2 solution


    // if 9
    // float A = 0, B = 0;
    // printf("Enter variables A and B ");
    // scanf("%f %f", &A, &B);
    // if (A > B) { // 1 solution
    //     A = A + B;
    //     B = A - B;
    //     A = A - B;
    // }

    // (A > B) ? (A = A + B, B = A - B, A = A - B) : 0; // 2 solution
    // printf("%.2f %.2f", A, B);


    // if 10
    // int A = 0, B = 0;
    // printf("Enter variables A and B ");
    // scanf("%i %i", &A, &B);
    // if (A != B) { // 1 solution
    //     printf("%i %i", A + B, A + B);
    // }else {
    //     printf("%i %i", 0, 0);
    // }

    // (A != B) ? printf("%i %i", A + B, A + B) : printf("%i %i", 0, 0); // 2 solution


    // if 11
    // int A = 0, B = 0;
    // printf("Enter variables A and B ");
    // scanf("%i %i", &A, &B);
    // if (A != B && A > B) { // 1 solution
    //     B = A;
    // }else if (A != B && A < B) {
    //     A = B;
    // }else {
    //     A = B = 0;
    // }

    // (A != B && A > B) ? B = A : (A != B && A < B) ? A = B : (A = B = 0); // 2 solution
    // printf("%i %i", A, B);


    // if 12
    // int a = 0, b = 0, c = 0;
    // printf("Enter variavles a, b and c ");
    // scanf("%i %i %i", &a, &b, &c); 
    // if (a > c && b > c) { // 1 solution
    //     printf("%i", c);
    // }else if (a > b && c > b) {
    //     printf("%i", b);
    // }else {
    //     printf("%i", a);
    // }

    // printf("%i", (a > c && b > c) ? c : (a > b && c > b) ? b : a); // 2 solution

    
    // if 13
    // int a = 0, b = 0, c = 0;
    // printf("Enter variavles a, b and c ");
    // scanf("%i %i %i", &a, &b, &c); 
    // printf("%i", (a < b && a > c || a > b && a < c) ? a : (a < b && b < c || a > b && b > c) ? b : c);


    // if 14
    // int a = 0, b = 0, c = 0;
    // printf("Enter variavles a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // printf("Min - %i\n", (a < b && a < c) ? a : (b < a && b < c) ? b : c);
    // printf("Max - %i", (a > b && a > c) ? a : (b > a && b > c) ? b : c);


    // if 15
    // int a = 0, b = 0, c = 0;
    // printf("Enter variavles a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // printf("Sum - %i", (b > a && c > a) ? b + c : (a > c && b > c) ? a + b : a + c);


    // if 16
    // float A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%f %f %f", &A, &B, &C);
    // (A < B && B < C) ? A = pow(A,2), B = pow(B,2), C = pow(C,2) : (A = -A, B = -B, C = -C);
    // printf("%.2f %.2f %.2f", A, B, C);


    // if 17
    // float A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%f %f %f", &A, &B, &C);
    // (A < B && B < C || C < B && B < A) ? A = pow(A,2), B = pow(B,2), C = pow(C,2) : (A = -A, B = -B, C = -C);
    // printf("%.2f %.2f %.2f", A, B, C);


    // if 18
    // int a = 0, b = 0, c = 0;
    // printf("Enter variables a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // printf("%i", (a == b) ? 3 : (b == c) ? 1 : 2);


    // if 19
    // int a = 0, b = 0, c = 0, d = 0;
    // printf("Enter variables a, b, c and d ");
    // scanf("%i %i %i %i", &a, &b, &c, &d);
    // printf("%i", (a == b && b == c) ? 4 : (b == c && b == d) ? 1 : (a == c && c == d) ? 2 : 3);


    // if 20
    // int A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%i %i %i", &A, &B, &C);
    // (abs(B - A) < abs(C - A)) ? printf("Dot - B\nDistance - %i", abs(B - A)) : printf("Dot - C\nDistance - %i", abs(C - A));

    
    // if 21
    // int x = 0, y = 0;
    // printf("Enter variables x and y ");
    // scanf("%i %i", &x, &y);
    // printf("%i", (x == 0 && y == 0) ? 0 : (x == 0 && y != 0) ? 1 : (x != 0 && y == 0) ? 2 : 3);


    // if 22
    // int x = 0, y = 0;
    // printf("Enter variables x and y ");
    // scanf("%i %i", &x, &y); 
    // printf("Quarter - %i", (x > 0 && y > 0) ? 1 : (x < 0 && y > 0) ? 2 : (x < 0 && y < 0) ? 3 : 4);
    

    // if 23
    // int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
    // printf("Enter variables x1, y1, x2, y2, x3 and y3 ");
    // scanf("%i %i %i %i %i %i", &x1, &y1, &x2, &y2, &x3, &y3);
    // printf("x4 = %i\n", (x1 == x2) ? x3 : (x1 == x3) ? x2 : x1);
    // printf("y4 = %i", (y1 == y2) ? y3 : (y1 == y3) ? y2 : y1);


    // if 24
    // float x = 0;
    // printf("Enter variable x ");
    // scanf("%f", &x);
    // printf("f(x) = %.2f", (x > 0) ? 2*sin(x) : 6 - x);


    // if 25
    // int x = 0;
    // printf("Enter variable x ");
    // scanf("%i", &x);
    // printf("f(x) = %i", (x < -2 || x > 2) ? 2 * x : -3 * x);


    // if 26
    // float x = 0;
    // printf("Enter variable x ");
    // scanf("%f", &x);
    // printf("f(x) = %.2f", (x <= 0) ? -x : (x >= 2) ? 4.0f : pow(x,2));  


    // if 27
    // float x = 0;
    // printf("Enter variable x ");
    // scanf("%f", &x);
    // printf("f(x) = %i", (x < 0) ? 0 : ((int)x % 2 == 0) ? 1 : -1);


    // if 28
    // int year = 0;
    // printf("Enter variable year ");
    // scanf("%i", &year);
    // printf("Number of days %i", (year % 100 == 0 && year % 400 != 0) ? 365 : 366);


    // if 29
    // int a = 0;
    // printf("Enter variable a ");
    // scanf("%i", &a);
    // (a == 0) ? printf("Zero number %i", a) : (a > 0) ? printf("Positive ") : printf("Nigative ");
    // (a != 0 && a % 2 == 0) ? printf("even number %i", a) : (a != 0 && a % 2 != 0) ? printf("odd number %i", a) : 0;


    // if 30
    // int a = 0;
    // printf("Enter variable a (range 1 - 999) ");
    // scanf("%i", &a);
    // if (a < 1 || a > 999) {
    //     return;
    // }
    // (a % 2 == 0) ? printf("Even ") : printf("Odd ");
    // (a >= 0 && a < 10) ? printf("single-digit number %i", a) : (a >= 10 && a < 100) ? printf("two-digit number %i", a) : (a >= 100 && a < 1000) ? printf("three-digit number %i", a) : 0;
}