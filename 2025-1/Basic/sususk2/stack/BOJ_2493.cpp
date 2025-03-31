#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int cnt = 0;
	stack<pair<int,int>> s;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		while (!s.empty())
		{
			if (s.top().first > x)
			{
				cout << s.top().second << " ";//탑 위치
				break;
			}

			
			s.pop();
			


		}
		if (s.empty())
		{
			cout << "0 ";
		}

		s.push(make_pair(x,i+1));

		

	}

 
	
	return 0;
}
