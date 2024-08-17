#include <stdio.h>
#include <limits.h>

void findMaxSubarrays(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int max = INT_MIN;
            for (int k = i; k <= j; k++)
                if (arr[k] > max)
                    max = arr[k];
            printf("%d ", max);
        }
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int arr[N];
        for (int i = 0; i < N; i++)
            scanf("%d", &arr[i]);
        
        findMaxSubarrays(arr, N);
    }
    
    return 0;
}