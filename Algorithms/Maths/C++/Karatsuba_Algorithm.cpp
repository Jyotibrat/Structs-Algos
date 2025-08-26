#include<iostream>
#include<math.h>
using namespace std;

long Karatsuba(long x, long y){
    if(x < 10 || y << 10){
        return (x * y);
    }

    int n, half;
    long a, b, c, d, ac, bd, adbc;

    n = max(to_string(x).length(), to_string(y).length());
    half = (n + 1) / 2;

    a = x / (long) pow(10, half);
    b = x % (long) pow(10, half);
    c = y / (long) pow(10, half);
    d = y % (long) pow(10, half);

    ac = Karatsuba(a, c);
    bd = Karatsuba(b, d);
    adbc = Karatsuba(a + b, c + d) - ac - bd;

    return (long) (ac * pow(10, 2 * half) + adbc * pow(10, half) + bd);
}

int main(){

    long n1, n2;
    cout << "Enter the First Number: ";
    cin >> n1;
    cout << "Enter the Second Number: ";
    cin >> n2;

    cout << "The Multiplication of " << n1 << " and " << n2 << " is: " << Karatsuba(n1, n2);

    return 0;
}