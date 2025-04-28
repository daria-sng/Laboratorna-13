#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculation (int n1, int n);

int main(){
    system ("chcp 65001");
    int n;
    printf("Введіть n (кількість членів): ");
    scanf("%d", &n);

    double result = calculation (1,n);
    printf("Результат: %.5lf", result);
    return 0;
}

double calculation (int n1, int n){
    if(n1>n){
        return 0;
    }
    else{
        return sqrt(2*n1-1 + calculation(n1+1, n));
    }
}