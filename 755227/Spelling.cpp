#include <iostream>
using namespace std;

int main() {
    string S;
    string T;
    cin >> S;
    cin >> T;
    int S_size = size(S);
    int T_size = size(T);
    int X = true;

    for (int i = 0; i < T_size; i++) {
        for (int j = 0; j < S_size; j++) {
            if (T[i] == S[j]) {
                cout << j + 1 << " ";
                S[j] = '0';
                X = false;
                break;
            }
        }

        if (X == true) {
            cout << "X ";
        }

        X = true;
    }
}