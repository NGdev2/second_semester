#include <iostream>

using namespace std;

int main() {
    int len, meter = 0;
    cout << "Введите длинну строк" << endl;
    cin >> len;
    int list_1[len];
    cout << "Введите числа первой строки" << endl;
    for (int i=0; i < len; i++){
        cin >> list_1[i];
    }
    int list_2[len];
    cout << "Введите числа второй строки" << endl;
    for (int i=0; i < len; i++){
        cin >> list_2[i];
    }
    
    int mismach_numb[len];
    
    for (int i=0; i<len; i++){
        if (list_1[i] != list_2[i]){
            mismach_numb[meter] = i;
            meter++;
        }
    }
    cout << "Несовпадающие индексы строк:" << endl;
    for (int i=0; i < meter; i++) {
        cout << mismach_numb[i];
    }
    cout << endl << "Длина выходного массива: " << meter <<endl;
    
    return 0;
}
