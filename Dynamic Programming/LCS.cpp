//program only tells length of lcs
#include<iostream>
#include<vector>

using namespace std;
int max(int a ,int b){
    if(a>b)
    return a;
    else
    {
        return b;
    }
    
}
int LCS(string s1, string s2){
    int m=s1.length();
    int n=s2.length();
    vector<int> lcs;
    //dynamically allocating a grid of (m+1)*(n+1)
    int **ans=new int*[m+1];
    for(int i=0;i<m+1;i++)
    ans[i]=new int[n+1];
    //one based indexing 
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0)
            ans[i][j]=0;
            else if (s1[i-1]==s2[j-1])
            ans[i][j]=1+ans[i-1][j-1];
            else
            {
                ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
            }
        }
      
    }
    return ans[m][n];
}
int main(){
     string s1,s2;
     bool x;
     do{
    cout<<"Enter first string : ";
     cin>>s1;
     cout<<"Enter second string : ";
     cin>>s2;
     cout<<LCS(s1,s2)<<endl;
     cout<<"\nDo you want to continue(Y/N) ? ";
     char cont;
     cin>>cont;
     if(cont =='Y' || cont=='y'){
     x=true;
     cout<<"\n=======================\n";
     }
     else
     {
         x=false;
     }
     
    }
    while(x);
    return 0;
}
 