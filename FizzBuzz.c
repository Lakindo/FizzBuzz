#include <stdio.h>

int main() {
	
	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0)

			printf("Fizz\n", i);


		 if (i % 5 == 0)

			printf("Buzz\n", i);

		 if (((i % 3) || (i % 5)) == 0)

			printf("FizzBuzz\n", i);

		 if ((i % 3 != 0) && (i % 5 != 0))

			printf("number = %d\n", i);

	}

	return 0;

}
