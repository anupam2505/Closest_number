include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int testCases;
    scanf("%d",&testCases);
    int i;
    double a, b, x;
    double power;
    for(i=0;i<testCases;i++){
        scanf("%lf",&a);
        scanf("%lf",&b);
        scanf("%lf",&x);
        power = pow(a,b);
        double rem = fmod(power,x);
        
        if(rem == 0.0) printf("%d\n",(int)(power/x));
        else if(rem>=x/2.0) printf("%d\n",(int)(power+(x-rem)));
        else printf("%d\n",(int)(power-rem));
    }
    return 0;
}
