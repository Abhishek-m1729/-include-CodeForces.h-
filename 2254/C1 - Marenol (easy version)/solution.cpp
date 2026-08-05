#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        
        vector<int> v1,v2;
        for(int i = 0; i<n;i++){
            if(s1[i]=='1') v1.push_back(i%2);
            if(s2[i]=='1') v2.push_back(i%2);
        }
        if(v1.size() != v2.size()) cout<<"NO
";
        else{
            if(count(v1.begin(),v1.end(),0)==count(v2.begin(),v2.end(),0) && 
               count(v1.begin(),v1.end(),1)==count(v2.begin(),v2.end(),1)) cout<<"YES
";
            else cout<<"NO
";
        }
    }
    return 0;
}