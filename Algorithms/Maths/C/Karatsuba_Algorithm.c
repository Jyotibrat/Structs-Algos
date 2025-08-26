#include<stdio.h>
#include<math.h>
#define MAX(i, j) (((i) > (j)) ? (i) : (j))

long Karatsuba(long x, long y){
    if(x < 10 || y < 10){
        return (x * y);
    }

    int n, half, count_x = 0, count_y = 0, x_copy = x, y_copy = y;
    long a, b, c, d, ac, bd, adbc;

    while (x_copy != 0){
        x_copy /= 10;
        ++count_x;
    }

    while (y_copy != 0){
        y_copy /= 10;
        ++count_y;
    }

    n = MAX(count_x, count_y);
    half = (n + 1) / 2;

    a = x / (long) pow(10.0, (double)half);
    b = x % (long) pow(10.0, (double)half);
    c = y / (long) pow(10.0, (double)half);
    d = y % (long) pow(10.0, (double)half);

    ac = Karatsuba(a, c);
    bd = Karatsuba(b, d);
    adbc = Karatsuba(a + b, c + d) - ac - bd;

    return (long) (ac * pow(10.0, (double) (2 * half)) + adbc * pow(10.0, (double)half) + bd);
}

int main(){

    long n1, n2;
    printf("Enter the First Number: ");
    scanf("%ld", &n1);
    printf("Enter the Second Number: ");
    scanf("%ld", &n2);

    printf("The Multiplication of %ld and %ld is: %ld", n1, n2, Karatsuba(n1, n2));

    return 0;
}