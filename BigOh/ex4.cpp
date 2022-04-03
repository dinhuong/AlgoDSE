#include <bits/stdc++.h>

using namespace std;

int n;
int a[10];

void input(){
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
}

//O(n)
void countNums(){
	int d=1;
	for (int i=0; i<n; i++){
		if (a[i]!=a[i+1]) {
			cout<<a[i]<<" appears "<<d;
			if (d>1) cout<<" times"<<endl; else cout<<" time"<<endl;
			d=1;
		} else {
			d++;
		}
	}
}

int main(){
	input();
	sort(a,a+n);
	a[n] = INT_MAX;
	countNums();
}
