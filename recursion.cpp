#include<bits/stdc++.h>
using namespace std;
int cnt  = 0;
int f(){
    if(cnt == 4){
        return 0;
    }
    else{
        cout<<cnt<<endl;
        cnt++;
        f();
    }
}
int ntimes(int i, int n){
    if(i>n){
        return 0;
    }
    cout<<"Dev"<<endl;
    ntimes(i+1, n);
}
int revInt(int i, int n){
    if(n<=i){
        cout<<i<<endl;
        revInt(i-1, n);
    }else{
        return 0;
    }
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
void rev(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    rev(i+1, arr, n);
}
bool strpldrm(int i, string &s){
    if(i>= s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return strpldrm(i+1, s);
}
int main(){
    string s = "madsm";
    cout<<strpldrm(0, s);
    return 0;

}