#include <stdio.h>

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
#include <stdio.h>

#define MAX_SIZE 100

void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insert(int arr[], int size, int element, int position) {
    if (size >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return size;
    }

    if (position < 0 || position > size) {
        printf("Invalid position for insertion.\n");
        return size;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    return size + 1;
}

int delete(int arr[], int size, int position) {
    if (size <= 0) {
        printf("Array is empty. Cannot delete.\n");
        return size;
    }

    if (position < 0 || position >= size) {
        printf("Invalid position for deletion.\n");
        return size;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return size - 1;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    
    // Inserting elements
    size = insert(arr, size, 10, 0);
    size = insert(arr, size, 20, 1);
    size = insert(arr, size, 30, 2);
    
    printf("After insertion:\n");
    display(arr, size);

    // Deleting element
    size = delete(arr, size, 1);

    printf("After deletion:\n");
    display(arr, size);

    return 0;
}

