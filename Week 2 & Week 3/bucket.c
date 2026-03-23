//Bucket Sort
#include <stdio.h>
#define MAX 100
int main() {
    int a[100], bucket[MAX] = {0};
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements (0–99):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        bucket[a[i]]++;
    }
    int index = 0;
    for(int i = 0; i < MAX; i++) {
        while(bucket[i] > 0) {
            a[index++] = i;
            bucket[i]--;
        }
    }
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
