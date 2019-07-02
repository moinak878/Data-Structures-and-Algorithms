#include<iostream>
using namespace std;

//forward method

int main(){
        //cost adjacency matrix
        int c[][9]={{0,0,0,0,0,0,0,0,0},
                   {0,0,2,1,3,0,0,0,0},
                   {0,0,0,0,0,2,3,0,0},
                   {0,0,0,0,0,6,7,0,0},
                   {0,0,0,0,0,6,8,9,0},
                   {0,0,0,0,0,0,0,0,6},
                   {0,0,0,0,0,0,0,0,4},
                   {0,0,0,0,0,0,0,0,5},
                   {0,0,0,0,0,0,0,0,0}};

        int cost[9];
        int d[9];
        int path[4];

        cost[8]=0;
        d[8]=8;

        int min_dist=__INT_MAX__;
        int min_vertex=-1;

        for(int i=7;i>=1;i--){
                min_dist=__INT_MAX__;
                min_vertex=-1;

                for(int j=i+1;j<=8;j++){
                        if(c[i][j]!=0 && ((c[i][j]+cost[j] )< min_dist)){
                                min_dist=c[i][j]+cost[j];
                                min_vertex=j;
                        }
                }
                cost[i]=min_dist;
                d[i]=min_vertex;       
        }

        int stages=4;
        path[0]=1;//source
        path[stages-1]=8; //sink
        for(int i=1;i<stages-1;i++){
                path[i]=d[path[i-1]];
        }

        cout<<"\nThe optimal path from source to sink is :-\n"<<path[0];
        for(int i=1;i<stages;i++)
        cout<<" --> "<<path[i];
        cout<<"\n\n";
}