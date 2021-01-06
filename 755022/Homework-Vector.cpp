#include <iostream>
#include <vector>
using namespace std;
int main() {
	int num = 0, i, roll[num];
	do {
		cin >> i;
		roll[num] = i;
		num++;
	} while (i != 0);

	vector<int> vec;
	for (int i = 0; i < num; i++) {
		vec.push_back(roll[i]);
	}

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
}
