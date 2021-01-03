#include <iostream>
using namespace std;

int main() {
    int R, C, check = 0;
    cin >> R >> C;
    int S[R + 1][C + 1];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            S[i][j] = 0;
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> S[i][j];
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (S[i][j] != S[i - 1][j - 1] && 
                 S[i][j] != S[i - 1][j + 1] && 
                 S[i][j] != S[i + 1][j - 1] && 
                 S[i][j] != S[i + 1][j + 1] && 
                 S[i][j] != S[i][j + 1] && 
                 S[i][j] != S[i][j - 1] && 
                 S[i][j] != S[i + 1][j] && 
                 S[i][j] != S[i - 1][j]) {

                check++;
            }
        }
    }   
    cout << check;
}
