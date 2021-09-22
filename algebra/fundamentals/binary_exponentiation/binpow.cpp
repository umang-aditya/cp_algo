#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll binpow(ll a , ll b){
    if(b==0)
        return 1;
    ll res = binpow(a, b/2);
    if(b%2)
        return res*res*a;
    else
        return res*res;
}

int main(){
    int a = 3, b = 2;
    int res = binpow(a, b);
    cout<<res;
    return 0;
}