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

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

void print(vi &nums);
void print(vvi &nums);
vi cinvi(int n);

void solve() {
    int n; cin >> n;
    int a[n]; fo(i,n) cin>>a[i];
    int dp[n];
    fo(i,n) dp[i] = -1;
    for(int i=n-1; i>=0; i--) {
        int p = a[i];
        for(int j=i; j>=0; j--) {
            int q = a[j];
            if(gcd(p,q) == 1) {
                dp[i] = max(dp[i], i+j+2);
                break;
            }
        }
    }
    int res = -1;
    fo(i,n) res=max(res, dp[i]);
    cout << res  << "\n";
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