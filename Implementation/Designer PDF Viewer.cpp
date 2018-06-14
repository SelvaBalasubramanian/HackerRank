#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a[26];
    for(int i  = 0; i< 26; i++) cin>>a[i];
    int mx = 0;
    string s; 
    cin>>s;
    int len = s.length();
    for(int i = 0 ;i<len ; i++){
        if(a[s[i]-'a'] >mx)mx = a[s[i]-'a'];
    }
    cout<<len * mx;
    
    return 0;
}