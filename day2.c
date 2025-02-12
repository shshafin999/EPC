#include<stdio.h>

int main () {
    
    // find the maximum and minimum element of 3 unique elements
    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);
    if (a > b && a > c) {
        printf("%d is maximum \n", a);
    }
    else if (b > a && b > c) {
        printf("%d is maximum \n", b);
    }
    else if (c > b && c > a) {
        printf("%d is maximum \n", c);
    }

    if (a < b && a < c) {
        printf("%d is minimum \n", a);
    }
    else if (b < a && b < c) {
        printf("%d is minimum \n", b);
    }
    else if (c < b && c < a) {
        printf("%d is minimum \n", c);
    }

}
