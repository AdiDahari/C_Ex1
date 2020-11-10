#include <stdio.h>
#include "myMath.h"
#define EXP 2.718281828
double Exponent(int x){
    //counter for the number of multplies needed
    int cnt = 0;
    //ans initialized by 1
    double ans = 1.0;
    //multiply ans by exp untill counter reach x value
    while (cnt < x){
        ans = (ans * EXP);
        cnt++;
    }
    return ans;
}

double Power(double x , int y){
    //counter for the number of multplies needed
    int cnt = 0;
    //ans initialized by 1
    double ans = 1.0;
    while(cnt < y){
        ans = (ans * x);
        cnt++;
    }
    return ans;
}