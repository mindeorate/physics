#include <iostream>
#include <stdio.h>

// s:변위(구하고자하는 값), v0:처음속도, v:나중속도, a:가속도, t:시간

int main(void) {
    //initialize
    int v0 = 0;
    int v = 0;
    int a = 0;
    int t = 0;

    //input value
    printf_s("input v0's (int) value : ");
    scanf_s("%d",&v0);//<-save
    printf_s("input a's (int) value : ");
    scanf_s("%d", &a);
    printf_s("input t's (int) value : ");
    scanf_s("%d", &t);
    //calculate
    int s = v0 * t + a * (t*t) /2;
    printf("(remove decimal point) s = %d", s);

    //visualize --> perhaps later..

}
