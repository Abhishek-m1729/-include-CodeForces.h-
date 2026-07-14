#include<iostream>
using namespace std;
 
int main(){
    int mat[5][5];
 
    int r = 0, c = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> mat[i][j];
 
            if(mat[i][j]==1){
                r = i;
                c = j;
            }
        }
    }
 
    int count = 0;
    while(r < 2){
        r++;
        count++;
    }
    while(r > 2){
        r--;
        count++;
    }
 
    while(c < 2){
        c++;
        count++;
    }
    while(c > 2){
        c--;
        count++;
    }
 
    cout << count << endl;
    return 0;
}
 