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
    int n,k,x; cin>>n>>k>>x;
    if(x>k) {
        cout<<"-1";
    }
    else {
        int it=0;
        fo(i,n) {
            if(it==x) it=0;
            cout<<it<<" ";
            it++;
        }
    }
    cout<<endl;
    return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
    return 0;
}

