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

void solve() {
    int n; cin >> n;
    int mark[n+1][n+1];
    memset(mark, 0, sizeof(mark));
    // for(int i = 1; i <= n; i++) {
    //     int l,r;
    //     for(int j = 1; j <= n; j++) {
    //         cin >> l >> r;
    //         mark[l][r] = 1;
    //     }
    // }
    int l[n+1], r[n+1];
    fo(i,n) {
        cin >> l[i] >> r[i];
        mark[l[i]][r[i]] = 1;
    }

    fo(i,n) {
        for(int d = l[i]; d <= r[i]; d++) {
            if( (d==l[i] || mark[l[i]][d-1] == 1) && (d == r[i] || mark[d+1][r[i]] == 1) ) {
                cout << l[i] << " " << r[i] << " " << d << "\n";
            }
        }
    }
    // cout << "\n";
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