#include<iostream>

using namespace std;

unsigned long long int stepCount(unsigned long long int a,unsigned long long int b){

    unsigned long long int steps = b;
    unsigned long long int diff = b - a;
    int arr[64] = {0};
    int i = 0;

    if(a==b){
        return a;
    }

    while(diff>0){
        arr[i] = diff%2;
        diff = diff/2;
        i++;
    }

    for(int j=0; j<i; j++){
        if(arr[j]==1){
            steps+=(j+1);
        }
    }

    if((arr[0]==1 && arr[1]==1)){
        steps-=1;
    }

    return steps;
}

int main(){
    unsigned long long int t, a, b;
    cin>>t;

    while(t--){
        cin>>a>>b;

        if(a==0||b==0){
            cout<<-1<<endl;
        } else if(a<b){
            cout<<stepCount(a,b)<<endl;
        }else{
            cout<<stepCount(b,a)<<endl;
        }
    }

    return 0;
}