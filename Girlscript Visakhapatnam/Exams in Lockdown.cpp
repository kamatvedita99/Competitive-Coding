#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int n;
    cin>>n;
    long int a[n];
    long int count=0;
    for( long int i=0;i<n;i++ ){
       
        cin>>a[i];
        if(a[i]%2!=0) count++;
    }
    cout<<count;
    return 0;
}
