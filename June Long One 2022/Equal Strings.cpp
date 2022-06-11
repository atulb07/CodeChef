//Passed
#include<iostream>
#include<string>

using namespace std;

int main(){
    int t, n, total;
    int arr[27] = {0};
    string s1,s2;
    cin>>t;

    while(t--){
        total = 0;
        cin>>n>>s1>>s2;

        for(int i=0; i<n; i++){
            if(s1[i]!=s2[i]){
                arr[int(s2[i]-97)]++;
            } 
        } 

        for(int i=0; i<27; i++){
            if(arr[i]>0){
                total++;
                arr[i]=0;
            }
        }

        cout<<total<<endl;
    }

    return 0;
}