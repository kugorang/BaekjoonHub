#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> numberQueue;

	int inputN, inputM;

	scanf("%d", &inputN);

	for (int i = 1; i <= inputN; i++)
	{
		numberQueue.push(i);
	}

	scanf("%d", &inputM);

	printf("<");

	for (int i = 0; i < inputN; i++)
	{
		for (int i = 0; i < inputM - 1; i++)
		{
			numberQueue.push(numberQueue.front());
			numberQueue.pop();
		}

		if (i == inputN - 1)
		{
			printf("%d>", numberQueue.front());
		}
		else
		{
			printf("%d, ", numberQueue.front());
			numberQueue.pop();
		}
	}

	return 0;
}