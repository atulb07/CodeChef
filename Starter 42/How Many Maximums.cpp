
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int t, n, ele, total;
    string s;
    cin>>t;


    while(t--){
        char temp = '2';
        total =0;

        cin>>n;
        cin>>s;
        
        for(int i =0; i<n; i++){
            if(temp == '0' && s[i]=='1'){
                total++;
            }

            temp=s[i];
        }

        if(s[0] == '1'){
            total++;
        }

        if(s[n-2] == '0'){
            total++;
        }

        cout<<total<<endl; 
    }

    return 0;
}