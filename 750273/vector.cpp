#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> input;
    int num;

    do {
        cin >> num;
        input.push_back(num);
    } while (num != 0);

    for (auto i : input) {
        cout << i << " ";
    }
}
