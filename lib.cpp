#include "lib.h"

float maggiore(int dim, float vettore[]){
    float max = vettore [0];
    for(int i=0; i < dim ; i++){
        if( vettore[i] >= max){
            max = vettore[i];
        }
    }
    return max;
}
