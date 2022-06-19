#include<iostream>
#include<string.h>

using namespace std;

int main(){
    
    int t, n;
    string s;
    char a,b;
    cin>>t;

    while(t--){
        cin>>n;
        cin>>s;
        for(int i=0; i<n/2; i++){
            a = s[i*2];
            b=  s[(i*2)+1];
            if(a=='0' && b=='0'){
                cout<<'A';
            }else if(a=='0' && b=='1'){
                cout<<'T';
            }else if(a=='1' && b=='0'){
                cout<<'C';
            }else if(a=='1' && b=='1'){
                cout<<'G';
            }
        }
        cout<<endl;
    }

    return 0;
}