// compare and writen alogratighms in the steps and compare two array and then merge them using  and the array will be user defined 

// Lecture 4 
// step 1: Define two arrays of the same size and initialize them with values.
// step 2: Create a function that takes two arrays and their sizes as parameters.
// step 3: Inside the function, create a new array to hold the merged values.
// step 4: Use two pointers to traverse both arrays and compare their elements.
// step 5: If the element in the first array is smaller, add it to the merged array and move the pointer of the first array forward.
// step 6: If the element in the second array is smaller, add it to the merged
//     array and move the pointer of the second array forward.
#include <iostream>
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and compare their elements
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

int main(){
    int size1, size2;

    // Get sizes of the arrays from the user
    std::cout << "Enter size of first array: ";
    std::cin >> size1;
    int arr1[size1];
    std::cout << "Enter elements of first array: ";
    for (int i = 0; i < size1; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter size of second array: ";
    std::cin >> size2;
    int arr2[size2];
    std::cout << "Enter elements of second array: ";
    for (int i = 0; i < size2; i++) {
        std::cin >> arr2[i];
    }

    int merged[size1 + size2];
    mergeArrays(arr1, size1, arr2, size2, merged);

    // Display merged array
    std::cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << merged[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}