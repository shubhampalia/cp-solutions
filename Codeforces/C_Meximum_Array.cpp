#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl


void print(vi nums);
vi cinvi(int n);

int MEX(int a[], int l, int r) {
    set<int> s;
    for(int i=l; i<=r; i++) {
        if(s.find(a[i]) == s.end()) s.insert(a[i]);
    }
    for(int i=0; i<=r; i++) {
        if(s.find(i)==s.end()) return i;
    }
    return r+1;
}

void solve(){
    int n; cin>>n;
    int a[n]; fo(i,n) cin>>a[i];
    vi b;
    // vector<pair<int, int>> mex;
    int dp[n+1];
    if(a[0]==0) dp[0] = 1;
    else dp[0]=0;
    if(n==1) {
        cout<<dp[0]<<endl;
        return;
    }
    // for(int i=1; i<n; i++) {
    //     dp[i] = MEX(a, l, i);
    //     if(dp[i] > dp[i-1]) {
    //         b.pb(dp[i]);
    //         l=i+1;
    //     }
    // }

    for(int i=1; i<n; i++) {
        dp[i] = MEX(a, 0, i);
    }
    fo(i,n) cout<<dp[i]<<" ";
    int l=0, r=1;
    while(l<=r) {
        if(dp[r] > dp[r-1]) {
            b.pb(dp[r]);
            l=r+1;

            for(int i=l; i<n; i++) {
                dp[i] = MEX(a, l, i);
            }
            fo(i,n) cout<<dp[i]<<" ";
        }
        r++;
    }


    print(b);

    // fo(i,n) cout<<dp[i]<<" ";
    // cout<<endl;

}

int main(){
	int t;
	cin>>t;
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