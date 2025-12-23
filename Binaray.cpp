#include <stdio.h>

int main() {
    int arr[100], n, key;
    int low, high, mid;
    int found = 0;
    int i,j,temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0;i < n;i++){
    	for(j = 0;j < n-i-1;j++){
    		if (arr[j] > arr[j + 1]) {
    			temp = arr[j];
    			arr[j] = arr[j+1];
    			arr[j+1] = temp;
    		}
		}
	}
    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at position %d\n", key, mid + 1);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
