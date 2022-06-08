#include<iostream>

using namespace std;

int main(){
    int p1, p2, q1, q2, t;
    cin>>t;

    while(t--){
        cin>>p1>>p2>>q1>>q2;
        if(p1<p2) p1 = p2;
        if(q1<q2) q1 = q2;

        if(p1>q1) cout<<"Q"<<endl;
        else if(p1<q1) cout<<"P"<<endl;
        else cout<<"TIE"<<endl;
    }

    return 0;
}