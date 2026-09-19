/*
 * Problem Name: Missing_Number
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-09-19
 */

/*You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
Output
Print the missing number.
Constraints
 
2 \le n \le 2 \cdot 10^5
 
Example
Input:
5
2 3 1 5
 
Output:
4*/
 
#include<bits/stdc++.h>
using namespace std;
int main ()
{set<int> s;
int n ;
cin>>n;
for(int i=1;i<n;i++)
{int x;
    cin>>x;
s.insert(x);}
int i=1;
for(auto value:s)
{
if(value!=i) {cout<<i; break;}
i++;}
cout<<n;
 
 
}