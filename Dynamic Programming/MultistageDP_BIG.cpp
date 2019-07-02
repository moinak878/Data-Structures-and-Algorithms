#include<iostream>
using namespace std;

//forward method

int main(){
        //cost adjacency matrix
        int c[][13]={{0,0,0,0,0,0,0,0,0,0,0,0,0},
                     {0,0,9,7,3,2,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,4,2,1,0,0,0,0},
                     {0,0,0,0,0,0,2,7,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0,11,0,0,0,0},
                     {0,0,0,0,0,0,0,11,8,0,0,0,0},
                     {0,0,0,0,0,0,0,0,0,6,5,0,0},
                     {0,0,0,0,0,0,0,0,0,4,3,0,0},
                     {0,0,0,0,0,0,0,0,0,0,5,6,0},
                     {0,0,0,0,0,0,0,0,0,0,0,0,4},
                     {0,0,0,0,0,0,0,0,0,0,0,0,2},
                     {0,0,0,0,0,0,0,0,0,0,0,0,5},
                     {0,0,0,0,0,0,0,0,0,0,0,0,0}};
                  

        int cost[13];
        int d[13];
        int path[5];

        cost[12]=0;
        d[12]=12;

        int min_dist=__INT_MAX__;
        int min_vertex=-1;

        for(int i=11;i>=1;i--){
                min_dist=__INT_MAX__;
                min_vertex=-1;

                for(int j=i+1;j<=12;j++){
                        if(c[i][j]!=0 && ((c[i][j]+cost[j] )<= min_dist)){ //put onnly < for another path
                                min_dist=c[i][j]+cost[j];
                                min_vertex=j;
                        }
                }
                cost[i]=min_dist;
                d[i]=min_vertex;       
        }

        int stages=5;
        path[0]=1;//source
        path[stages-1]=12; //sink
        for(int i=1;i<stages-1;i++){
                path[i]=d[path[i-1]];
        }

        cout<<"\nThe optimal path from source to sink is :-\n"<<path[0];
        for(int i=1;i<stages;i++)
        cout<<" --> "<<path[i];
        cout<<"\n\n";
}