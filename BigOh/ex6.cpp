#include<bits/stdc++.h>

using namespace std;

int n,num;
int a[10];

void input(){
	cin>>n>>num;
	for(int i=0; i<n; i++) cin>>a[i];
}


//O(n)
int indexOf(int num){
	for(int i=0; i<n; i++){
		if (a[i]==num) return i;
	}
	return -1;
}

int main(){
	input();
	cout<<indexOf(num);
}
