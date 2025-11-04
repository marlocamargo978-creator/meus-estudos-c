// tabuada usando o while
#include<stdio.h>

int main(){

    int res, x = 1;

    while (x <= 10)
    {
        res = 7 * x ;
        printf("%d\n", res);
        x = x + 1;
    }

    return 0;
}