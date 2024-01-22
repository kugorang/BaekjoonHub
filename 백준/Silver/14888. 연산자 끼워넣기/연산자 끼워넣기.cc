#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int inputNum, storeNum[100];
	char signNum[99] = { 0 };

	scanf("%d", &inputNum);

	for (int i = 0; i < inputNum; i++)
	{
		scanf("%d", &storeNum[i]);
	}

	int nextPos = 0;

	for (int i = 0; i < 4; i++)
	{
		int sign;

		scanf("%d", &sign);

		for (int j = nextPos; j < nextPos + sign; j++)
		{
			switch (i)
			{
			case 0:
				signNum[j] = '+';
				break;
			case 1:
				signNum[j] = '-';
				break;
			case 2:
				signNum[j] = '*';
				break;
			case 3:
				signNum[j] = '/';
				break;
			}
		}

		nextPos += sign;
	}

	sort(signNum, signNum + inputNum - 1);

	int minValue = 1000000000, maxValue = -1000000000;

	do
	{
		int tmpValue = 0;

		for (int i = 0; i < inputNum - 1; i++)
		{
			switch (signNum[i])
			{
			case '+':
				if (i == 0)
				{
					tmpValue = storeNum[i] + storeNum[i + 1];
				}
				else
				{
					tmpValue += storeNum[i + 1];
				}				
				break;
			case '-':
				if (i == 0)
				{
					tmpValue = storeNum[i] - storeNum[i + 1];
				}
				else
				{
					tmpValue -= storeNum[i + 1];
				}
				break;
			case '*':
				if (i == 0)
				{
					tmpValue = storeNum[i] * storeNum[i + 1];
				}
				else
				{
					tmpValue *= storeNum[i + 1];
				}
				break;
			case '/':
				if (i == 0)
				{
					tmpValue = storeNum[i] / storeNum[i + 1];
				}
				else
				{
					tmpValue /= storeNum[i + 1];
				}
				break;
			}
		}

		if (minValue > tmpValue)
		{
			minValue = tmpValue;
		}
		
		if (tmpValue > maxValue)
		{
			maxValue = tmpValue;
		}
	} while (next_permutation(signNum, signNum + inputNum - 1));

	printf("%d\n%d", maxValue, minValue);

	return 0;
}