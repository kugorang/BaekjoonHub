#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int inputNum;

	// stack을 배열로 구현한 이유는 문제 의도가 stl을 사용해서 문제를 풀라는 건 아닌 거 같아서다.
	// 연습 삼아 1차원 배열로 구현하였다.
	int stackNum[10000];
	int stackSize = 0;

	scanf("%d", &inputNum);

	for (int i = 0; i < inputNum; i++)
	{
		char inputCmd[100];

		// 먼저 명령어부터 받는다.
		scanf("%s", inputCmd);

        if (!strcmp(inputCmd, "push"))
        {
            // push면 숫자를 한 번 더 받는다.
            int pushNum;
            scanf("%d", &pushNum);
            
            stackNum[stackSize++] = pushNum;
        }
		else if (!strcmp(inputCmd, "pop"))
		{
			if (stackSize > 0)
			{
				printf("%d\n", stackNum[stackSize - 1]);
				--stackSize;
			}
			else // stackSize == 0
			{
				printf("%d\n", -1);
			}
		}
		else if (!strcmp(inputCmd, "size"))
		{
			printf("%d\n", stackSize);
		}
		else if (!strcmp(inputCmd, "empty"))
		{
			if (stackSize != 0)
			{
				printf("%d\n", 0);
			}
			else // stackSize == 0
			{
				printf("%d\n", 1);
			}
		}
		else if (!strcmp(inputCmd, "top"))
		{
			if (stackSize > 0)
			{
				printf("%d\n", stackNum[stackSize - 1]);
			}
			else // stackSize == 0
			{
				printf("%d\n", -1);
			}
		}
	}

	return 0;
}