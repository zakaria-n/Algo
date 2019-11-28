#include <stdio.h>
int main () {
    int n,i;
    float x;
    float sum=0;
    int cp=0;
    scanf("%d", &n);
    float temp[n];
    for (i=0; i<n; i++){
        scanf("%f",&x);
        temp[i]=x;
    }
    for (i=0; i<n; i++){
        if (temp[i]<=0){
            sum+=temp[i];
            cp++; //keep track of negative values for mean
        }
    }
    if (sum==0){
        printf("-\r\n");
    }else{
        printf("%f\r\n",sum/cp); //only divide by number of negative values
    }
    return 0;
}