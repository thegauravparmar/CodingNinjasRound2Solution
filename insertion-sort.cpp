#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){
	int i,n,j,key=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=1;i<n;i++){
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	for(int i=0;i<n;i++){
		cout<<a[i] <<" ";
	}
}
