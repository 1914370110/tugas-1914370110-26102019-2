#include <stdio.h>
#include <math.h>
int main(void)
{
    float a,b,c,D;
    double x1, x2;
    printf("Masukkan Nilai a = ");
    scanf("%f", &a);
    if(a>0){
    printf("Masukkan Nilai b = ");
    scanf("%f", &b);
    printf("Masukkan Nilai c = ");
    scanf("%f", &c);
    D = (b * b) - (4 * a * c);
    }if(D>=0){
    x1 = (((-b) + sqrt(D)) / (2*a));
    x2 = (((-b) - sqrt(D)) / (2*a));
    printf("Nilai x1 = %.1f\n",x1);
    printf("Nilai x2 = %.1f\n",x2);
    }else{
    printf("Akar Imajiner");
    }
    return 0;
}
