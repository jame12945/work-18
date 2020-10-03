#include<iostream>
int gcd(int a, int b);
int findvalue();
int a;
int b;
int j;
int limit;
int lcm = 1;
int gcd(int a, int b)//greatest common divisor
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int findvalue() {
    scanf_s("%d", &limit);//10
    
    for (int i = 1; i <= limit; i++) {
        for (int j = 1; j <= limit; j++) {
            lcm = (lcm * i) / gcd(lcm, i);
            
        }
        printf("%d\n", lcm);
    }
    printf("The last answer is %d\n", lcm); // prints 2520
    return 0;
}


int main() {
    findvalue();
    return 0;
}