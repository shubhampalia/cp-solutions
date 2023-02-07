#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define LD long double
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"


void print(vi nums);
vi cinvi(int n);

void solve() {
    int n, k; cin >> n >> k;
    int h[n];
    fo(i,n) cin >> h[i];
    int dp[n];
    dp[0] = h[0];
    for(int i = 1; i < k ; i++) {
        dp[i] = dp[i-1] + h[i];
    }

    // fo(i,n) cout << dp[i] <<" ";

    for(int i = k; i<n-1; i++) {
        dp[i] = dp[i-1] + h[i] - h[i-k];
        
    }
    int j = k;
    int res = INT_MAX;
    for(int i=k-1; i<n; i++) {
        if(dp[i] < res ) {
            res = dp[i];
            j = i;
        }
    }

    // fo(i,n) cout << dp[i] <<" ";
    cout << j-1 << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// int t; cin>>t;
	// while(t--){
	// 	solve();
	// }
    solve();
}



void print(vi nums){
	fo(i,nums.size())cout<<nums[i]<<" ";
	cout<<"\n";
}

vi cinvi(int n){
	vi nums;
	fo(i,n){
		int x; cin>>x;
		nums.pb(x);
	}
	return nums;
}