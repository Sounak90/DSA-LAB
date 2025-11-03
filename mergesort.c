#include <stdio.h>

void merge(int a[], int left, int mid, int right){
    int i,j,k;
    int n1 = mid-left+1;
    int n2 = right-mid;
    int L[n1],R[n2];

    for(i=0;i<n1;i++)
        L[i]=a[left+i];
    for(j=0;j<n2;j++)
        R[j]=a[mid+1+j];

    i=0;
    j=0;
    k=left;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=R[j];
        j++;
        k++;
    }
}


void mergeSort(int a[], int left, int right){
    if(left<right){
        int mid = (left+right)/2;
        mergeSort(a,left,mid);
        mergeSort(a,mid+1,right);
        merge(a,left,mid,right);
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
    mergeSort(a, 0, n-1);
    printf("\nArray after sorting:\t");
    Display(a, n);

    return 0;
}
