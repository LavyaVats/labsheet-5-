
#include <iostream>
using namespace std;
int main(){
    int n,r,s,a;
    cout<<"Enter NO:";
    cin>>n;

    while(n>0){
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    cout<<s <<"\n";

    if(a==s){
        cout<<"Armstrome";
    }
    else{
        cout<<"Not Armstrome";
    }


}

