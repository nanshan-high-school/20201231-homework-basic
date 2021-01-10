#include <iostream>
#include <vector>
using namespace std;

int main() {
    int inputnum;
    vector<int> vec;
    while(cin >> inputnum) {
        if (inputnum != 0) {
            vec.push_back(inputnum);
        }else {
            for(int i = 0; i < vec.size(); i++) {
                cout << vec[i] << " ";
            }
            break;
        }
    }
}
