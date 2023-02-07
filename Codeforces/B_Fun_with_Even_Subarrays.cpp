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

int solve(){
    int n; cin>>n;
    int a[n]; fo(i,n) cin>>a[i];
    if(n==1) return 0;
    if(n==2) {
        if(a[0] == a[1]) return 0;
        else return 1;
    }
    int l=n-2;
    int count=0;
    while(l>=0) {
        if(a[l] == a[n-1]) l--;
        else {
            count++;
            l-=(n-l-1);
        }
    }
    return count;
    
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int res = solve();
        cout<<res<<"\n";
	}
}


void print(vi nums){
	fo(i,nums.size())cout<<nums[i]<<" ";
	cout<<endl;
}

vi cinvi(int n){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	vi nums;
	fo(i,n){
		int x; cin>>x;
		nums.pb(x);
	}
	return nums;
}