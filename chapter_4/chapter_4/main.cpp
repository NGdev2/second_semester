#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    cout << "Введите 10 чисел:" << endl;
    int *arr =  new int[10];
    for (int i = 0; i<10; i++) {
        cin >> arr[i];
        if (i%2 != 0 and arr[i] > 5) {
            sum+=arr[i];
        }
    }
    cout <<"Сумма четных чисел больших чем 5 в массиве равна: " << sum << endl;
    return 0;
}
