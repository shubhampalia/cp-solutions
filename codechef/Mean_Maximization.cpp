#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin>>n;
	int a[n];
	double sum=0;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		sum+=a[i];
	}
	sort(a, a+n);
	sum-=a[n-1];
	sum/=(n-1);
	double res = a[n-1] + sum;
	// cout<<res;
	cout<<setprecision(6)<<fixed<<res<<endl;
	return;
}

int main()
{
	int t; cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}