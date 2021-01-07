#include <iostream>
using namespace std;

int main() {
    string list, require;
    cin >> list >> require;
    int answer[require.size()];
    for (int i = 0; i < require.size(); i++) {
        answer[i] = 0;
    }
    
    for (int i = 0; i < require.size(); i++) {
        for (int j = 0; j < list.size(); j++) {
            if (require[i] == list[j]) {
                answer[i] = j + 1;
                list[j] = 0;
                break;
            }
        }
    }
    for (int i = 0; i < require.size(); i++) {
        if (answer[i] != 0) {
            cout << answer[i] << " ";
        } else {
            cout << "X ";
        }
    }
}
