/*3. Write a C program to pass an array to a function using Call by Reference, update the array values in the
function, print the array elements both in the function and in the calling function.*/

#include <stdio.h>
// Function to update array values and print them
void updateArray(int *arr, int size) {
 printf("Array elements inside the function (before update):\n");
 for (int i = 0; i < size; i++) {
 printf("%d ", arr[i]);
 // Increment each array element by 10
 arr[i] += 10;
 }
 printf("\n");
 printf("Array elements inside the function (after update):\n");
 for (int i = 0; i < size; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
}
int main() {
 int arr[] = {1, 2, 3, 4, 5};
 int size = sizeof(arr) / sizeof(arr[0]);
 printf("Array elements in the calling function (before function call):\n");
 for (int i = 0; i < size; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 // Pass array to the function
 updateArray(arr, size);
 printf("Array elements in the calling function (after function call):\n");
 for (int i = 0; i < size; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 return 0;
}