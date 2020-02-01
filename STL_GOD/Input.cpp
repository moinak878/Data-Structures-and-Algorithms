//author: RMcoder09
//This program illustrates fast IO technique and taking variable number of inputs(works only in online compilers) 

#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);                                 //Fast IO
    cin.tie(NULL);                                                    //Fast IO                  
    int sum=0;
    int inp;
    while(cin>>inp)                                     //Takes variable number of input data 
    {
        sum+=inp;                                   //In this program, this loop calculates sum of variable number of inputs
    }
    cout<<sum<<endl;
    return 0;
}

/*  Note: variable number of inputs works only in online compilers */