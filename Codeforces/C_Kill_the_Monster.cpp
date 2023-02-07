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

bool solve(){
    ll h,d,H,D,k,w,a,i,x,y,z,p;
    cin>>h>>d>>H>>D>>k>>w>>a;
    for(i=0; i<=k; i++) {
        x = (h+(i*a)), y=(d+((k-i)*w));
        z = (x/D); if(x%D>0) z++;
        p = (H/y); if(H%y>0) p++;
        if(z>=p) break;
    }
    if(i<=k) return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		if(solve()) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
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