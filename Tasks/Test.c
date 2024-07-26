#include <stdio.h>
#include <math.h>

void main()
{
    // begin 1
    // float a = 0;
    // printf("Enter variable a ");
    // scanf("%f", &a);
    // printf("P = %.0f", a * 4);

    // begin 2
    // float a = 0;
    // printf("Enter variable a ");
    // scanf("%f", &a);
    // // printf("S = %.0f", a * a);
    // printf("S = %.0f", pow(a,2)); // need -lm

    // begin 3
    // float a = 0, b = 0;
    // printf("Enter variables a and b ");
    // scanf("%f %f", &a, &b);
    // printf("S = %.0f\nP = %.0f", a * b, 2 * (a + b));

    // begin 4
    // float d = 0;
    // const float p = 3.14f;
    // printf("Enter variable d ");
    // scanf("%f", &d);
    // printf("L = %.0f", d * p);

    // begin 5
    // float a = 0;
    // printf("Enter variable a ");
    // scanf("%f", &a);
    // printf("V = %.0f\nS = %.0f", pow(a,3), 6 * pow(a,2));

    // begin 6
    // float a = 0, b = 0, c = 0;
    // printf("Enter variables a, b and c ");
    // scanf("%f %f %f", &a, &b, &c);
    // printf("V = %.0f\nS = %.0f", a*b*c, 2*(a*b + b*c + a*c));

    // begin 7
    // float R = 0;
    // const float p = 3.14f;
    // printf("Enter variable R ");
    // scanf("%f", &R);
    // printf("L = %.0f\nS = %.0f", 2*p*R, p*pow(R,2));

    // begin 8
    // float a = 0, b = 0;
    // printf("Enter variables a and b ");
    // scanf("%f %f", &a, &b);
    // printf("A = %.0f", (a + b)/2);

    //begin 9 
    // float a = 0, b = 0;
    // printf("Enter variables a and b ");
    // scanf("%f %f", &a, &b);
    // printf("P = %.0f", sqrt(a*b));

    // begin 10
    // float a = 0, b = 0;
    // printf("Enter variables a and b ");
    // scanf("%f %f", &a, &b);
    // printf("a + b = %.0f\na - b = %.0f\na * b = %.0f\na / b = %.0f", pow(a,2) + pow(b,2), pow(a,2) - pow(b,2), pow(a,2) * pow(b,2), pow(a,2) / pow(b,2));

    // begin 11
    // float a = 0, b = 0;
    // printf("Enter variables a and b ");
    // scanf("%f %f", &a, &b);
    // printf("a + b = %.0f\na - b = %.0f\na * b = %.0f\na / b = %.0f", fabs(a) + fabs(b), fabs(a) - fabs(b), fabs(a) * fabs(b), fabs(a) / fabs(b));

    // begin 12
    // float a = 0, b = 0, c = 0;
    // printf("Enter variables a and b ");
    // scanf("%f %f", &a, &b);
    // c = sqrt(pow(a,2) + pow(b,2));
    // printf("c = %.0f\nS = %.0f", c, a + b + c);

    // begin 13
    // float R1 = 0, R2 = 0, S1 = 0, S2 = 0;
    // const float p = 3.14f;
    // printf("Enter variables R1 and R2, when R1 > R2 ");
    // scanf("%f %f", &R1, &R2);
    // S1 = p * pow(R1,2);
    // S2 = p * pow(R2,2);
    // printf("S1 = %.0f\nS2 = %.0f\nS3 = %.0f", S1, S2, S1 + S2);

    // begin 14
    // float L = 0, R = 0;
    // const float p = 3.14f;
    // printf("Enter variable L ");
    // scanf("%f", &L);
    // R = L / (2*p);
    // printf("R = %.0f\nS = %.0f", R, p*pow(R,2)); 

    // begin 15
    // float S = 0, R = 0;
    // const float p = 3.14f;
    // printf("Enter variable S ");
    // scanf("%f", &S);
    // R = sqrt(S) / p;
    // printf("D = %.0f\nL = %.0f", 2 * R, 2*p*R);

    // begin 16
    // float x1 = 0, x2 = 0;
    // printf("Enter variables x1 and x2 ");
    // scanf("%f %f", &x1, &x2);
    // printf("The distance between two points is exactly %.0f", fabs(x2-x1));

    // begin 17
    // float A = 0, B = 0, C = 0, AC = 0, BC = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%f %f %f", &A, &B, &C);
    // AC = fabs(A - C);
    // BC = fabs(B - C);
    // printf("AC = %.0f\nBC = %.0f\nSum = %.0f", AC, BC, AC + BC);

    // begin 18
    // float A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%f %f %f", &A, &B, &C);
    // printf("The product of segment lengths is equal to %.0f", (fabs(A - C))*(fabs(B - C)));

    // begin 19
    // float x1 = 0, x2 =0, y1 = 0, y2 = 0;
    // printf("Enter variables x1, x2, y1 and y2 ");
    // scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    // printf("P = %.0f\nS = %.0f", 2*(fabs(y1 - y2) + fabs(x1 - x2)), fabs(y1 - y2) * fabs(x1 - x2));

    // begin 20
    // float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    // printf("Enter variables x1, x2, y1 and y2 ");
    // scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    // printf("The distance between two points is %.0f", sqrt(pow(x2 - x1,2) + pow(y2 - y1,2)));

    // begin 21
    // float x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0, p = 0, a = 0, b = 0, c = 0;
    // printf("Enter variables x1, x2, x3, y1, y2 and y3 ");
    // scanf("%f %f %f %f %f %f", &x1, &x2, &x3, &y1, &y2, &y3);
    // a = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
    // b = sqrt(pow(x2 - x3,2) + pow(y2 - y3,2));
    // c = sqrt(pow(x1 - x3,2) + pow(y1 - y3,2));
    // p = (a + b + c)/2;
    // printf("P = %.0f\nS = %.0f", a + b + c, sqrt(p*(p - a)*(p - b)*(p - c)));

    // begin 22 - with 3 variables
    // float A = 0, B = 0, C = 0;
    // printf("Enter variables A and B ");
    // scanf("%f %f", &A, &B);
    // C = A;
    // A = B;
    // B = C;
    // printf("A = %.0f\nB = %.0f", A, B);
    
    // begin 22 - with 2 variables
    // float A = 0, B = 0;
    // printf("Enter variables A and B ");
    // scanf("%f %f", &A, &B);
    // A = A + B;
    // B = A - B;
    // A = A - B;
    // printf("A = %.0f\nB = %.0f", A, B);
}


