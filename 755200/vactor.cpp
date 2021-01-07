#include <iostream>
#include <vector>

using namespace std;
int main() {
    int input = 0;
    vector<int> loop;
    cin >> input;
    loop.push_back(input);
    while (input != 0) {
        cout << "您輸入的尚不為0" << endl;
        cin >> input;
        loop.push_back(input);
    }
    for(int i = 0 ; i < loop.size() ; i++){
        cout << loop[i] << endl;    
    }
}