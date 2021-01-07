#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <cctype>
using namespace std; 

int main() {
    string S, T, ST;
    string S1, S2;
    int i;
    //
    cout << "key word: ";
    cin >> S >> T;
    //S = "cnvieqpzkgoaotjfd";
    //T = "gogoro";
    //
    int next = 0;
    for (i=0; i< T.length(); i++){
        next = S.find_first_of(T[i], 0); //尋找從0開始，出現splitSep的第一個位置(找不到則回傳-1)
        if (next >= 0){
            ST += to_string(next + 1);
            ST += " ";
            //
            S1 = S.substr(0, next);
            S2 = S.substr(next+1, S.length()-next);
            S = S1 + " " + S2;
        }
        if (next == -1){
            ST += "X ";
        }
        //cout << i << "-" << ST << "-" << S << endl;
    }

    cout << ST << endl;
}