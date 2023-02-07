#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define LD long double
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"

// USED FUNCTION SET PRECISION TO DISPLAY NUMBERS WITH PRECISION

void print(vi nums);
vi cinvi(int n);

void solve() {
    int n, len;
    cin>>n>>len;
    int a[n];
    fo(i,n) cin>>a[i];

    sort(a, a+n);
    int op1 = a[0];
    int op2 = len - a[n-1];
    int maxGap = 0;
    fo(i,n-1) {
        maxGap = max(maxGap, abs(a[i] - a[i+1]));
    }
    LD op3 = maxGap/2.0;
    int res = max(op1, op2);
    if(op3 > res) {
        cout << fixed << setprecision(10) << op3 <<"\n";
        return;
    }
    cout << fixed << setprecision(10) << res <<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// int t; cin>>t;
	// while(t--){
	// 	solve();
	// }
    solve();
    return 0;
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