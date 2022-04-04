#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "введите 2 числа" << endl;
    cin >> a >> b;
    
    if (a > b){
        int c, sum;
        cout << "введите 3 число" << endl;
        cin >> c;
        sum = b + c;
        cout << sum;
    } else if (a==b) {
        cout << "Конец" << endl;
    } else if (a<b) {
        int c, sum;
        cout << "введите 3 число" << endl;
        cin >> c;
        sum = a + b + c;
        cout << sum << " Новый год!" << endl;
    }
    
    return 0;
}
