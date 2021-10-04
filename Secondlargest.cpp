// Second Largest

// Take input a stream of n integer elements, find the second largest element present.
// The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
// Input format :

// Line 1 : Total number of elements (n)

// Line 2 : N elements (separated by space)

// Sample Input 1:
//  4
//  3 9 0 9
// Sample Output 1:
//  3
// Sample Input 2 :
//  2
//  4 4
// Sample Output 2:
//  -2147483648
// Sample Output Explanation:
// Since both the elements are equal here, hence second largest element is INT_MIN i.e. ( -2^31 )
  
//   Solution

#include<iostream>
using namespace std;
#include <climits>



int main(){
    
    // Write your code here
    int n,f,i=1,s,x,t,a;
    cin>>n;
    if(n==0||n==1){
        cout<<"-2147483648";
    }
    else{
        cin>>f>>s;
        if(s>f){
            a=f;
            f=s;
            s=a;
        }
        for(i;i<=n-2;i++){
            cin>>x;
            if(x>f){
                t=f;
                f=x;
                s=t;
            }
            else if(x<f&&x>s){s=x;}
            else if(x<s&&f==s){s=x;}
        }
        if(f==s){cout<<"-2147483648";}
      else  cout<<s;
   }
}

