#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int nsize = 20;
    float array[nsize];
    int in;
    int min_ind, add;
    
    for (int i = 0; i < nsize; i++){
        printf ("Введите элемент массива с индексом %d\n", i);
        cin >> in;
        array[i] = in;
    };
    
    for (int i = 0; i < nsize - 1; i++){
        min_ind = i;
        
        for (int j = i+1; j<nsize; j++){
            if (array[min_ind] > array[j]){
                min_ind = j;
            }
        }
        
        add = array[i];
        array[i] = array[min_ind];
        array[min_ind] = add;
        add= -1;
        
    };
    
    for (int i = 0; i < nsize; i++){
        cout << (array[i]) << " ";
    }
    
    return 0;
}
