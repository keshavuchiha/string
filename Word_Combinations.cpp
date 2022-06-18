#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool compare(string& a,string& b){
    return a.size()<b.size();
}
const int mod=1e9+7;
int helper(string s,unordered_map<string,int>& temp){
    if(temp.count(s)){
        return temp[s];
    }
    int ans=0;
    for(int i=1;i<s.size();i++){
        string a=s.substr(0,i);
        string b=s.substr(i,s.size()-i);
        ans+=(helper(a,temp)*helper(b,temp))%mod;
        ans%=mod;
    }
    return temp[s]=ans;
}
void solve(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<string> temp(n);
    for(int i=0;i<n;i++){
        cin>>temp[i];
    }
    sort(temp.begin(),temp.end(),compare);
    unordered_map<string,int> dp;
    for(int i=0;i<n;i++){
        // helper(temp[i],dp);
        dp[temp[i]]++;
        // cout<<temp[i]<<dp[temp[i]]<<" ";
    }
    cout<<helper(s,dp)<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
