//https://www.hackerrank.com/challenges/time-conversion/problem
#include <bits/stdc++.h>

using namespace std;


string timeConversion(string s) {
   //12:00:00AM on a 12-hour clock, and 00:00:00
   //12:00:00PM on a 12-hour clock, and 12:00:00 
   string ans;
   string format=s.substr(8,2);

   if(format=="AM"){
       if(s.substr(0,2)=="12")
        ans="00"+s.substr(2,6);
        else 
        ans=s.substr(0,8);
}
    else
    {
        if(s.substr(0,2)=="12")
        ans="12"+s.substr(2,6);
        else{
        int x; 
        x=stoi(s.substr(0,2));  // stoi -> from int to string
        x+=12;
        ans=to_string(x)+s.substr(2,6); //to_string() self explanatory
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
