#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int matrix[100][100];
    int i;
    cin>>i;
    for(int x=0;x<i;x++){
        for(int y=0;y<i;y++){
            cin>>matrix[x][y];
        }
    }
   int diag1,diag2;
diag1=0;diag2=0;
    for(int x=0;x<i;x++)
        {
        diag1=diag1+matrix[x][x];
    }
    for(int x=i-1;x>-1;x--)
        {

        diag2=(diag2+matrix[i-x-1][x]);
    }


    return 0;
}
