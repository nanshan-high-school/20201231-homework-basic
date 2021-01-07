#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    int flag[x + 2][y + 2];
    for (int i = 0; i < x + 2; i++) {
        for (int j = 0; j < y + 2; j++) {
            flag[i][j] = 0;
        }
    }
    for (int i = 1; i < x + 1; i++) {
        for (int j = 1; j < y + 1; j++) {
            cin >> flag[i][j];
        }
    }
    int sum = 0;
    for (int i = 1; i < x + 1; i++) {
        for (int j = 1; j < y + 1; j++) {
            if (flag[i - 1][j - 1] != flag[i][j]) {
                if (flag[i - 1][j] != flag[i][j]) {
                    if (flag[i - 1][j + 1] != flag[i][j]) {
                        if (flag[i][j + 1] != flag[i][j]) {
                            if (flag[i][j - 1] != flag[i][j]) {
                                if (flag[i + 1][j + 1] != flag[i][j]) {
                                    if (flag[i + 1][j] != flag[i][j]) {
                                        if (flag[i + 1][j - 1] != flag[i][j]) {
                                            sum += 1;
                                        }
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
    }
    cout << sum;
}
