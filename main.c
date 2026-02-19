#include <stdio.h>
#include <time.h>
#include "cnn.h"
#include "image.h"

#define ITERATIONS 50000   // repeat many times

int main() {

    clock_t start, end;
    double cpu_time;
    int result = 0;

    start = clock();

    for(int i = 0; i < ITERATIONS; i++)
        result = cnn_detect(image);

    end = clock();

    cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    if(result)
        printf("Object Detected!\n");
    else
        printf("No Object Found\n");

    printf("CPU Execution Time: %f seconds\n", cpu_time);

    return 0;
}