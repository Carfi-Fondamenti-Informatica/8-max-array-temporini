#include <iostream>
#include "lib.h"
using namespace std;


int main() {
    int num;
    cin>> num;
    float array[num];
    for(int i=0; i <num; i++){
        cin>> array[i];

    }

    cout << maxarray(array,num) <<endl;
    return 0;
}
