#include <iostream>
#include <string.h>
using namespace std;
int main() {
    string input, abbreviation;
    getline(cin, input);
    char name[1000];
    int current = 0, writer = 0;
    for (int i = 0; i <= input.size(); i++) {
        input[i] -= (input[i] > 91 && input[i] != ' ') ? 32 : 0;
        if (input[i] == ' ' || i == input.size()) {
            current = i + 1;
            if (strncmp(name, "YOU", 3) == 0) {
                abbreviation.push_back('u');
            } else if (strncmp(name, "AND", 3) == 0) {
                abbreviation.push_back('n');
            } else if (strncmp(name, "FOR", 3) == 0) {
                abbreviation.push_back('4');
            } else if (strncmp(name, "TO", 2) == 0) {
                abbreviation.push_back('2');
            } else {
                abbreviation.push_back(name[0]);
            }
        } else {
            name[i - current] = input[i];
        }
    }
    cout << abbreviation;
}
