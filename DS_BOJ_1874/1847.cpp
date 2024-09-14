#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);

	int n = 0, arr_num = 1;
	stack<int> s;
	string result;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		int input = 0;
		cin >> input;

		if (arr_num <= input) {
			while (arr_num <= input) {
				result.push_back('+');
				s.push(arr_num);
				arr_num++;
			}
			result.push_back('-');
			s.pop();
		}

		else {
			if (input == s.top()) {
				result.push_back('-');
				s.pop();
			}
			else {
				cout << "NO";
				return 0;
			}
		}
	}

	for (auto it : result) cout << it << "\n";

	return 0;
}