#include<iostream>

using namespace std;

int main(){
    
    int t, n, x;
    bool flag;
    cin>>t;

    while(t--){
        flag = true;
        cin>>n>>x;

        if(x>26){
            flag = false;
        }

        if(n%2==0 && x>n/2){
            flag = false;
        }

        if(n%2==1 && x>(n+1)/2){
            flag = false;
        }

        if(flag){
            for(int i=0; i<n; i++){
                if(i<n/2){
                    if(x>i+1){
                        cout<<char(i+97);
                    }else{
                        cout<<char(x+96);
                    }
                }else{
                    if(x>n-i){
                        cout<<char(97+n-i-1);                    
                    }else{
                        cout<<char(96+x);
                    }
                }
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}