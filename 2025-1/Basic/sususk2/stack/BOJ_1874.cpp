#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	vector<char> v;
	stack<int> s;
	int n;
	cin >> n;
	int x;
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		
		while (1)
		{

			if (s.empty())
			{
				v.push_back('+');
				s.push(cnt);
			}
			else if (s.top()< x)
			{
				v.push_back('+');
				s.push(cnt);
			}
			else if (s.top() == x)
			{
				v.push_back('-');
				s.pop();
				break;
			}
			else
			{
				cout << "NO";
				return 0;
			}
			
			cnt++;
		}

	}
	
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}
	return 0;
}
