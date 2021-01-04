#include <iostream>
using namespace std;
int main() {
    int R, C, total = 0;
    cin >> R >> C;
    int a[R + 1][C + 1];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            a[i][j] = 0;
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (a[i][j] != a[i - 1][j - 1] &&
                a[i][j] != a[i - 1][j] &&  
                a[i][j] != a[i - 1][j + 1] &&  
                a[i][j] != a[i][j - 1] &&  
                a[i][j] != a[i][j + 1] &&  
                a[i][j] != a[i + 1][j - 1] && 
                a[i][j] != a[i + 1][j] &&  
                a[i][j] != a[i + 1][j + 1]) {
                total += 1;
            }
        }
    }
    cout << total;

    

}
