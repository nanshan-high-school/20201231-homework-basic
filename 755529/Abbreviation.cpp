#include <iostream>
using namespace std;

int main() {
    string say = "";
    int saylong;
    getline(cin,say);
    saylong = size(say);
    bool is_same_word = false;
    bool not_special_word = true;

    for (int i = 0; i < saylong; i++) {
        if (is_same_word) {
            if (say[i] == ' ') {
                is_same_word = false;
            }
        } else{
            if (toupper(say[i]) == 'F' && toupper(say[i + 1]) == 'O' && toupper(say[i + 2]) == 'R') {
                if (say[i + 3] == ' ' || say[i + 3] == '\0') {
                    cout << "4";
                    not_special_word = false;
                }
            } else if (toupper(say[i]) == 'T' && toupper(say[i + 1]) == 'O') {
                if (say[i + 2] == ' ' || say[i + 2] == '\0') {
                    cout << "2";
                    not_special_word = false;
                }
            } else if (toupper(say[i]) == 'A' && toupper(say[i + 1]) == 'N' && toupper(say[i + 2]) == 'D') {
                if (say[i + 3] == ' ' || say[i + 3] == '\0') {
                    cout << "n";
                    not_special_word = false;
                }
            } else if (toupper(say[i]) == 'Y' && toupper(say[i + 1]) == 'O' && toupper(say[i + 2]) == 'U') {
                if (say[i + 3] == ' ' || say[i + 3] == '\0') {
                    cout << "u";
                    not_special_word = false;
                }
            }

            if (not_special_word) {
                cout << char(toupper(say[i]));
            }
            is_same_word = true;
            not_special_word = true;
        }
    }
}
