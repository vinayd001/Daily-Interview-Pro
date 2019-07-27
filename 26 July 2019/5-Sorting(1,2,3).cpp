#include<iostream>
using namespace std;
int main() {
    int len;
    cin>>len;
    int a[len], b[3];
    for(int i=0; i<3; i++)
        b[i]=0;
    for(int i=0; i<len; i++) {
        cin>>a[i];
        if(a[i]==1) {
            b[0]++;
        } else if(a[i]==2) {
            b[1]++;
        } else if(a[i]==3) {
            b[2]++;
        }
    }
    for(int i=0; i<len; i++) {
        if(i<b[0])
            a[i]=1;
        else if(i<b[0]+b[1])
            a[i]=2;
        else
            a[i]=3;
        if(i==len-1)
            cout<<a[i];
        else
            cout<<a[i]<<",";
    }   
}