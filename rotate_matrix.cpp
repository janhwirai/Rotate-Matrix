#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix,int n){
    //Transpose of the given matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //Reverse the matrix
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main(){
    int n;
    cout<<"Enter the size of matrix:-";
    cin>>n;
    vector<vector<int>> matrix(n);
    cout<<"Enter elements of matrix:-\n";
        for(int i=0;i<n;i++){
            matrix[i].assign(n,0);
            for(int j=0;j<n;j++){
                cin>>matrix[i][j];
            }
        }
        cout<<"The given matrix is:\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"The rotated matrix is:\n";
        rotate(matrix,n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }

    return 0;
}