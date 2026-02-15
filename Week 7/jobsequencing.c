#include <stdio.h>
#include <stdlib.h>

#define MAX 100
struct Job {
    int id;
    int deadline;
    int profit;
};

int compare(const void* a, const void* b) {
    struct Job* jobA = (struct Job*)a;
    struct Job* jobB = (struct Job*)b;
    return jobB->profit - jobA->profit;
}

int main() {
    int n;

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    struct Job jobs[MAX];

    for(int i = 0; i < n; i++) {
        printf("\nJob %d\n", i + 1);
        printf("Enter Deadline: ");
        scanf("%d", &jobs[i].deadline);
        printf("Enter Profit: ");
        scanf("%d", &jobs[i].profit);
        jobs[i].id = i + 1;
    }

    qsort(jobs, n, sizeof(struct Job), compare);

    int maxDeadline = 0;
    for(int i = 0; i < n; i++) {
        if(jobs[i].deadline > maxDeadline)
            maxDeadline = jobs[i].deadline;
    }

    int slot[MAX] = {0};  
    int totalProfit = 0;

    printf("\nSelected Jobs:\n");

    for(int i = 0; i < n; i++) {
        for(int j = jobs[i].deadline - 1; j >= 0; j--) {
            if(slot[j] == 0) {
                slot[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                printf("Job %d (Profit: %d)\n", jobs[i].id, jobs[i].profit);
                break;
            }
        }
    }

    printf("\nTotal Profit = %d\n", totalProfit);

    return 0;
}
