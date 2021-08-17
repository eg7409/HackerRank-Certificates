#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'mostActive' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY customers as parameter.
 */

vector<string> mostActive(vector<string> v) {
    int n = v.size();
    
    vector<string> ans;
    
    map<string,int> m;
  
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    
    for(auto i : m){
        
        float p = ((float)(i.second)/n)*100;
      
        if(p>=5){
            ans.push_back(i.first);
        }
      
    }
  
    return ans;
}
