#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[6];
    for(int i=0;i<6;i++) cin>>a[i];
    sort(a,a+6);
    for(int i=0;i<6;i++){
        int count=0;
        while(a[i]==a[i+1]){i++; count++;}
        count++;
        if(count%2!=0) cout<<a[i]<<" ";
    }
  return 0;
}
