#include "lib.h"

float maggiore(int dim, float lista[]){
    float m = lista [0];
    for(int i=0; i < dim ; i++){
        if( lista[i] >= m ){
            m = lista[i];
        }
    }
    return m;
}
