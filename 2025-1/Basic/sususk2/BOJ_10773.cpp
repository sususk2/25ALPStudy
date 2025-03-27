#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int n;
	stack<int>s;
	cin >> n;
	int sum=0;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 0)
		{
			s.pop();

		}
		else
		{
			s.push(x);

		}


	}
	for (int i = 0; i < s.size(); i++)
	{
		while (!s.empty())
		{
			sum += s.top();
			s.pop();

		}

	}
	cout << sum;
}
