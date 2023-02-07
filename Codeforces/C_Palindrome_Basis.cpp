#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define LD long double
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"


void print(vi &nums);
void print(vvi &nums);
vi cinvi(int n);


int mod = 1e9+7;
int change(int t, vector<int>& cs) {
    int dp[400000] = { 1 };
    for (auto c : cs)
        for (auto j = c; j <= t; ++j) dp[j] += dp[j - c]%mod;
    return dp[t]%mod;
}

void solve() {
    
    int n;
    cin>>n;
    vector<int> cs(n,0);
    fo(i,n) {
        cs[i]=i+1;
    }
    // for(int x: cs) cout<<x<<" ";
    cout<<change(n, cs)<<"\n";
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


void print(vi &nums){
	fo(i,nums.size())cout<<nums[i]<<" ";
	cout<<"\n";
}

void print(vvi &nums) {
	fo(i,nums.size()) {
		fo(j,nums[0].size()) {
			cout << nums[i][j] << " ";
		}
		cout << "\n";
	}
}

vi cinvi(int n){
	vi nums;
	fo(i,n){
		int x; cin>>x;
		nums.pb(x);
	}
	return nums;
}