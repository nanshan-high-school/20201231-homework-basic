#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input = 1;
    vector<int> num;
    
    while (input != 0){
        cin >> input;
        num.push_back(input);
    }

    for (int i = 0; i < num.size(); i++){
        cout << num[i] <<" ";
    }
}
