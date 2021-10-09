//? Some inbuild functions in C++
//? All these operations in case of vectors and array are O(n).

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 5;
    int arr[m] = {1, 4, 9, 2, 3};
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    //? for arrays
    int min_array = *min_element(arr, arr + m); //? return a pointer
    cout << min_array << endl;

    auto ptr = find(arr, arr + m, 2); //? finds the element and returns the pointer where the element is found.
    if (ptr != arr + m)
        cout << *ptr << endl;
    else
        cout << "NOT FOUND" << endl;

    //? for vectors
    int min = *min_element(v.begin(), v.end()); //? return a pointer
    cout << min << endl;

    int max = *max_element(v.begin(), v.end()); //? return a pointer
    cout << max << endl;

    int sum = accumulate(v.begin(), v.end(), 0); //? the third argument is the initial value of the sum. This func return the sum of elements.
    cout << sum << endl;

    int cnt = count(v.begin(), v.end(), 3); //? third argument is the element of which we want the count.
    cout << cnt << endl;

    auto it = find(v.begin(), v.end(), 2); //? finds the element and returns the pointer where the element is found.
    if (it != v.end())
        cout << *it << endl;
    else
        cout << "NOT FOUND" << endl;

    reverse(v.begin(), v.end()); //? it can reverse vector, array or string.
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    //? for strings
    string s = "ankur";
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}