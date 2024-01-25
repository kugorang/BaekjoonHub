#include <cstdio>

int main()
{
	int number, dp[1000], inputNum[1000];
	int max = 0;

	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		scanf("%d", &inputNum[i]);
	}

	for (int i = 0; i < number; i++)
	{
		int min = 0;

		for (int j = 0; j < i; j++)
		{
			if (inputNum[i] > inputNum[j]) 
			{
				if (min < dp[j])
				{
					min = dp[j];
				}
			}
		}

		dp[i] = min + 1;

		if (max < dp[i])
		{
			max = dp[i];
		}
	}

	printf("%d\n", max);

	return 0;
}