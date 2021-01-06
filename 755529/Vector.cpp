#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i = 0;
    int num = -1;
    vector<int> number = {};
    do {
        cin >> num;
        number.push_back(num);
    } while (num != 0);

    number.pop_back();
    int size = number.size();

    for (int i = 0; i < size; i++) {
        cout << number[i] << " ";
    }
}
