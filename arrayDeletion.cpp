#include<iostream>

// Delete element from the array
void deletion(int arr[], int n, int k){
    
    //Shift elemnts to their right
    for (int i = k+1; i<n; i++){
        arr[i - 1] = arr[i];
    }

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
    std::cout<<"Enter the elements:";
    for (int i = 0; i<n; i++){
        std::cin>>arr[i];
    }

    int k;
    std::cout<<"Enter the index of element to be deleted: ";
    std::cin>>k;

    // Check if k is out of index
    if (k>= 0 && k<n){
        deletion(arr, n, k);
    }
    else{
        std::cout<<"Index out of range.";
    }
}