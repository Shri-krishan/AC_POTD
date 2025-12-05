#include<iostream>
using namespace std;
int main(){
    int n,t,count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if(n%2==0 && n>0){
            count=n/4+1;
            cout<<count<<endl;
        }
        else
            cout<<0<<endl;
    }
    
    
    
}

