#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include<string.h>
#include <vector>
#define  ll long long
using namespace std;

int main() {

	int test_case;
	cin >> test_case;
	while (test_case--) {
		string s;
		cin >> s;
		int sum1 = 0;
		int sum2 = 0;
		for (int i = 0;i < s.size();i++) {
			if (i < 3) {
				sum1 += s[i] - '0';
			}
			else if (i >= 3) {
				sum2 += s[i] - '0';
			}
		}
		if (sum1 == sum2) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
