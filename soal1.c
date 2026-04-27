#include <stdio.h>
#include <stdlib.h>

typedef struct Data {
    int *angin;
    int count;
    float median;
} Data;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    Data data;
    data.count = 0;
    int size = 8;
    data.angin = malloc(size * sizeof(int));
    if (data.angin == NULL) return 1;

    int x;
    while (scanf("%d", &x) == 1) {
        if (x == -1) break;
        if (data.count >= size) {
            size *= 2;
            int *tmp = realloc(data.angin, size * sizeof(int));
            if (tmp == NULL) break;
            data.angin = tmp;
        }
        data.angin[data.count++] = x;
    }

    printf("COUNT %d ", data.count);

    bubbleSort(data.angin, data.count);
    printf("SORTED ");
    for (int i = 0; i < data.count; i++) {
        printf("%d ", data.angin[i]);
    }

    if (data.count % 2 == 0) {
        data.median = (data.angin[data.count/2] + data.angin[data.count/2 - 1]) / 2;
    } else {
        data.median = data.angin[data.count/2];
    }
    printf("MEDIAN %.2f\n", data.median);
    free(data.angin);
    return 0;
}
