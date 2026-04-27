#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N;
typedef struct Data {
    int *angin;
    int count;
    int sorted;
    int median;
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


int count = -1;
int sorted = 0;
int median;
int temp=0;

int main () {
Data data;
    for (int i=0;i<100;i++){
        while (data.angin[i] != -1){
            data.angin = (int *)malloc(N * sizeof(int));
            scanf("%d", &data.angin[i]);
            printf("INPUT %d\n", data.angin[i]);
            count ++;
        }
        break;
    }
    printf("COUNT %d", count);

    

    bubbleSort(data.angin, count);
    printf("SORTED ");
    for (int i=0;i<count;i++){
        printf("%d ", data.angin[i]);
    }

    if (count % 2 == 0){
        median = (*(data.angin + count/2) + *(data.angin + count/2 - 1)) / 2;
    } else {
        median = *(data.angin + count/2);
    }
    printf("MEDIAN %d\n", median);

}
