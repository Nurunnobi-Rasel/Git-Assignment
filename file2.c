#include <stdio.h>
#include <math.h>
int main() {
    int T;
    scanf("%d",&T);

    while(T--){
        double a,b,c,s,r;
        double area;
        scanf("%lf %lf %lf",&a,&b,&c);

        s = (a+b+c)/2;
        r = 0;
        r = s*(s-a)*(s-b)*(s-c);
        area = sqrt(r);
        printf("Area = %0.3lf\n",area);

    }
    return 0;
}