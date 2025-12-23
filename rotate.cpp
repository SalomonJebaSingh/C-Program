#include <stdio.h>

int main() {
    int n, k;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of left rotations (k): ");
    scanf("%d", &k);

    
    k = k % n;

    
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + k) % n];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after left rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
