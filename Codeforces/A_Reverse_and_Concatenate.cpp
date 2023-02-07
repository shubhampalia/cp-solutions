#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define ll unsigned long long
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";


void print(vi nums);
vi cinvi(int n);



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	while(t--){
            int n,k; cin>>n>>k;
        string s; cin>>s;
        int p=1;
        fo(i,n) {
            if(s[i] != s[n-i-1]) {
                p=0;
                break;
            }
        }
        if(p==1) cout<<"1"<<"\n";
        else {
            if(k==0) cout<<"1"<<"\n";
            else cout<<"2"<<"\n";

        }
	}
    return 0;
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