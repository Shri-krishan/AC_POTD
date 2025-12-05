#include <iostream>

using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long flagstone_n = n / a;
    long long flagstone_m = m / a;
    if (n%a!=0) 
        flagstone_n++;
    if (m%a!=0) 
        flagstone_m++;
    long long total=flagstone_m*flagstone_n;
    cout<<total;
    return 0;
}
