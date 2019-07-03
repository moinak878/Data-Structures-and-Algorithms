#include<iostream>
using namespace std;
int sum_of_digits(int a){
    int s=0;
    while(a>0){
        s+=a%10;
        a=a/10;
    }
    return s;
}
int main(){
    int a;
    cin>>a;
    for(int i=0;i<1000;i++){
        if((sum_of_digits(a+i))%4==0)
        {cout<<a+i<<"\n";
        break;
        }
    }
    return 0;
}