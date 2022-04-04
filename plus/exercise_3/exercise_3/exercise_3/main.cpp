#include <iostream>
#include <math.h>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    float a, b, average, geometric_mean;
    cout << "Введите 2 числа" << endl ;
    cin >> a >> b;
    average = (a+b)/2;
    geometric_mean = sqrt(a*b);
    cout << "арифметическое значение равно: "<< average << " , геометрическое: " << geometric_mean << "\n";
}
