#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int i;
    
    do{
        cin >> i;
        vec.push_back(i);
    } while (i != 0);
    
    vec.pop_back();
    
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\n";
    }
}
