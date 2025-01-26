#include<stdio.h>
int main () {



    // integer type variable declaration
    int a = 5, b = 6, c = 7; 



    // float type variable declaration
    float d = 5.1, e = 6.1, f = 7.2;

    int sum_Of_Int = d + e + f;
    printf("%d \n", sum_Of_Int);

    float sum_Of_Float = d + e + f;
    printf("%f \n", sum_Of_Float);

    // taking input
    int num1;
    float num2;
    scanf("%d", &num1);
    scanf("%f", &num2);
    printf("%d\n", num1);
    printf("%f\n", num2);

    // finding remainder using %
    int x = 18, y = 4;
    int rem = x % y;
    printf("%d \n", rem);

    // type cast
    float q = 5.6;
    printf("%d\n", (int)q);

    // auto type cast
    int z1 = 5;
    printf("%f\n", z1 * 1.0);





    // Try yourself
    // why "float" data type has some precision issues?
    // like this
    float t = 67.456;
    printf("%f \n", t);




    // data type                               format specifier
    // ---------------------------------------------------------                             
    // int (stores upto 2*10^9)                  %d
    // long long int (stores upto 10^18)         %lld
    // char (stores single character)            %c
    // float                                     %f
    // double                                    %lf
    // long double                               %LF

}
