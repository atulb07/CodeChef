#include<iostream>

using namespace std;

unsigned long long int stepCount(unsigned long long int a,unsigned long long int b){

    unsigned long long int steps = 0;

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
    unsigned long long int t, a, b;
    cin>>t;

    while(t--){
        cin>>a>>b;

        if(a==0||b==0){
            cout<<-1<<endl;
        } else if(a==b){
            cout<<a<<endl;
        } else if(a>b){
            cout<<stepCount(b,a)<<endl;
        }else{
            cout<<stepCount(a,b)<<endl;
        }
    }

    return 0;
}