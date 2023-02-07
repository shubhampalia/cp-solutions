#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"


void print(vi nums);
vi cinvi(int n);

void solve(){
    int n; cin>>n;
    // cout<<"here";
    vi a = cinvi(n);
    int i=0;
    int num = 1;
    for(i=0; i<n; i++) {
        if(num != a[i]) break;
        else num++;
    }
    // deb(num);
    if(i>=n) {
        print(a);
    }
    else {
        int j = i+1;
        while(a[j] != num) j++;
        // deb(i);
        // deb(j);
        // reverse(a.begin()+i, a.begin()+j);
        reverse(a.begin() + i, a.begin() + j + 1);
        print(a);
        // cout<<"\n";
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