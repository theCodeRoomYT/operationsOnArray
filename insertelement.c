#include<stdio.h>

void insert(int arr[], int n, int x, int k){
    
    //Shift elemnts to their right
    for (int i = n-2; i>=k; i--){
        arr[i+1] = arr[i];
    }

    arr[k] = x; // insert element
    
    //printing the array
    for (int j = 0; j<n; j++){
        printf("%d ", arr[j]);
    }
}

void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the n - 1 elements:");
    for (int i = 0; i<n-1; i++){
        scanf("%d",&arr[i]);
    }

    int x,k;
    printf("Enter the element and its index: ");
    scanf("%d %d", &x, &k);

    // Check if k is out of index
    if (k>= 0 && k<n){
        insert(arr, n, x, k);
    }
    else{
        printf("Index out of range.");
    }
}