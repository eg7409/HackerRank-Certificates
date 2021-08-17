#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'maxCost' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY cost
 *  2. STRING_ARRAY labels
 *  3. INTEGER dailyCount
 */

int maxCost(vector<int> cost, vector<string> labels, int dailyCount) {
    
    int n = cost.size(),ans=0,temp=0,dayCount=0;
   
    
    for(int i=0;i<n;i++){
    
        if(labels[i] == "illegal"){
            temp += cost[i];
        }
        else{
            dayCount++;
            temp += cost[i];
        }
        
        
        if(dayCount == dailyCount){
            ans = max(ans,temp);
            temp = 0;
            dayCount= 0;
        }
    }
    return ans;
}
