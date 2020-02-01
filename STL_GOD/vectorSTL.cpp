//author : RMcoder09
//This program illustrates use of STL library for use in case of variable sized arrays

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector <int> v1;                //vector v1 declared globally

void display()                 //displays the elements of the vector
{
    vector<int> :: iterator i1;
    for(i1=v1.begin();i1!=v1.end();i1++)
        cout<<*i1<<" ";
    cout<<endl;    
}
int main()
{
    
    cout<<"Enter number of elements "<<endl;                    //initial input of elements known
    int n,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        v1.push_back(d);
    }
    int inp;
    do
    {
        cout<<"Enter your choice"<<endl;
        cout<<"1: Sort the elements \n2: Reverse the elements \n3:Count the occurances of an elements \n4:Remove an element \n";
        cout<<"5:Remove duplicate elements \n6:Gap between max and min elements \n7:Display elements \n8:Add element"<<endl;
        cin>>inp;
        switch(inp)                                         //menu driven program
        {
            case 1:
                sort(v1.begin(),v1.end());                 //sort elements
                display();
                break;
            case 2:
                reverse(v1.begin(),v1.end());               //reverse elements
                display();
                break;
            case 3:
                cout<<"Enter element to count\n"<<endl;                 //count occurances of an element
                int el1;
                cin>>el1;
                cout<<count(v1.begin(),v1.end(),el1)<<endl;
                break;
            case 4:
                cout<<"Enter Index to be deleted"<<endl;                   //delete an element of a given index
                int in;
                cin>>in;
                v1.erase(v1.begin()+in);
                display();
                break;
            case 5:
                v1.erase(unique(v1.begin(),v1.end()),v1.end());                   //remove duplicates form vector
                display();
                break;
            case 6:
                cout<<abs(distance(min_element(v1.begin(),v1.end()),max_element(v1.begin(), v1.end())))<<endl;      //distance between max and min element
                break;
            case 7:
                display(); 
                break;
            case 8:
                cout<<"Enter element to add to the vector"<<endl;                       
                int el2;
                cin>>el2;
                v1.push_back(el2);                            //adding more element( can be used in case of variable sized array)
                break;
            default:
                cout<<"Thank you."<<endl;    

        } 
    }while(inp<=8 && inp>0);                         //this loop continues until user inputs any value other than that in the menu

    return 0;
}