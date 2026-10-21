#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isomorphic(string s1, string s2) {
        
        if (s1.size() !=s2.size()) return false;
        map<char, char> m1, m2;
        
        int n = s1.size();
        
        for (int i =0; i<n; i++){
            if (m1.find(s1[i]) == m1.end())
                m1[s1[i]] = s2[i];
            else if (m1[s1[i]] != s2[i])
                return false;
                
            if (m2.find(s2[i]) == m2.end())
                m2[s2[i]] = s1[i];
            else if (m2[s2[i]] != s1[i])
                return false;
        }
        return true;
    }
};