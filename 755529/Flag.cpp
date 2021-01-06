#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r;
    cin >> c;
    int total = 0;
    
    int std[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> std[i][j];
        }
    }

    int left, right, up, down;
    for (int i = 0; i < r; i++) {
        if (i == 0) {
            left = i;
            right = i + 1;
        } else if (i == r - 1) {
            left = i - 1;
            right = i;
        } else {
            left = i - 1;
            right = i + 1;
        }
        for (int j = 0; j < c; j++) {
            if (j == 0) {
                up = j;
                down = j + 1;
            } else if (j == c - 1) {
                up = j - 1;
                down = j;
            } else {
                up = j - 1;
                down = j + 1;
            }
            bool check = true;
            for (int k = left; k < right + 1; k++) {
                for (int l = up; l < down + 1; l++) {
                    if (k == i && l == j) {
                        continue;
                    } else if (std[k][l] == std[i][j]) {
                        check = false;
                        break;
                    }
                }
                if (check == false) {
                    break;
                }
            }
            if (check == true) {
                total += 1;
            }
        }
    }
    cout << total;
}
