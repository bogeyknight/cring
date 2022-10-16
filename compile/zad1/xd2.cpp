#include<bits/stdc++.h>
#include "xd2.h"

using namespace std;


int f(string a, string b){
    int t[a.size() + 1][b.size() + 1];

    for(int i = 0; i <= a.size(); i++)
        t[i][0] = i;
    for(int j = 0; j <= b.size(); j++)
        t[0][j] = j;

    int add;
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j]) add = 0;
            else add = 1;
            t[i + 1][j + 1] = min(t[i][j + 1] + 1, min(t[i + 1][j] + 1, t[i][j] + add));
        }
    }

    return t[a.size()][b.size()];
}

