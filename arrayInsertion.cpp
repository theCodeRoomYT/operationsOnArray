#include<iostream>

// Insert element in the array
void insert(int arr[], int n, int x, int k){
    
    //Shift elemnts to their right
    for (int i = n-2; i>=k; i--){
        arr[i+1] = arr[i];
    }

    arr[k] = x; // insert element
    
    //printing the array
    std::cout<<"Final array: ";
    for (int j = 0; j<n; j++){
        std::cout<<arr[j]<<" ";
    }
}

int main(){
    int n;
    std::cout<<"Enter the size of array: ";
    std::cin>>n;

    int arr[n];
    std::cout<<"Enter the n - 1 elements:";
    for (int i = 0; i<n-1; i++){
        std::cin>>arr[i];
    }

    int x, k;
    std::cout<<"Enter the element and its index: ";
    std::cin>>x>>k;

    // Check if k is out of index
    if (k>= 0 && k<n){
        insert(arr, n, x, k);
    }
    else{
        std::cout<<"Index out of range.";
    }
}