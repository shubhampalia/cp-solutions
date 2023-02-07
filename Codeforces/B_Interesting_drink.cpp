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


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vi x = cinvi(n);
    int q; cin >> q;
    sortall(x);

    while(q--) {
        int m; cin >> m;
        cout << upper_bound(all(x), m) - x.begin() << "\n";
    }
    return 0;
}


void print(vi nums){
	fo(i,nums.size())cout<<nums[i]<<"\n";
	// cout<<"\n";
}

vi cinvi(int n){
	vi nums;
	fo(i,n){
		int x; cin>>x;
		nums.pb(x);
	}
	return nums;
}