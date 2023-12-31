/*
#include <algorithm>
vector<int> func(int x){
    vector<int> ans;

    if(x==0){
        return ans;
    }

    ans = func(x-1);
    ans.push_back(x);
    return ans;
}
vector<int> printNos(int x) {
    vector<int> ans = func(x);
    reverse(ans.begin(),ans.end());
    return ans;
}
*/