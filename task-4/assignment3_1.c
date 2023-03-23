#include <stdio.h>
#include <stdlib.h>

#define ASCENDING 1
#define DESCENDING 2

// function to sort array in ascending order
void sort_ascending(int arr[], int n) {
    int i, j, temp;
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// function to sort array in descending order
void sort_descending(int arr[], int n) {
    int i, j, temp;
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, i, sort_dir;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter sorting direction (1 for ascending, 2 for descending): ");
    scanf("%d", &sort_dir);

    switch(sort_dir) {
        case ASCENDING:
            sort_ascending(arr, n);
            printf("Sorted array in ascending order: ");
            break;
        case DESCENDING:
            sort_descending(arr, n);
            printf("Sorted array in descending order: ");
            break;
        default:
            printf("Invalid sorting direction\n");
            exit(0);
    }

    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
