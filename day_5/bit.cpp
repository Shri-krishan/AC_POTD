#include<iostream>
using namespace std;
int main()
{
    int n;
    int x=0;
    string str;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str=="++x" || str=="x++")
            x++;
        if(str=="--x" || str=="x--")
            x--;
    }
    cout<<x;

} 

