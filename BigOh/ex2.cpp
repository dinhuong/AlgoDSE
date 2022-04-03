#include <bits/stdc++.h>

using namespace std;

int n;
int a[10];

void input(){
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
}

//O(n)
int main() {
	input();
	int avg = 0;
	for (int i=0; i<n; i++) avg+=a[i];
	avg/=n;
	
	int dif=INT_MAX;
	int pos;
	for (int i=0; i<n; i++) {
		if (abs(a[i] - avg) <dif) {
			dif = abs(a[i] - avg);
			pos=i;
		}
	}
	
	cout<<a[pos];
}
