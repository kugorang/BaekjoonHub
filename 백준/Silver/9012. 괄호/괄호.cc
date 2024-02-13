#include <stdio.h>
#include <string.h>

int main()
{
	int inputNum;

	scanf("%d", &inputNum);

	for (int i = 0; i < inputNum; i++)
	{
		int braketStack[50];
		int stackSize = 0;

		char str[50];
		bool endFlag = false;

		scanf("%s", str);

		int strLen = (int)strlen(str);

		for (int j = 0; j < strLen; j++)
		{
			if (str[j] == '(')
			{
				braketStack[stackSize++] = j;
			}
			else // str[j] == ')'
			{
				if (stackSize <= 0)
				{
					endFlag = true;
					break;
				}

				--stackSize;
			}
		}

		if (endFlag || stackSize > 0)
		{
			printf("NO\n");
		}
		else // endFlag == false && bracketStac.size() == 0
		{
			printf("YES\n");
		}
	}

	return 0;
}