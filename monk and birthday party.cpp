#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        multiset<string>name;
        set<string>final;
        for(int i=0;i<N;i++){
            string str;
        cin>>str;
        name.insert(str);
        }
        for(string sk: name){
            final.insert(sk);
        }
        for(string sj: final){
            cout<<sj<<endl;
        }
        cout<<endl;
    }
    return 0;
}