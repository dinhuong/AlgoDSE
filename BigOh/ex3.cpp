#include <bits/stdc++.h>

using namespace std;

int n;
int a[10];

void input(){
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
}

//O(n)
int main(){
	input();
	int max=0;
	for (int i=1; i<n; i++){
		if (a[i]>a[max]) max=i;
	}
	cout<<a[max];
}
