#include<iostream>

using namespace std;

int main(){
    long long t, n, a, i;
    cin>>t;

    while(t--){
        cin>>n;
        i = 1;
        a = 1;

        while(n--){
            cout<<a<<" ";
            a=i+a;
            i++;
        }
        
        cout<<endl;
    }

    return 0;
}