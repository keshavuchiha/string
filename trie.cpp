#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Node{
public:
    Node* children[26];
    bool cnt=0;
    Node(){
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
    }
};
class Trie{
public:
    Node* root;
    Trie(){
        root=new Node();
    }
    void insert(string& s){
        Node* curr=root;
        for(int i=0;i<s.size();i++){
            int index=s[i]-'a';
            if(curr->children[index]==NULL){
                curr->children[index]=new Node();
            }
            curr=curr->children[index];
        }
        
    }
};
void solve(){

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
