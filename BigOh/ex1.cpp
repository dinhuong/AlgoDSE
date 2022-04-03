#include <bits/stdc++.h>

using namespace std;

// O(1)
int compare(int a, int b) {
	if (a>b) return 1;
	else if (a==b) return 0;
	else return -1;
}

int main() {
	cout << compare(2,1);
}
