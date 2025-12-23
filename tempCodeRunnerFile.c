#include<stdio.h>
#include<conio.h>


int fact(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n-1);
    
}
int main() {
    int n;

    printf("Enter the num n: ");
    scanf("%d", &n);

    int result = fact(n);
    printf("Factorial of %d is %d\n", n, result);

    
}