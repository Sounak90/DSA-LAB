#include <stdio.h>

void BubbleSort(int a[], int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void Display(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int main(){
    int a[100],n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nArray before sorting:\t");
    Display(a, n);
    BubbleSort(a, n);
    printf("\nArray after sorting:\t");
    Display(a, n);

    return 0;
}
