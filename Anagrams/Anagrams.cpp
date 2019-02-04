// Anagrams.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string isAnagram(string a, string b)
{
	int n1, n2;
	n1 = a.length();
	n2 = b.length();
	string v = "false";
	if (n1 != n2)
		return v;
	else
	{
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
	}
	string name;
	string m = "it is an a..\n";
	for (int i = 0; i < n1; i++)
	{
		if (a[i] != b[i])
		{
			name = "not anagram";
			return name;
		}
		else
			
			return m;
	}
}

int main()
{
	string f, t;
	cout << "Enter two strings\n";
	cin >> t;
	cin >> f;
	cout << isAnagram(f, t) << endl;
    return 0;
}

