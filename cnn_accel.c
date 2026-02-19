#include <stdint.h>

#define IMG 32

// Top hardware function
void cnn_accel(uint8_t img[IMG][IMG], int *result)
{
    #pragma HLS INTERFACE m_axi port=img offset=slave bundle=gmem
    #pragma HLS INTERFACE s_axilite port=result
    #pragma HLS INTERFACE s_axilite port=return

    int sum = 0;

    // Feature extraction (same as CPU version)
    for(int i=0;i<IMG;i++){
        for(int j=0;j<IMG;j++){
            #pragma HLS PIPELINE
            sum += img[i][j];
        }
    }

    // Decision
    if(sum > 50000)
        *result = 1;
    else
        *result = 0;
}