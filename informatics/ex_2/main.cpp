#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main() {
    int a = 1;
    int b = 4;
    float h = 0.15;

    for (float x = a; x<=b; x+=h) {
        float y = cos(x)/pow(x,2)+7*(pow(sin(x),2))-5;
        cout << y << "\n";
    };
    return 0;
}
