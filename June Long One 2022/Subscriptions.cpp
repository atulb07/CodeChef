//Passed
#include<iostream>

using namespace std;

int main(){
    int t, person, cost, subs;
    cin>>t;

    while(t--){
        cin>>person>>cost;
        if(person%6==0){
            subs = person/6;
        }else{
            subs = person/6;
            subs++;
        }
        
        cout<<cost*subs<<endl;       
    }

    return 0;
}