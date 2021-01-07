#include <iostream>
using namespace std;

int main() {
    int R, C; //學生隊形有幾列與幾行
    int total = 0;
    cin >> R >> C;

    int line[R][C];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> line[i][j];
        }
    }
    
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            //cout << line[i][j]  << " ";
        }
        //cout << endl;
    }

    bool bCheck;
    int num[8][2]={{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            bCheck = true;
            for(int k = 0; k < 8; k++) {
                if( i+num[k][0] >=0 && i+num[k][0] < R && j+num[k][1] >=0 && j+num[k][1] < C) {
                    if (line[i][j] == line[i+num[k][0]][j+num[k][1]]) {
                        bCheck =false;
                    }
                }
            }
            if (bCheck) {
                total++;
                //cout << i << " " << j << " " << line[i][j] << " " << endl;
            }
        }
    }
    
    cout << total << endl;
}
