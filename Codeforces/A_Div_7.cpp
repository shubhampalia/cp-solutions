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

void solve(){
   int n; cin>>n;
   if(n%7==0) cout<<n;
   else{
       n-=n%10;
       while(n%7!=0) {
           n++;
       }
       cout<<n;
   }
   cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
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