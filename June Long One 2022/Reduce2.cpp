#include <bits/stdc++.h>

using namespace std;

unsigned long long int stepCount(unsigned long long int a,unsigned long long int b){

    unsigned long long int steps = 0;
    unsigned long long int temp = 0;

    while(!(a==1 && b==1)){

        if(a==b){
            return a;
        }

        temp = b/a;
        temp = log2(temp);
        a = a * pow(2,temp);
        steps += temp;

        if(a==b){
            return a + steps;
        }

        steps+=a-1;
        b=b-a+1;
        a=1;
    }
    

    return steps + 1;
}

int main(){
    unsigned long long int t, a, b;
    cin>>t;

    while(t--){
        cin>>a>>b;

        if(a==0||b==0){
            cout<<-1<<endl;
        } else if(a>b){
            cout<<stepCount(b,a)<<endl;
        }else{
            cout<<stepCount(a,b)<<endl;
        }
    }

    return 0;
}