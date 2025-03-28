#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	string s;
	int x;
	queue<int> q;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == "push")
		{
			cin >> x;
			q.push(x);

		}
		else if (s == "pop")
		{
			if (q.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{

				cout << q.front() << "\n";
				q.pop();
			}

		}
		else if (s == "size")
		{
			cout << q.size() << "\n";

		}
		else if (s == "empty")
		{
			if (q.empty())
			{
				cout << "1" << "\n";

			}
			else cout << "0" << "\n";
		}
		else if (s == "front")
		{
			if (q.empty())
			{
				cout << "-1" << "\n";

			}
			else cout << q.front() << "\n";
		}
		else if (s == "back")
		{

			if (q.empty())
			{
				cout << "-1" << "\n";

			}
			else cout <<q.back() << "\n";
		}



	}

	
}
