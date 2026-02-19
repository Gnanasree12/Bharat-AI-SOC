#include <stdio.h>
#include <stdint.h>

#define IMG 32

extern void cnn_accel(uint8_t img[IMG][IMG], int *result);

int main()
{
    uint8_t img[IMG][IMG];
    int result;

    // simple test image
    for(int i=0;i<IMG;i++)
        for(int j=0;j<IMG;j++)
            img[i][j] = 150;

    cnn_accel(img, &result);

    printf("Result = %d\n", result);
    return 0;
}