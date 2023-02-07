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

void solve(){
    int n,k; cin>>n>>k;
    char dp[n][n];
    
    if(k > (n+1)/2) {cout<<"-1"<<"\n"; return;}

    for(int i=0; i<n; i+=2) {
        if(k>0) {
            dp[i][i] = 'R';
            k--;
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(dp[i][j] != 'R') {
                cout<<".";
            }
            else {
                cout<<dp[i][j];
            }
        }
        cout<<"\n";
    }
    return;
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