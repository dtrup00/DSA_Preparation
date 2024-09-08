#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> strMap;
    for (int i = 0; i < strs.size(); i++)
    {
        string st = strs[i];
        sort(st.begin(), st.end());

        strMap[st].push_back(strs[i]);
    }

    vector<vector<string>> strAns;
    for (auto it : strMap)
    {
        strAns.push_back(it.second);
    }

    return strAns;
}

int main()
{
    vector<string> str = {"eat",
                          "tea",
                          "tan",
                          "ate",
                          "nat",
                          "bat"};
    vector<vector<string>> ans = groupAnagrams(str);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}