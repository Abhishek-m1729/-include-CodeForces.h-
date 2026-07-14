#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    int arr[n][3];
    for(int j=0; j<n; j++){
        for(int k=0; k<3; k++){
            cin >> arr[j][k];
        }
    }
 
    int countQ = 0;
    for(int m=0; m<n; m++){
        int sum1 = 0;
        for(int p=0; p<3; p++){
            if(arr[m][p]==1){
                sum1 ++;
            }
        }
        if(sum1 >= 2){
            countQ++;
        }
    }
 
    cout << countQ << endl;
    
    return 0;
}