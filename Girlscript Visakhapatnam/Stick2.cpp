#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     long long int t,ct;
    cin>>t;
     long long int a[t][10000];
   
     long long int n[t];
    for(long long int c=0;c<t;c++){
        cin>>n[c];
        ct=n[c];
       
    for( long long int i=0;i<ct;i++){
        cin>>a[c][i];
       
    }
   
    }
   
    for(long long int cp=0;cp<t;cp++){
       
       
    sort(a[cp],a[cp]+n[cp],greater<long long int>());
       
       
    }
   
   
    long long int k=0,l=-1;
    long long int ft[2];
    for(long long int c=0;c<t;c++){
        long long int i=0;
        k=0;
        while(i<=n[c]-1){
           
            if(a[c][i]==a[c][i+1])
            {
               
                ft[k++]=a[c][i];
                //cout<<a[c][i]<<" ";
             if(k==2){
                 cout<<ft[0]*ft[1]<<endl;
                 break;
             }
             i+=2;
        }
            else{
         i++; }  
        }
       
        if(k<2){
           cout<<l<<endl;
       }
           
    }
 
}
