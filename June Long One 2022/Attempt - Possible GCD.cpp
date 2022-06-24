#include<iostream>
#include<set>

using namespace std;

int fetchGCD(int a, int b){
    if(a == 0)
       return b;
    if(b == 0)
       return a;
    if(a == b)
        return a;
    if (a > b)
        return fetchGCD(a-b, b);
    else 
        return fetchGCD(a, b-a);
}

int main(){
    long long t, b, a, diff, x;
    set<int> val;
    cin>>t;

    while(t--){
        cin>>a>>b;
    
        if(a-b==1||b-a==1){
            cout<<1<<endl;
            continue;
        }

        if(a>b){
            diff = a%b;
        }else{
            diff = b%a;
        }
        
        while(diff>0){
            x = fetchGCD(a+diff,b+diff);
            val.insert(x);
            diff--;
        }
        
        cout<<val.size()<<endl;
    }

    return 0;
}