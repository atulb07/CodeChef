#include<iostream>

using namespace std;

int main(){
    long long t, n, half, result, cal, par;
    char c;
    cin>>t;
    
    while(t--){
        cin>>n;
        half = n/2;
        result = 0;
        cal = 0;
        par = 0;
        while(n--){
            cin>>c;
            if(half){
                if(c==')'){
                    result++;
                }
                half--;
            }
            if(c==')'){
                if(half){
                    par++;
                }
                cal++;
            }else{
                cal--;
            }
        }
        if(cal!=0){
            cout<<result*2+abs(cal)-2*(par)<<endl;
            
        }else{  
            cout<<result*2+abs(cal)<<endl;
        }
    }

    return 0;
}