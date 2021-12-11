#include <iostream>
#include "lib.h"
using namespace std;

int main() {

    int d;
    cin >> d;
    float a[d];

    for(int i=0; i<d ; i++){
        cin >> a[i];
    }

    cout << maggiore(d,a) << endl;

    return 0;
}
