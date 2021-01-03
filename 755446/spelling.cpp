#include <iostream>
using namespace std;

int main() {
    char S[100] = {}, T[30] = {};
    int check[30];
    
    cin >> S;
    cin >> T;

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 30; j++) {
            if (S[i] == T[j]) {
                check[j] = i + 1;
            }
        }
    }

    for (int i = 0; check[i] < 30; i++) {
        cout << check[i] << " ";
    }    
    
    cout << "\n";
}
