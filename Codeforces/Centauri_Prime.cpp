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

bool isVowel(char x) {
    if(x == 'A' || x=='a' || x=='E' || x=='e' || x =='I' || x=='i' || x == 'O' || x=='o' || x=='U' || x=='u') {
        return 1;
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin>>t;
	for(int c=1; c<=t; c++) {
        string kingdom; cin>>kingdom;
        int sz = kingdom.size();
        if(kingdom[sz-1] == 'y' || kingdom[sz-1] == 'Y') {
            cout<<"Case #"<<c<<": "<<kingdom<<" is ruled by nobody."<<"\n";
        }
        else if(isVowel(kingdom[sz-1])) {
            cout<<"Case #"<<c<<": "<<kingdom<<" is ruled by Alice."<<"\n";
        }
        else {
            cout<<"Case #"<<c<<": "<<kingdom<<" is ruled by Bob."<<"\n";
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