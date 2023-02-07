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
    string s; cin>>s;
    int n=s.size();
    int countA=0, countB=0, countC=0;
    fo(i,n) {
        if(s[i] == 'a') countA++;
        else if(s[i] == 'b') countB++;
        else countC++;
    }
    for(int i=0; i<countA; i++) if(s[i]!='a') return 0;
    for(int i=countA; i<countA + countB; i++) if(s[i] != 'b') return 0;
    for(int i=countA + countB; i<n; i++) if(s[i] != 'c') return 0;
    if(countA == 0 || countB==0 || countC == 0) return 0;
    if(countC == countA || countC == countB) return 1;
    else return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// int t; cin>>t;
	// while(t--){
	// 	solve();
	// }
    int res = solve();
    if(res==1) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
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