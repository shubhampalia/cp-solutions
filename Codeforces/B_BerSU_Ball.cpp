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
    int n; cin >> n;
    int a[n]; fo(i,n) cin >> a[i] ;
    int m; cin >> m;
    int b[m]; fo(i,m) cin >> b[i];

    sort(a, a+n);
    sort(b, b+m);
    int l1 = 0, l2 = 0;
    int cnt = 0;
    // int t = min(n,m) - 1;
    while ( l1 <= n-1 && l2 <= m-1 ) {
        // cout << l1 << " " << l2 << "\n";
        if( abs(a[l1] - b[l2]) <= 1 ) {
            cnt++;
            l1++;
            l2++;
        }
        else if (a[l1] < b[l2]) {
            l1++;
        }
        else {
            l2++;
        }
    }
    // cout << "\n";
    cout << cnt << "\n";
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