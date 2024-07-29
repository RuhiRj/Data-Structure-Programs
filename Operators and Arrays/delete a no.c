//Write a program to delete a number from a given location in an array
#include<conio.h>
#include<stdio.h>
int main() {
    int size, i, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &pos);

    //if(pos < 0 || pos >= size) {
      //  printf("Invalid index!\n");
        //return 0;
    //}

    // Delete element by shifting elements
    for(i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    // Print the array after deletion
    printf("Array after deletion:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
