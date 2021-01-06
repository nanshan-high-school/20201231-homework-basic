#include <iostream>
#include<string>
using namespace std;
int main() {
    int T = 0;
    string n;
    getline(cin, n);//有空格

    string str[n.length() + 1];
    // cout << n.length();
    str[0] = " ";//保證第1個字為空格
    for (int i = 1; i <= n.length(); i++) {
        str[i] = toupper(n[i - 1]);//轉大寫
    }
    str[n.length() + 1] = " ";

    // for (int i = 0; i <= n.length() + 1; i++) {
    //     cout << i << " "<<str[i] << "\n";
    // }
    
    for (int i = 0; i <= n.length(); i++) {
        if (str[i] == " ") {
            if (str[i + 1] != "F" && str[i + 1] != "T" && str[i + 1] != "A" && str[i + 1] != "Y") {
                cout << str[i + 1]; 
            } else if (str[i + 1] == "F" && str[i + 2] == "O" && str[i + 3] == "R" && str[i + 4] == " ") {
                cout << "4";
                T = 1;
            } else if (str[i + 1] == "T" && str[i + 2] == "O" && str[i + 3] == " ") {
                cout << "2";
                T = 1;
            } else if (str[i + 1] == "A" && str[i + 2] == "N" && str[i + 3] == "D" && str[i + 4] == " ") {
                cout << "n";
                T = 1;
            } else if (str[i + 1] == "Y" && str[i + 2] == "O" && str[i + 3] == "U" && str[i + 4] == " ") {
                cout << "u";
                T = 1;
            } else {
                cout << str[i + 1];
            }
        }
        
    }
}
