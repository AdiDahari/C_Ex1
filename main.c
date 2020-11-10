#include <stdio.h>
#include "myMath.h"
int main(){
    printf("Please insert a real number for x: ");
    double x;
    
    if(scanf("%lf", &x) != 1){
        printf("Error: Not a valid real number!\n");
        return 1;
    }

    printf("The value %0.4lf initialized successfully\n", x);
    //1st function: f(x)=e^x+𝑥^3−2
    printf("The value of f(x)=e^x+𝑥^3−2 for the x inserted is: ");
    double exp = Exponent((int)x);
    double pow = Power(x, 3);
    double ans = add(exp, pow);
    ans = sub(ans, 2);
    printf("%0.4f\n\n", ans);

    //2nd function: f(x)=3x+2x^2
    printf("The value of f(x)=3x+2x^2 for the x inserted is: ");
    pow = Power(x, 2);
    pow = mul(pow, 2);
    ans = mul(x, 3);
    ans = add(ans, pow);
    printf("%0.4f\n\n", ans);

    //3rd function: f(x)=(4x^3)/5-2x
    printf("The value of f(x)=(4x^3)/5-2x for the x inserted is: ");
    pow = Power(x, 3);
    pow = mul(pow, 4);
    pow = div(pow, 5);
    double rest = mul(x, 2);
    ans = sub(pow, rest);
    printf("%0.4f\n\n", ans);

    return 0;
}