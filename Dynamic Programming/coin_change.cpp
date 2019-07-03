
//https://www.hackerrank.com/challenges/coin-change/

#include <iostream>
#include <vector>

using namespace std;

long getWays(long n, vector<long> c)
{
    long** dp = new long*[c.size()+1];
    for(long i = 0; i <= c.size(); i++)
        dp[i] = new long[n+1];

    sort(c.begin(), c.end());
    for (long i = 0; i<=n; i++)
        dp[0][i]=0;

   
    for (long i = 1; i<=c.size() ; i++)
    {
        for (long j = 0; j <= n; j++)
        {
            if(c[i-1]==j) 
                dp[i][j]=1+dp[i-1][j]; //if value match 
            else if (c[i-1]>j){
                dp[i][j]=dp[i-1][j]; //coin not used 
            }
            else {
                dp[i][j]=dp[i][j-c[i-1]]+dp[i-1][j]; //only coin used + other cases    
            }
            
        }
    }

    return dp[c.size()][n]; //all coins used 
}


           
int main(){
    vector <long> coins(3);
    
    for(int i=0;i<3;i++)
    coins[i]=i+1;

    long way=getWays(5,coins);
    cout<<"\n\nways :"<<way<<"\n\n";
    return 0;
}

//entire hackerrank code along with nuiances of stdin and stdout
/*
    #include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the getWays function below.
long getWays(long n, vector<long> c) {

   long** dp = new long*[c.size()+1];
    for(long i = 0; i <= c.size(); i++)
        dp[i] = new long[n+1];

    sort(c.begin(), c.end());
    for (long i = 0; i<=n; i++)
        dp[0][i]=0;

   
    for (long i = 1; i<=c.size() ; i++)
    {
        for (long j = 0; j <= n; j++)
        {
            if(c[i-1]==j) 
                dp[i][j]=1+dp[i-1][j];
            else if (c[i-1]>j){
                dp[i][j]=dp[i-1][j]; //coin not used 
            }
            else {
                dp[i][j]=dp[i][j-c[i-1]]+dp[i-1][j]; //only coin used + other cases    
            }
            
        }
    }

    return dp[c.size()][n]; //all coins used 
}




int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split_string(c_temp_temp);

    vector<long> c(m);

    for (int i = 0; i < m; i++) {
        long c_item = stol(c_temp[i]);

        c[i] = c_item;
    }

    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'

    long ways = getWays(n, c);
    fout<<ways;
    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

    
 */