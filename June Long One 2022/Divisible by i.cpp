#include<iostream>

using namespace std;

int main(){
    long long t, n, a, i;
    cin>>t;

    while(t--){
        cin>>n;
        i = 1;
        a = (n/2)+1;

        while(n--){
            cout<<a<<" ";
            if(i%2==0){
                a=a+i;
            }else{
                a=a-i;
            }
            i++;
        }
        
        cout<<endl;
    }

    return 0;
}
