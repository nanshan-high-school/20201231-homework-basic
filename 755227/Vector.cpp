#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vector;

    int i = -1;

    do {
        cin >> i;
        vector.push_back(i);
    } while (i != 0);

    int length = vector.size();
    for (int j = 0; j < length; j++) {
        cout << vector[j] << " ";
    }
}