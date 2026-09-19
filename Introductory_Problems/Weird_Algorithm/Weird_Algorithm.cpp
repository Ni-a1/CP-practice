/*
 * Problem Name: Weird_Algorithm
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-09-19
 */

#include<bits/stdc++.h>
using namespace std;
 
vector<long long int> s;
 
void func(long long int n)
{
    s.push_back(n);
 
    if(n == 1)
    {
        for(auto &value : s)
        {
            cout << value << " ";
        }
 
        return;
    }
 
    if(n % 2 == 0)
    {
        func(n / 2);
    }
    else
    {
        func(3 * n + 1);
    }
}
 
int main()
{
    long long int n;
    cin >> n;
 
    func(n);
}