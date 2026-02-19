#include "cnn.h"

int cnn_detect(int img[32][32]) {

    int sum = 0;

    // simple feature extraction
    for(int i=0;i<32;i++){
        for(int j=0;j<32;j++){
            sum += img[i][j];
        }
    }

    // threshold decision
    if(sum > 50000)
        return 1;   // object detected
    else
        return 0;   // no object
}