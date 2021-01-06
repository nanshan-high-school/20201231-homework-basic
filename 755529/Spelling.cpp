#include <iostream>
using namespace std;

int main() {
    string S;
    string T;
    cin >> S >> T;
    int S_size = size(S);
    int T_size = size(T);
    bool dont_use = true;

    for (int word = 0; word < T_size; word++) {
        for (int card = 0; card < S_size; card++) {
            if (T[word] == S[card]) {
                cout << card + 1 << " ";
                S[card] = '0';
                dont_use = false;
                break;
            }
        }
        if (dont_use) {
            cout << "X";
        }
        dont_use = true;
    }
}
