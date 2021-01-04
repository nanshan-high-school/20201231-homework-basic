#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;
    int a = 1;
    
    while (a != 0) {
        cin >> a;
        vec.push_back(a);
    }
    
    vec.pop_back();
    
    for (int i = 0; i < vec.size() ; i++) {
        cout << vec[i] << "\n";
    }
}
