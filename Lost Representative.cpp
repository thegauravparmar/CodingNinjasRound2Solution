#include<bits/stdc++.h>
using namespace std;
 
 
int arr[1000][1000];
int visited[1000][1000];
int calculator(int x, int y, int current, int n)
{   
    int i=x, j=y;
    if(i>=n || j>=n) 
    {
    return 0;
    }
    if(i<0 || j<0) 
    {
    return 0;
    }
    else if(visited[i][j]==1) 
    { 
        return 0; 
    }
    else if(arr[i][j]==0) 
    { 
        visited[i][j]=1; 
        return 0; 
    }
    else if(arr[i][j]==1 && visited[i][j]==0)
    {
        visited[i][j]=1;
        current = calculator(i+1,j,current,n) + calculator(i,j+1,current,n) + calculator(i-1,j,current,n) + calculator(i,j-1,current,n) + 1;
    }
    return current;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t,i,j;
        cin>>t;
        for(i=0;i<t;i++)
        {
            for(j=0;j<t;j++)
            {
                cin>>arr[i][j];
                visited[i][j]=0;
            }
        }
        int k,count=0,tp,a1,a2; 
        cin>>k;

        for(i=0;i<t;i++)
        {
            for(j=0;j<t;j++)
            {
                if(arr[i][j]==1 && visited[i][j]==0)
                {
                    tp=calculator(i,j,1,t);
                }
                if(tp==k)
                {
                    count=1; a1=i; a2=j; 
                    break;
                }
            }
            if(tp==k)
            {
                count=1; 
                break;
            }
        }
        if(count==0) 
        cout<<"-1 -1";
        else 
        cout<<a1<<" "<<a2;
        cout<<endl;
    }

    return 0;
}
