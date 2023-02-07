#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"Yes"<<"\n"
#define no cout<<"No"<<"\n"


void print(vi nums);
vi cinvi(int n);

bool solve() {
    int n; cin>>n;
    // cout<<"here";
    int a[n];
    vi even, odd;
    fo(i,n) {
        cin>>a[i];
        if(a[i] %2 != 0 ) odd.pb(a[i]);
        else even.pb(a[i]);
    }
    
    if(even.size() >= 1) {
        fo(i,even.size()-1) {
            if(even[i] > even[i+1]) return 0;
        }
    }

    if(odd.size() >= 1) {
        fo(i,odd.size()-1) {
            if(odd[i] > odd[i+1]) return 0;
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		if(solve()) yes;
        else no;
	}
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