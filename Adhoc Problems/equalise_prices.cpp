#include<iostream>
#include<vector>
//#include<bits/stdc++.h>

/* 
using namespace std;

long check(vector<long> a,long n,long k,long b){
    if(abs(a[0]-b)>k||abs(a[n-1]-b)>k){
        return 0;
    }
    return 1;
}

int main(){
    long q;
    long n,k;
    cin>>q;
    vector <long> answer;
    for(long x=1;x<=q;x++){
    
    cin>>n>>k;
    cout<<"\n";
    vector<long> a(n);
    for(long i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    long b=a[0]-k; //min 
    long good=-1;
    long bad=-1;

    for(;(b<=a[n-1]+k);b++){
        if(b<0)continue;
        if(check(a,n,k,b)==1)
        {
            if(b>good)
            good=b;
        }
        else
        {
            bad=-1;
        }
        
    }
    if(good==bad)
        answer.push_back(-1);
    else
    {
        answer.push_back(good);
    }
    
    
    }

    for(long i=0;i<q;i++)
        cout<<answer[i]<<"\n";
    

    return 0;
}
*/

#include<iostream>
//#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int n,k;
        cin>>n>>k;
        vector<ll> a(n);int tot=0;
        for(int i=0;i<n;i++){ //o(N)
            cin>>a[i];
            tot+=a[i];
        }
        /*Let the first price be zero ;
        We equalise the  prices to k;
        if the last price was 2k ; it would be decreased by k at most
        but if the difference was more; no number could be possible..
        At max, we can equalise prices till a[min]+k.... */
        sort(a.begin(),a.end()); //O(log N)
        if((a[n-1]-a[0])>2*k) cout<<-1<<endl;
        else cout<<a[0]+k<<endl;
    }
}