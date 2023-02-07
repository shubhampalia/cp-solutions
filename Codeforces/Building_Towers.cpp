#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";


void print(vi nums);
vi cinvi(int n);

void solve(){
    ll x,m; cin>>x>>m;
    ll height = 0L;
    ll inventory=1L;
    ll ans = 0L;
    // ll dp[m] = {0};
    // ll b=1;
    // for(ll i=1; i<=m; i++) {
    //     if(b<x) {
    //         dp[i] = dp[i-1];
    //         b=b*2;
    //     }
    //     else {
    //         dp[i] = dp[i-1] + 1;
    //         b= x+(2*b);
    //     }
    // }
    // cout<<dp[m]<<"\n";
    while(m>0) {
        m--;
        ll req = x-height;
        ll z=min(req, inventory);
        height+=z;
        inventory = (inventory-z )+height;
        // inventory-=z;
        // inventory+=(height);
        if(height==x) {
            ans+=1;
            height=0;
        }
        if(inventory>=x) break;
    }
    ans+=m;
    cout<<ans<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		solve();
	}
}


void print(vi nums){
	fo(i,nums.size())cout<<nums[i]<<" ";
	cout<<endl;
}

vi cinvi(int n){
	vi nums;
	fo(i,n){
		int x; cin>>x;
		nums.pb(x);
	}
	return nums;
}