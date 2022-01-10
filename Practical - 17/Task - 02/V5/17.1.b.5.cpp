//5. checks if the vector is empty or not

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

// function for printing the elements in a vector
void printvector(vector<int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of the vector \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    
    printvector(v);
    
    cout << "Checking vector is empty or not after :\n";
    if (v.empty())
        cout << "Vector is empty\t";
    else
        cout << "Vector is not empty";
    
    return 0;
}



