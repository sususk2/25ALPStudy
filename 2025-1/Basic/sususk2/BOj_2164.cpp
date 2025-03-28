#include<iostream>
#include<queue>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	queue<int> q;
	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);


	}

	while (1)
	{
		if (q.size() == 1)
			break;

		q.pop();
		q.push(q.front());
		q.pop();


	}
	cout << q.front();

	
}
