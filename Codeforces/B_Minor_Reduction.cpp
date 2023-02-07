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
    string s; cin>>s;
    int n=s.size();
    bool flag=0;
    for(int i=n-1; i>=0; i--) {
        int t = s[i]- 48 + s[i-1] -48;
        if(t>=10) {
            flag=1;
            s[i] = t%10 + 48;
            s[i-1] = t/10 + 48;
            break;
        }
    }
    if(flag) {
        cout<<s<<"\n";
        return;
    }
    string str = "";
    str += (s[0]-48)+ (s[1]-48) + 48;
    for(int i=2; i<n; i++) {
        str += s[i];
    }
    cout<<str<<"\n";
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