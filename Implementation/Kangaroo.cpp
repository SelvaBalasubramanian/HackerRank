
#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if(v2 >= v1){
        return "NO";
    }
    else{
        x1 = x2-x1;
        v1 = abs(v2-v1);
        if(x1%v1 == 0){
            return "YES";
        }
        else
            return "NO";
    }
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}