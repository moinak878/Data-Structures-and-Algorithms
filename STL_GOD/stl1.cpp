#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int input()
{
        return rand();
}

void vectors()
{
        //VECTOR
        cout << endl;
        vector<int> a;
        //Enter 5 nos
        for (int i = 0; i < 5; i++)
                a.push_back(input());

        //print contents
        for (int i : a)
        {
                cout << i << " ";
        }
        cout << endl
             << "\n";
}

int main()
{
        cout << endl
             << endl;
        //MAP
        map<char, int> m;
        string x = "Moinak Banerjee";
        for (char i : x)
        {
                m[i]++;
        }

        //returns duplicates also

        /* 
        cout << "Occurance of each letter :-\n";
        for (char letter : x)
        {
                cout << "Occurance of " << letter << " is : " << m[letter];
                cout << endl;
                
        }
        */
        cout << endl;

        //for unique letters in names

        cout << "Occurance of each letter :-\n";
        for (char letter : x)
        {
                int &test = m[letter];
                if (test > 0)
                {
                        cout << "Occurance of " << letter << " is : " << test << endl;
                }
                if (test > 1)
                {
                        test = 0;
                }
        }
        cout << endl;

        return 0;
}
