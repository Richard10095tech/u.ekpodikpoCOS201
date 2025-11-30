#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function for maximum value
int max_index(int arr[], int size) {
    int index = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[index]) {
            index = i;
        }
    }
    return index;
}

// Function for minimum value
int min_index(int arr[], int size) {
    int index = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] < arr[index]) {
            index = i;
        }
    }
    return index;
}

int main() {
    const int Size = 5;
    int arr1[Size] = {10, 25, 3, 47, 18};
    cout << "Array 1 elements: ";   
    for(int i = 0; i < Size; i++) {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
 
    int arr2[Size];
  
    // finding the max and min using functions
    int max_i = max_index(arr1, Size);
    int min_i = min_index(arr1, Size);
    cout<<"Maximum value: "<<arr1[max_i]<<" at index "<<max_i<<endl;
    cout<<"Minimum value: "<<arr1[min_i]<<" at index "<<min_i<<endl;

    // Random Numbers For Arrays
    srand(time(0));
    cout<<"Random Array 2 elements: ";
    for(int i = 0; i < Size; i++) {
        arr2[i] = rand() % 100; 
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
    //ADDITION / SUM OF ARRAYS
    int sum = 0;
    for(int i = 0; i < Size; i++) {
        sum = sum + arr1[i];
    }
    cout<<"Sum of Array 1: "<<sum<<endl;

    return 0;
}