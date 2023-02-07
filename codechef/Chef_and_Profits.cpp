#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl



void solve(){
    int x,y,z; cin>>x>>y>>z;
    cout<<(z*x)-(y*x)<<endl;
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}


