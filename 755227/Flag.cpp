#include <iostream>
using namespace std;
int main() {
    int R, C;
    cin >> R >> C;

    int F[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> F[i][j];
        }
    }

    int out = 0;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (i == 0) {
                if (j == 0) {
                    if (F[i][j] != F[i][j + 1] && F[i][j] != F[i + 1][j] && F[i][j] != F[i + 1][j + 1]) {
                        out++;
                    }
                } else if (j == C - 1) {
                    if (F[i][j] != F[i][j - 1] && F[i][j] != F[i + 1][j - 1] && F[i][j] != F[i + 1][j]) {
                        out++;
                    }
                } else {
                    if (F[i][j] != F[i][j - 1] && F[i][j] != F[i][j + 1] && F[i][j] != F[i + 1][j - 1] && F[i][j] != F[i + 1][j] && F[i][j] != F[i + 1][j + 1]) {
                        out++;
                    }
                }
            } else if (i == R - 1) {
                if (j == 0) {
                    if (F[i][j] != F[i - 1][j] && F[i][j] != F[i - 1][j + 1] && F[i][j] != F[i][j + 1]) {
                        out++;
                    }
                } else if (j == C - 1) {
                    if (F[i][j] != F[i - 1][j - 1] && F[i][j] != F[i - 1][j] && F[i][j] != F[i][j - 1]) {
                        out++;
                    }
                } else {
                    if (F[i][j] != F[i][j - 1] && F[i][j] != F[i][j + 1] && F[i][j] != F[i - 1][j - 1] && F[i][j] != F[i - 1][j] && F[i][j] != F[i - 1][j + 1]) {
                        out++;
                    }
                }
            } else if (j == 0 && (i != 0 && i != R - 1)) {
                if (F[i][j] != F[i - 1][j] && F[i][j] != F[i - 1][j + 1] && F[i][j] != F[i][j + 1] && F[i][j] != F[i + 1][j] && F[i][j] != F[i + 1][j + 1]) {
                    out++;
                }
            } else if (j == C - 1 && (i != 0 && i != R - 1)) {
                if (F[i][j] != F[i - 1][j - 1] && F[i][j] != F[i - 1][j] && F[i][j] != F[i][j - 1] && F[i][j] != F[i + 1][j - 1] && F[i][j] != F[i + 1][j]) {
                    out++;
                }
            } else {
                if (F[i][j] != F[i - 1][j - 1] && F[i][j] != F[i - 1][j] && F[i][j] != F[i - 1][j + 1] && F[i][j] != F[i][j - 1] && F[i][j] != F[i][j + 1] && F[i][j] != F[i + 1][j - 1] && F[i][j] != F[i + 1][j] && F[i][j] != F[i + 1][j + 1]) {
                    out++;
                }
            }
        }
    }

    cout << out;
}