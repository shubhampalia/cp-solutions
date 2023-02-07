#include <bits/stdc++.h>
using namespace std;


#define ll unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define fo(i,n) for(int i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define pb push_back
#define sortall(x) sort(all(x))
#define deb(x) cout<<#x<<" = "<<x<<endl
void print(vi &a);
void print(vvi &a);


void solve(){
    return;
}


int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}




void print(vi &a) {
    for(int x: a) cout << x << " ";
    cout << endl;
}
void print(vvi &a) {
    for(int i=0; i<a.size(); i++) {
        for(int j=0; j<a[0].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}