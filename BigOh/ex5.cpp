#include <bits/stdc++.h>

using namespace std;

int n,m;
int a[10], b[10];

void input(){
	cin>>n>>m;
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<m; i++) cin>>b[i];
}

//O(m+n)
void findShared(){
	int i=0,j=0;
	while(i<n && j<m){
		if (a[i] == b[j]) {
			cout<<a[i]<<" ";
			i++;
		} else if (a[i]<b[j]) i++;
		else j++;
	}
}

int main(){
	input();
	sort(a, a+n);
	sort(b, b+m);
	findShared();
}
