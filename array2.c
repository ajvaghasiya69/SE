#include <stdio.h>
void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSortAscending(int arr[], int n) 
{
	int i=0;
    for (i; i < n - 1; i++) 
	{
		int j=0;
        for (j; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void bubbleSortDescending(int arr[], int n) 
{
	int i=0;
    for (i; i < n - 1; i++) 
	{
		int j=0;
        for (j; j < n - i - 1; j++) 
		{
            if (arr[j] < arr[j + 1]) 
			{
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n) 
{    int i=0;
    for (i; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Enter the elements of the first array: ");
    int i=0;
    for (i; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array: ");
    int  k=0;
    for (k; k < size; k++) 
	{
        scanf("%d", &arr2[k]);
    }

    int choice;
    printf("Enter 1 to sort in ascending order or 2 to sort in descending order: ");
    scanf("%d", &choice);

    printf("Arrays before sorting:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);


    if (choice == 1) {
        bubbleSortAscending(arr1, size);
        bubbleSortAscending(arr2, size);
    } else if (choice == 2) {
        bubbleSortDescending(arr1, size);
        bubbleSortDescending(arr2, size);
    } else {
        printf("Invalid choice!\n");
        
    }

    printf("Arrays after sorting:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);

    
}

