#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    int num;
    cin >> num;
    vec.push_back(num);

    while (num != 0) {
        cin >> num;
        vec.push_back(num);
    }

    vec.pop_back(); //移除0
    
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}
