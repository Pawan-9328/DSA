#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //create 2-d vector 

     //vector<vector<int> >matrix(3,vector<int>(4,1));

    //  for(int i=0; i<3; i++)
    //  for(int j=0;j<4;j++)
    //  cout<<matrix[i][j]<<" ";
     
     int n, m;
     cout<<"Enter the row col value "<<endl;
     cin>>n>>m;

     vector<vector<int> >matrix(n,vector<int>(m,1));
     
     for(int i =0;i<n;i++)
     for(int j =0;j<m;j++)
     cin>>matrix[i][j];


     for(int i =0; i<n; i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
     }

    cout<<" Rows "<<matrix.size();
    cout<<" Cols "<<matrix[0].size();

      
    return 0;
}