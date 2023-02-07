
#include <bits/stdc++.h>


#define br cout<<endl
#define vi vector<int>
using namespace std;

int check(int u, int ptr){
    for (int i=0;i<21;i++){
        if ((ptr&(1<<i))>0)
            u^=(1<<i);
    }
    return u;
}

int main(){
    int t;
    t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> res;
        
        map<int,int> s;
        s[0]=1;
        int ptr = 1;
        int u = 0;
        for (int i=0;i<n;i++){
            while (s[check(u,ptr)]==1){
                ptr++;
            }
            u = check(u,ptr);
            s[u]=1;
            res.push_back(ptr);
            ptr++;
        }
        
        for (auto x:res) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}