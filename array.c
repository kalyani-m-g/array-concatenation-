#include <stdio.h>
#include <stdlib.h>

int* mergeArrays(int arr1[], int n1, int arr2[], int n2) {
    int *res = malloc((n1 + n2) * sizeof(int));
    if (res == NULL) return NULL;

    for (int i = 0; i < n1; i++)
        res[i] = arr1[i];
    
    for (int i = 0; i < n2; i++)
        res[n1 + i] = arr2[i];

    return res;
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int *result = mergeArrays(arr1, n1, arr2, n2);
    if (!result) return 1;

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", result[i]);

    free(result);
    return 0;
}
