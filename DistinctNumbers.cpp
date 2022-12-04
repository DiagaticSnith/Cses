#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,d=0;
    cin>>n;
    int a[2000000];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    // for(int i=0;i<n;i++){
    //     int j;
    //     for(j=0;j<i;j++)
    //         if(a[i]==a[j]) break;
    //         if(i==j) d++;
    // }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        while(i<n-1 and a[i]==a[i+1]) i++;
        d++;
    }
    cout<<d;
    return 0;
}