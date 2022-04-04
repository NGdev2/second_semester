#include <iostream>
#include <math.h>


int main(int argc, const char * argv[]) {
    using std::cout;
    using std::cin;
    
    int a, b, p, area;
    double c;
    cout << "введите длину первого катета:\n";
    cin >> a;
    cout << "eвведите длину второго катета:\n";
    cin >> b;
    c=sqrt(a*a+b*b);
    cout << "Гипотенуза равна " << c << "\n";
    p = (a+b+c)/2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "Площадь равна "<< area << "\n";
}
