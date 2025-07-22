#include <bits/stdc++.h>

using namespace std;

int a[10005];

int main(){
    int n;
    cin>> n;
    set <int> s;
    for (int i = 0; i < n; i++){
        cin>> a[i];
        s.insert(a[i]);
    }
    cout<< s.size();
    return 0;

}

