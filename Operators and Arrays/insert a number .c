//Write a program to insert a number at a given location in an array.
#include<stdio.h>
#include<conio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int m, t;
    printf("Enter the element to be inserted: ");
    scanf("%d", &m);
    printf("Enter the index where you want to insert the element: ");
    scanf("%d", &t);

    // Shift elements to make space for insertion
    for(i = n - 1; i >= t; i--) {
        arr[i + 1] = arr[i];
    }
    arr[t] = m;
    n++; // Increase the size of the array after insertion

    // Print the array after insertion
    printf("The array after insertion of %d at index %d is:\n", m, t);
    for(i = 0; i < n; i++) {
        printf("arr[%d]=%d\n", i, arr[i]);
    }

    return 0;
}
