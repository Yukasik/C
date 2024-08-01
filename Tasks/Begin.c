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

    // begin 22 - with 3 variables (swap the contents of variables)
    // float A = 0, B = 0, C = 0;
    // printf("Enter variables A and B ");
    // scanf("%f %f", &A, &B);
    // C = A;
    // A = B;
    // B = C;
    // printf("A = %.0f\nB = %.0f", A, B);
    
    // begin 22 - with 2 variables (swap the contents of variables)
    // float A = 0, B = 0;
    // printf("Enter variables A and B ");
    // scanf("%f %f", &A, &B);
    // A = A + B;
    // B = A - B;
    // A = A - B;
    // printf("A = %.0f\nB = %.0f", A, B);

    // begin 23 (swap the contents of variables A - B, B - C, C - A)
    // float A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%f %f %f", &A, &B, &C);
    // A = A + B + C;
    // C = A - C - B;
    // B = A - C - B;
    // A = A - C - B;
    // printf("A = %.0f\nB = %.0f\nC = %.0f", A, B, C);

    // begin 24 (swap the contents of variables A - C, C - B, B - A)
    // float A = 0, B = 0, C = 0;
    // printf("Enter variables A, B and C ");
    // scanf("%f %f %f", &A, &B, &C);
    // A = A + B + C;
    // B = A - C - B;
    // C = A - C - B;
    // A = A - B - C;
    // printf("A = %.0f\nB = %.0f\nC = %.0f", A, B, C);

    // begin 25
    // float x = 0;
    // printf("Enter variable x ");
    // scanf("%f", &x);
    // printf("y = %.0f", 3*pow(x,6) - 6*pow(x,2) - 7);

    // begin 26
    // float x = 0;
    // printf("Enter variable x ");
    // scanf("%f", &x);
    // printf("y = %.0f", 4*pow(x - 3,6) - 7*pow(x-3,3) + 2);

    // begin 27
    // float A = 0, degree = 0;
    // printf("Enter variable A ");
    // scanf("%f", &A);
    // degree = A*A;
    // printf("A^2 = %.0f\n", degree);
    // degree = degree*degree;
    // printf("A^4 = %.0f\n", degree);
    // degree = degree*degree;
    // printf("A^8 = %.0f", degree);

    // begin 28
    // float A = 0, degree1 = 0, degree2 = 0;
    // printf("Enter variable A ");
    // scanf("%f", &A);
    // degree1 = A*A;
    // printf("A^2 = %.0f\n", degree1);
    // degree2 = degree1*A;
    // printf("A^3 = %.0f\n", degree2);
    // degree1 = degree2*degree1;
    // printf("A^5 = %.0f\n", degree1);
    // degree2 = degree1*degree1;
    // printf("A^10 = %.0f\n", degree2);
    // degree1 = degree1*degree2;
    // printf("A^15 = %.0f", degree1);

    // begin 29
    // float a = 0;
    // const float p = 3.14f;
    // printf("Enter variable a, when 0 < a < 360 ");
    // scanf("%f", &a);
    // printf("Rad = %.0f", (a*p)/180);

    // begin 30
    // float a = 0;
    // const float p = 3.14f;
    // printf("Enter variable a, when 0 < a < 2*p ");
    // scanf("%f", &a);
    // printf("Rad = %.0f", (a*180)/p);

    // begin 31
    // float Tf = 0;
    // printf("Enter variable Tf ");
    // scanf("%f", &Tf);
    // printf("Tc = %.0f", (Tf - 32)*5 / 9);

    // begin 32
    // float Tc = 0;
    // printf("Enter variable Tc ");
    // scanf("%f", &Tc);
    // printf("Tf = %.0f", Tc * 9 / 5 + 32);

    // begin 33
    // float X = 0, A = 0, Y = 0, cost_one_kg = 0;
    // printf("Enter variables X kg, A rub and Y kg ");
    // scanf("%f %f %f", &X, &A, &Y);
    // cost_one_kg = A / X;
    // printf("1 kg will cost %.0f rub\n%.0f kg will cost %.0f rub", cost_one_kg, Y, Y * cost_one_kg);

    // begin 34
    // float X = 0, A = 0, Y = 0, B = 0, cost_one_kg_chocolates = 0, cost_one_kg_toffees = 0;
    // printf("Enter variables of chocolates X kg, A rub and toffees Y kg, B rub ");
    // scanf("%f %f %f %f", &X, &A, &Y, &B);
    // cost_one_kg_chocolates = A / X;
    // cost_one_kg_toffees = B / Y;
    // printf("1 kg of chocolates will cost %.0f rub\n1 kg of toffees will cost %.0f rub\nChocolates are more expensive than toffees %.0f", cost_one_kg_chocolates, cost_one_kg_toffees, cost_one_kg_chocolates / cost_one_kg_toffees); 

    // begin 35
    // float V = 0, U = 0, T1 = 0, T2 = 0;
    // printf("Enter variables V km/h, U km/h and T1 h, T2 h ");
    // scanf("%f %f %f %f", &V, &U, &T1, &T2);
    // printf("S boats = %.0f", T1 * V + (V - U) * T2);

    // begin 36
    // float V1 = 0, V2 = 0, S = 0, T = 0;
    // printf("Enter variables V1 km/h, V2 km/h, S km and T h ");
    // scanf("%f %f %f %f", &V1, &V2, &S, &T);
    // printf("S = %.0f", S + V1 * T + V2 * T);

    // begin 37
    // float V1 = 0, V2 = 0, S = 0, T = 0;
    // printf("Enter variables V1 km/h, V2 km/h, S km and T h ");
    // scanf("%f %f %f %f", &V1, &V2, &S, &T);
    // printf("S = %.0f", fabs(S - (V1 * T + V2 * T)));

    // begin 38
    // float A = 0, B = 0;
    // printf("Enter variables A and B, when A != 0 ");
    // scanf("%f %f", &A, &B);
    // printf("x = %.0f", -1 * B / A);

    // begin 39
    // float A = 0, B = 0, C = 0, D = 0, x1 = 0, x2 = 0;
    // printf("Enter variables A, B and C, when A != 0 ");
    // scanf("%f %f %f", &A, &B, &C);
    // D = pow(B,2) - 4 * A * C;
    // x1 = ((-1)*B + sqrt(D)) / (2 * A);
    // x2 = ((-1)*B - sqrt(D)) / (2 * A);
    // if (x1 > x2) {
    //     printf("x2 = %.0f\nx1 = %.0f", x2, x1);
    // }
    // else {
    //     printf("x1 = %.0f\nx2 = %.0f", x1, x2);
    // }

    // begin 40
    // float A1 = 0, B1 = 0, C1 = 0, A2 = 0, B2 = 0, C2 = 0, D = 0;
    // printf("Enter variables A1, B1, C1, A2, B2, C2 ");
    // scanf("%f %f %f %f %f %f", &A1, &B1, &C1, &A2, &B2, &C2);
    // D = A1 * B2 - A2 * B1;
    // printf("x = %.0f\ny = %.0f", (C1 * B2 - C2 * B1) / D, (A1 * C2 - A2 * C1) / D);
}


