#include <stdio.h>
#include "myMath.h"
float add(float x, float y){
    return (x + y);
}
float  sub(float x , float y){
    return (x - y);
}

double mul(double x, int y){
    double yn = (double)y;
    return (yn*x);
}

double div(double x, int y){
    double yn = (double)y;
    return (x/yn);
}