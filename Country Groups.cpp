#include<bits/stdc++.h> 
using namespace std; 

void udfs(int f, vector<int> arr[], vector<bool> &visited) 
{ 
    visited[f] = true; 
    for (int i=0; i<arr[f].size(); i++) 
        if (visited[arr[f][i]] == false) 
            udfs(arr[f][i], arr, visited); 
} 

int TreeCount(vector<int> arr[], int n) 
{ 
    vector<bool> visited(n, false); 
    int count = 0; 
    for (int u=0; u<n; u++) 
    { 
        if (visited[u] == false) 
        { 
            udfs(u, arr, visited); 
            count++; 
        } 
    } 
    return count; 
} 

void edgeadd(vector<int> arr[], int l, int m) 
{ 
    arr[l].push_back(m); 
    arr[m].push_back(l); 
} 
  

int main() 
{ 
    int n,t; cin>>n>>t;
    int x,y;
    vector<int> arr[n]; 
    while(t--)
    {
        cin>>x>>y;
        edgeadd(arr,x,y);
    }
    cout << TreeCount(arr, n); 
    return 0; 
}