#include<bits/stdc++.h>

using namespace std;
#define vi vector<int>

#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl



void solve() {
    int n,k; cin>>n>>k;
    int a[n], b[n];
    fo(i,n) cin>>a[i];
    fo(i,n) cin>>b[i];
    map<int, int> count;
    fo(i,n) {
        if(count[a[i]] == 0) count[a[i]] = b[i];
        else count[a[i]] = max(count[a[i]], b[i]);
    }

    

    
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
    return 0;
}

