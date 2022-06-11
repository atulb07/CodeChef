#include<iostream>

using namespace std;

long long stepCount(long long a, long long b){

    long long steps = 0;

    while(b>=2*a){
        a*=2;
        steps++;
    }

    while(a>1 && b>1){
        a--;
        b--;
        steps++;
    }

    if(a==1 && b==1){
        return steps + 1;
    }else{
        return steps + stepCount(a,b);
    }
}

int main(){
    cout<<"here";
    long long t, a, b;
    cin>>t;

    while(t--){
        cin>>a>>b;
        cout<<t;
        cout<<a<<b;

        if(a>b){
            cout<<stepCount(b,a);
        }else{
            cout<<stepCount(a,b);
        }
    }

    return 0;
}