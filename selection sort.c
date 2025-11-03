#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int a[], int n){
    int i, j, min;
    for(i=0; i<n-1; i++){
        min = i;
        for(j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        if(min != i){
            swap(&a[i], &a[min]);
        }
    }
}

void display(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int a[] = {10,3,89,65,9,90,1,45};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Original array: \n");
    display(a, n);
    selectionSort(a, n);
    printf("Sorted array: \n");
    display(a, n);
    return 0;
}
