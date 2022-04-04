#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    int matrix[n][m];
    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < m+1; j++){
            int a;
            cin >> a;
            matrix[i][j] = a;
            cout << "matrix [" << i << "] [" << j << "] = " << a << endl;
        }
    }
    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < m+1; j++){
            cout << (float(matrix[i][j])/2) << endl;
        }
    }
    
    return 0;
}
