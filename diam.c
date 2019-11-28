#include <stdio.h>
void swap(int *a, int *b);
void quicksort(int arr[], int l, int r);

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int arr[], int l, int r){
    if (l >= r)
    {
        return;
    }
    int pivot = arr[r];
    int cnt = l;
    for (int i = l; i <= r; i++){
        if (arr[i] <= pivot){
            swap(&arr[cnt], &arr[i]);
            cnt++;
        }
    }
    quicksort(arr, l, cnt-2);
    quicksort(arr, cnt, r);
}

int main (){
    int i,n,x;
    scanf("%d",&n);
    int tab[n];
    for (i=0; i<n; i++){
        scanf("%d",&x);
        tab[i]=x;
    }
    quicksort(tab, 0, n-1);
    /*for (i=0; i<n; i++){
        printf("%d ",tab[i]);
    }*/
    printf("%d\n\r",tab[n-2]-tab[1]);
    return 0;
}