#include<iostream>
#include<vector>
using namespace std;
int main(){
    //defining a vector of vector
    vector<vector<int> > matrix;
    int row=3;
    int column=3;
    int counter =1;
    //fill inner vector and insert into outer vector
    for(int i=0;i<row;i++){
        //define temporary vector
        vector<int> temp;
        for(int j=0;j<column;j++){
            cout<<"Enter element "<<counter;
            int x;
            cin>>x;
            temp.push_back(x);
            counter++;
        }
        matrix.push_back(temp);
    }
    //display matrix
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}