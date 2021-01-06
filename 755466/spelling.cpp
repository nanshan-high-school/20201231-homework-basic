#include <string>
#include <iostream>
using namespace std;
int main() {
    int Y = 0;
    string s, t;
    cin >> s;
    cin >> t;
    
    string S[s.length()], T[t.length()];
    int ANS[t.length()]; //要int!!!
    for (int i = 0; i < s.length(); i++) {
        S[i] = s[i];
    }

    for (int i = 0; i < t.length(); i++) {
        T[i] = t[i];
    }



    for (int i = 0; i < t.length(); i++) {
        for (int j = 0; j < s.length(); j++) {
            //cout << "T: " << T[i] << " S: " << S[j] << "\n";  
            if (T[i] == S[j]) {
                Y = 1;
                ANS[i] = j + 1;
                T[i] = S[j] = "\0";
                //cout << "ANS: " << ANS[i] << "\n";
                break;
            } 
            
        }
        if (Y == 0) {
            ANS[i] = 999;//等同X
        }
        Y = 0;
    }




    for (int i = 0; i < t.length(); i++) {
        if (ANS[i] == 999) {
            cout << "X" << " ";
        } else {
            cout << ANS[i] << " ";
        }
        
    }
}
