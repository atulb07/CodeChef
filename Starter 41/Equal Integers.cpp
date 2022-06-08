#include<iostream>

using namespace std;

int main(){
    int x, y, t, steps;
    cin>>t;

    while(t--){
        cin>>x>>y;
        steps = 0; 
        while(true){
            if(x==y) break;
            else if(x<y) x=x+1;
            else y=y+2;

            steps++;
        }

        cout<<steps<<endl;
    }

    return 0;
}