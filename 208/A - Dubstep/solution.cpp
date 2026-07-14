#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string remix;
	cin >> remix;
	
	string song;
	size_t position = 0;
	bool found = true;
	
	while(position < remix.size()){
	    if(remix.compare(position, 3, "WUB") == 0) position += 3;
	    else{
	        string word;
	        while(remix.compare(position, 3, "WUB") != 0 && position < remix.size()){
	            word.push_back(remix[position]);
	            position ++;
	        }
	        
	        if(!word.empty()){
	            if(!found) song += " ";
	            song += word;
	            found = false;
	        }
	    }
	}
	
    cout << song << '
';
    
    return 0;
}