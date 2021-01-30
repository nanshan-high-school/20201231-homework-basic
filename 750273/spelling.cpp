#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    int s, t;
    s = S.length();
    t = T.length();
    
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < s; j++) {
            if (S[j] == T[i]) {
               cout << j + 1 << " ";
               S[j] = 33;
               break;
            }
            if (j == s - 1) {
               cout << "X" << " "; 
            }
        } 
    } 
}
