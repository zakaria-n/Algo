#include <stdio.h>
#include <math.h>
int main () {
    int i,n;
    scanf("%d", &n);
    int coef[n+1];
    int m,x;
    int c;
    for (i=0; i<n+1; i++){
        scanf("%d",&c);
        coef[i]=c;
    }
    long res=0;
    scanf("%d",&m); //attention à l'ordre des scanf!!!
    scanf("%d",&x);
    for (i=0; i<n+1; i++){
        res+=coef[i]*pow(x,i);
    }
    printf("%ld\r\n",res%m);
    return 0;
}