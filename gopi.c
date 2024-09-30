//to find maximum element in an array
#include <stdio.h>

int main() {
    int n, i, max;
    
    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize max with the first element
    max = arr[0];
    
    // Traverse the array to find the largest element
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Output the largest element
    printf("The largest element is: %d\n", max);
    
    return 0;
}

