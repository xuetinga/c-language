# include <stdio.h>

int main(void)
{
	int i, j;

	for (i=0; i<3; ++i)
		for (j=2; j<5; ++j)
			printf("����!\n");
		printf("����!\n");

	return 0;
}
/*
	��Vc++6.0�е���������:
----------------------
����!
����!
����!
����!
����!
����!
����!
����!
����!
����!
Press any key to continue
----------------------
*/