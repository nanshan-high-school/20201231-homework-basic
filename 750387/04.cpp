#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> number;
    int num = 1;
    
    while(num != 0) {
        cin >> num;
        number.push_back(num);
    }

    for (int i = 0; i < number.size(); i++) {
        if (number[i] == 0) {
            number.pop_back();
        } else {
            cout << number[i];
        }
    }
}
