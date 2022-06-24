#include<iostream>

using namespace std;

long long calculateAnswer(long long result, long long base, long long times, long long div) {
    base %= div;
    result = ((result%div) * (base%div)) % div;
    while (times > 0) {
        if (times & 1) result = (result * base) % div;
        base = (base * base) % div;
        times >>= 1;
    }
    return result;
}

int main(){
    long long t, a, b;
    cin>>t;
    
    while(t--){
        cin>>a>>b;
        long long ans=1;
        if(a>2){
            cout<<calculateAnswer(b,2,a-2,1000000007)<<endl;
        }else{
            cout<<(a*b)%1000000007<<endl;
        }
    }

    return 0;
}