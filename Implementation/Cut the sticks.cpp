#include <bits/stdc++.h>

using namespace std;

 void cutTheSticks(vector <int> a , int n) {
    sort(a.begin(), a.end());
    int siz = a.size();
    int stickcut =0;
    for(int i =0;i<n;i++){
        if(a[i]!=0){
           int j =i+1;
            stickcut = 0;
            while(j<n){
                if(a[j]!=0){
                    a[j++] -=  a[i];
                    stickcut++;
                }
            }
            cout<<stickcut+1<<endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    cutTheSticks(arr , n);
  


    return 0;
}

