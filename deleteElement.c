#include<stdio.h>

// Delete element from the array
void deletion(int arr[], int n, int k){
    
    //Shift elemnts to their right
    for (int i = k+1; i<n; i++){
        arr[i - 1] = arr[i];
    }

    //printing the array
    printf("Final array: ");
    for (int j = 0; j<n; j++){
         printf("%d ", arr[j]);
    }
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the index of element to be deleted: ");
    scanf("%d",&k);

    // Check if k is out of index
    if (k>= 0 && k<n){
        deletion(arr, n, k);
    }
    else{
        printf("Index out of range.");
    }
}