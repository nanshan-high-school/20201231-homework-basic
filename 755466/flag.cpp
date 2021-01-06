
#include <iostream>
using namespace std;

int main() {
    int R, C, fail = 0, num;
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
            num = S[i][j];
            if (num != S[i - 1][j - 1] && 
                num != S[i - 1][j] && 
                num != S[i][j - 1] && 
                num != S[i + 1][j] && 
                num != S[i][j + 1] &&
                num != S[i - 1][j + 1] && 
                num != S[i + 1][j - 1] &&
                num != S[i + 1][j + 1]) {
                fail += 1;
                }
            }
        }

    cout << fail;
}
