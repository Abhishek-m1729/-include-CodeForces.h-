#include <iostream>
#include<string>
using namespace std;
 
int main() {
    
    int t;
    cin>>t;
    while(t>0){
        
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        string str = "";
        for(int j=0;j<n;j++){
            if(arr[j]==67){
                    str = "YES";
                   
                    break;
            }else{
                str = "NO";
            }
        }
        cout << str << endl;
        
        t--;
    }
    
    return 0;
}