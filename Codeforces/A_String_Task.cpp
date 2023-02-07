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
// "A", "O", "Y", "E", "U", "I",
bool checkVowel(char x, map<char, int> &vowels) {
    if(vowels[x] == 1) return 1;
    return 0;
}
void solve(){
    map<char, int> vowels;
    vowels['A'] = 1;
    vowels['a'] = 1;
    vowels['O'] = 1;
    vowels['o'] = 1;
    vowels['Y'] = 1;
    vowels['y'] = 1;
    vowels['E'] = 1;
    vowels['e'] = 1;
    vowels['U'] = 1;
    vowels['u'] = 1;
    vowels['I'] = 1;
    vowels['i'] = 1;
    string s; cin>>s;
    int n = s.size();
    vector<char> res;
    fo(i,n) {
        if(!checkVowel(s[i], vowels)) {
            s[i] = tolower(s[i]);
            res.pb('.');
            res.pb(s[i]);
        }
    }
    fo(i,res.size()) cout<<res[i];
    cout<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// int t; cin>>t;
	// while(t--){
	// 	solve();
	// }
    solve();
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