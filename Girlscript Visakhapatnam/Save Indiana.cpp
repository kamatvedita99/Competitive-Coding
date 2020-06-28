#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    char a[10][4]={
        {'0','0','0','0'},
        {'0','0','0','0'},
        {'a','b','c','0'},
        {'d','e','f','0'},
        {'g','h','i','0'},
        {'j','k','l','0'},
        {'m','n','o','0'},
        {'p','q','r','s'},
        {'t','u','v','0'},
        {'w','x','y','z'}
       
    };
    cin>>t;
    for(int i=0;i<t;i++){
        string s,p;
       
        int k=0;
        cin>>s;
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++){
        if(!(s[i]>=48 && s[i]<=57)){
             p[k]=a[s[i-1]-48][count-1];
            cout<<p[k];
            k++;
            count=0;
          }
            else if(i==n-1)
            {p[k]=a[s[i]-48][count];
            cout<<p[k];}
            
            else{
                count++;
            }
        }
       cout<<endl;
    }
   
       
   
    return 0;
}

