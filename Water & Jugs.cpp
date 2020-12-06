#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--)
	{
		int x,y,z;
        cin >> x >> y >> z;
        if ((z == x or z == y))
        {
            cout << "Yes\n";
        }
        else if ((z % (__gcd(x, y)) == 0 and z <= (x + y)))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
	}
}