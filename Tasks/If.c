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
    // if (a < b && a > c || a > b && a < c) { // 1 solution
    //     printf("%i", a);
    // }else if (a < b && b < c || a > b && b > c) {
    //     printf("%i", b);
    // }else {
    //     printf("%i", c);
    // }

    // printf("%i", (a < b && a > c || a > b && a < c) ? a : (a < b && b < c || a > b && b > c) ? b : c); // 2 solution


    // if 14
    // int a = 0, b = 0, c = 0;
    // printf("Enter variavles a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // if (a < b && a < c) { // 1 solution
    //     printf("Min - %i\n", a);
    // }else if (b < a && b < c) {
    //     printf("Min - %i\n", b);
    // }else {
    //     printf("Min - %i\n", c);
    // }

    // if (a > b && a > c) {
    //     printf("Max - %i", a);
    // }else if (b > a && b > c) {
    //     printf("Max - %i", b);
    // }else {
    //     printf("Max - %i", c);
    // }

    // printf("Min - %i\n", (a < b && a < c) ? a : (b < a && b < c) ? b : c); // 2 solution
    // printf("Max - %i", (a > b && a > c) ? a : (b > a && b > c) ? b : c);


    // if 15
    // int a = 0, b = 0, c = 0;
    // printf("Enter variavles a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // if (b > a && c > a) { // 1 solution
    //     printf("Sum - %i", b + c);
    // }else if (a  > c && b > c) {
    //     printf("Sum - %i", a + b);
    // }else {
    //     printf("Sum - %i", a + c);
    // }

    // printf("Sum - %i", (b > a && c > a) ? b + c : (a > c && b > c) ? a + b : a + c); // 2 solution


    // if 16
    // float A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%f %f %f", &A, &B, &C);
    // if (A < B && B < C) { // 1 solution
    //     A = pow(A,2);
    //     B = pow(B,2);
    //     C = pow(C,2);
    // }else {
    //     A = -A;
    //     B = -B;
    //     C = -C;
    // }

    // (A < B && B < C) ? A = pow(A,2), B = pow(B,2), C = pow(C,2) : (A = -A, B = -B, C = -C); // 2 solution
    // printf("%.2f %.2f %.2f", A, B, C);


    // if 17
    // float A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%f %f %f", &A, &B, &C);
    // if (A < B && B < C || C < B && B < A) { // 1 solution
    //     A = pow(A,2);
    //     B = pow(B,2);
    //     C = pow(C,2);
    // }else {
    //     A = -A;
    //     B = -B;
    //     C = -C;
    // }

    // (A < B && B < C || C < B && B < A) ? A = pow(A,2), B = pow(B,2), C = pow(C,2) : (A = -A, B = -B, C = -C); // 2 solution
    // printf("%.2f %.2f %.2f", A, B, C);


    // if 18
    // int a = 0, b = 0, c = 0;
    // printf("Enter variables a, b and c ");
    // scanf("%i %i %i", &a, &b, &c);
    // if (a == b) { // 1 solution
    //     printf("%i", 3);
    // }else if (b == c) {
    //     printf("%i", 1);
    // }else {
    //     printf("%i", 2);
    // }

    // printf("%i", (a == b) ? 3 : (b == c) ? 1 : 2); // 2 solution


    // if 19
    // int a = 0, b = 0, c = 0, d = 0;
    // printf("Enter variables a, b, c and d "); 
    // scanf("%i %i %i %i", &a, &b, &c, &d);
    // if (a == b && b == c) { // 1 solution
    //     printf("%i", 4);
    // }else if (b == c && b == d) {
    //     printf("%i", 1);
    // }else if (a == c && c == d) {
    //     printf("%i", 2);
    // }else {
    //     printf("%i", 3);
    // }

    // printf("%i", (a == b && b == c) ? 4 : (b == c && b == d) ? 1 : (a == c && c == d) ? 2 : 3); // 2 solution


    // if 20
    // int A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%i %i %i", &A, &B, &C);
    // if (abs(B - A) < abs(C - A)) { // 1 solution
    //     printf("Dot - B\nDistance - %i", B - A);
    // }else {
    //     printf("Dot - C\nDistance - %i", C - A);
    // }

    // (abs(B - A) < abs(C - A)) ? printf("Dot - B\nDistance - %i", abs(B - A)) : printf("Dot - C\nDistance - %i", abs(C - A)); // 2 solution

    
    // if 21
    // int x = 0, y = 0;
    // printf("Enter variables x and y ");
    // scanf("%i %i", &x, &y);
    // if (x == 0 && y == 0) { // 1 solution
    //     printf("%i", 0);
    // }else if (x == 0 && y != 0) {
    //     printf("%i", 1);
    // }else if (x != 0 && y == 0) {
    //     printf("%i", 2);
    // }else {
    //     printf("%i", 3);
    // }

    // printf("%i", (x == 0 && y == 0) ? 0 : (x == 0 && y != 0) ? 1 : (x != 0 && y == 0) ? 2 : 3); // 2 solution


    // if 22
    // int x = 0, y = 0;
    // printf("Enter variables x and y ");
    // scanf("%i %i", &x, &y); 
    // if (x > 0 && y > 0) { // 1 solution
    //     printf("Quarter - %i", 1);
    // }else if (x < 0 && y > 0) {
    //     printf("Quarter - %i", 2);
    // }else if (x < 0 && y < 0) {
    //     printf("Quarter - %i", 3);
    // }else {
    //     printf("Quarter - %i", 4);
    // }

    // printf("Quarter - %i", (x > 0 && y > 0) ? 1 : (x < 0 && y > 0) ? 2 : (x < 0 && y < 0) ? 3 : 4); // 2 solution
    

    // if 23
    // int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
    // printf("Enter variables x1, y1, x2, y2, x3 and y3 ");
    // scanf("%i %i %i %i %i %i", &x1, &y1, &x2, &y2, &x3, &y3);
    // if (x1 == x2) { // 1 solution
    //     printf("x4 = %i\n", x3);
    // }else if (x1 == x3) {
    //     printf("x4 = %i\n", x2);
    // }else {
    //     printf("x4 = %i\n", x1);
    // }
    
    // if (y1 == y2) {
    //     printf("y4 = %i\n", y3);
    // }else if (y1 == y3) {
    //     printf("y4 = %i\n", y2);
    // }else {
    //     printf("y4 = %i\n", y1);
    // }

    // printf("x4 = %i\n", (x1 == x2) ? x3 : (x1 == x3) ? x2 : x1); // 2 solution
    // printf("y4 = %i", (y1 == y2) ? y3 : (y1 == y3) ? y2 : y1);


    // if 24
    // float x = 0;
    // printf("Enter variable x ");
    // scanf("%f", &x);
    // if (x > 0) { // 1 solution
    //     printf("f(x) = %.2f", 2*sin(x));
    // }else {
    //     printf("f(x) = %.2f", 6 - x);
    // }

    // printf("f(x) = %.2f", (x > 0) ? 2*sin(x) : 6 - x); // 2 solution


    // if 25
    // int x = 0;
    // printf("Enter variable x ");
    // scanf("%i", &x);
    // if (x < -2 || x > 2) { // 1 solution
    //     printf("f(x) = %i", 2*x);
    // }else {
    //     printf("f(x) = %i", -3*x);
    // }

    // printf("f(x) = %i", (x < -2 || x > 2) ? 2 * x : -3 * x); // 2 solution


    // if 26
    // float x = 0;
    // printf("Enter variable x ");
    // scanf("%f", &x);
    // if (x <= 0) { // 1 solution
    //     printf("f(x) = %.2f", -x);
    // }else if (x >= 2) {
    //     printf("f(x) = %.2f", 4.0f);
    // }else {
    //     printf("f(x) = %.2f", pow(x,2));
    // }

    // printf("f(x) = %.2f", (x <= 0) ? -x : (x >= 2) ? 4.0f : pow(x,2)); // 2 solution



    // if 27
    // float x = 0;
    // printf("Enter variable x ");
    // scanf("%f", &x);
    // if (x < 0) { // 1 solution
    //     printf("f(x) = %i", 0);
    // }else if ((int)x % 2 == 0) {
    //     printf("f(x) = %i", 1);
    // }else {
    //     printf("f(x) = %i", -1);
    // }

    // printf("f(x) = %i", (x < 0) ? 0 : ((int)x % 2 == 0) ? 1 : -1); // 2 solution


    // if 28
    // int year = 0;
    // printf("Enter variable year ");
    // scanf("%i", &year);
    // if (year % 100 == 0 && year % 400 != 0) { // 1 solution
    //     printf("Number of days %i", 365);
    // }else {
    //     printf("Number of days %i", 366);
    // }

    // printf("Number of days %i", (year % 100 == 0 && year % 400 != 0) ? 365 : 366); // 2 solution


    // if 29
    // int a = 0;
    // printf("Enter variable a ");
    // scanf("%i", &a);
    // if (a == 0) { // 1 solution
    //     printf("Zero number %i", a);
    // }else if (a > 0) {
    //     printf("Positive ");
    // }else {
    //     printf("Nigative ");
    // }

    // if (a != 0 && a % 2 == 0) {
    //     printf("even number %i", a);
    // }else if (a != 0 && a % 2 != 0) {
    //     printf("odd number %i", a);
    // }

    // (a == 0) ? printf("Zero number %i", a) : (a > 0) ? printf("Positive ") : printf("Nigative "); // 2 solution
    // (a != 0 && a % 2 == 0) ? printf("even number %i", a) : (a != 0 && a % 2 != 0) ? printf("odd number %i", a) : 0;

    // if 30
    // int a = 0;
    // printf("Enter variable a (range 1 - 999) ");
    // scanf("%i", &a);
    // if (a % 2 == 0) { // 1 solution
    //     printf("Even ");
    // }else {
    //     printf("Odd ");
    // }

    // if (a >= 0 && a < 10) {
    //     printf("single-digit number %i", a);
    // }else if (a >= 10 && a < 100) {
    //     printf("two-digit number %i", a);
    // }else if (a >= 100 && a < 1000) {
    //     printf("three-digit number %i", a);
    // }

    // (a % 2 == 0) ? printf("Even ") : printf("Odd "); // 2 solution
    // (a >= 0 && a < 10) ? printf("single-digit number %i", a) : (a >= 10 && a < 100) ? printf("two-digit number %i", a) : (a >= 100 && a < 1000) ? printf("three-digit number %i", a) : 0;
}