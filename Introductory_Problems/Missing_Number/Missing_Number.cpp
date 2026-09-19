/*
 * Problem Name: Missing_Number
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-09-19
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
set<int>s;
for(int i=1;i<n;i++)
{int x;
cin>>x;
s.insert(x);}
for(int i=1;i<=n;i++){
if(s.find(i)==s.end())
{cout<<i;
break;}
}}