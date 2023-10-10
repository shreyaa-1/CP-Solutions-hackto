#include <bits/stdc++.h>

#define B007 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout << "YES";
#define no cout << "NO";
#define ll long long int
using namespace std;
void A007();


void Solution()
{
	int n, p, _2s_power = 0, a;
	cin >> n;

	int _2s[n] = {};
	for(p = 0; p < n; p++)
	{
		cin >> a;
		while(a % 2 == 0)
		{
			a /= 2;
			_2s_power++;
		}

		a = p+1;
		while(a % 2 == 0)
		{
			a /= 2;
			_2s[p]++;
		}
	}

	sort(_2s, _2s+n, greater<int>());

	for(p = 0; p < n; p++)
	{
		if(_2s_power >= n)
		{
			break;
		}
		_2s_power += _2s[p];
	}

	if(p == n)cout << -1;
	else cout << p;
}


int main()
{
	A007();
	B007
	
	int TEST_CASE = 1;

	cin >> TEST_CASE; 

	while(TEST_CASE--)
	{
		Solution();
		cout << "\n";
	}

	return 0;
}


void A007()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
