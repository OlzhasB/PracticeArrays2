#include<iostream> 
#include<math.h> 
using namespace std;

#include<stdio.h> 
#include<iostream> 

void task1()
{

	int i, j, A[5][4] = { {0},{0} };

	printf("Academic perfomance:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 1 + rand() % 10;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	int count, count1;
	for (i = 0; i < 5; i++)
	{
		count = 0;
		count1 = 0;
		for (j = 0; j < 4; j++)
		{
			if (A[i][j] >= 7)
				count++;
			else
				count1++;
		}
		printf("Amount of passed exams of student %d is %d\n", i + 1, count);
		printf("Amount of failed exams of student %d is %d\n\n", i + 1, count1);
	}
	system("pause");
}


void task2()

{
	int i, j, A[5][4] = { {0},{0} }, B[5][4] = { {0},{0} };

	printf("Academic perfomance:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 1 + rand() % 10;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (A[i][j] >= 7)
				B[i][j] = 1;
			else
				B[i][j] = 0;
		}
	}

	printf("Passed/failed exams:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}


	system("pause");
}

void task3()
{

	int i, j, A[10][4] = { {0},{0} }, sum;
	float av;

	printf("Academic perfomance:\n");
	for (i = 0; i < 10; i++)
	{
		sum = 0;
		printf("Student %d: ", i + 1);
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 4 + rand() % 6;
			printf("%d ", A[i][j]);
			sum += A[i][j];
		}
		av = float(sum) / float(4);
		printf("\nAverage: %.2f\n\n", av);
	}

	printf("\nSubjects:\n");
	for (i = 0; i < 4; i++)
	{
		printf("Subject %d: ", i + 1);
		for (j = 0; j < 10; j++)
		{
			printf("%d ", A[j][i]);
		}
		printf("\n");
	}

	int exc = 0, good = 0;
	int excCount = 0, goodCount = 0;
	for (i = 0; i < 10; i++)
	{
		exc = 0;
		good = 0;
		for (j = 0; j < 4; j++)
		{
			if (A[i][j] >= 9)
				exc++;

			if (A[i][j] >= 6)
				good++;
		}
		if (exc == 4)
			excCount++;

		if (good == 4)
			goodCount++;
	}
	float excAv, goodAv;
	excAv = float(excCount) / float(10) * 100;
	goodAv = float(goodCount) / float(10) * 100;

	printf("The amount of students with excellent grades is %d\nIt is %.2f%%\n", excCount, excAv);
	printf("The amount of students with good grades is %d\nIt is %.2f%%\n", goodCount, goodAv);
	system("pause");
}

void task4()
{

	int i, j, A[8][8] = { {0},{0} }, count0 = 0, count1 = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (count0 == 2 * count1)
			{
				A[i][j] = 0 + rand() % 2;
			}
			else if (count0 > 2 * count1)
			{
				A[i][j] = 1;
			}
			else
			{
				A[i][j] = 0;
			}

			if (A[i][j] == 0)
				count0++;

			else
				count1++;
		}

	}

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	system("pause");
}

void task5()
{
	int A[5][5] = { { 0 },{ 0 } }, i, j, a, b;

	do {
		printf("Print number a: ");
		scanf_s("%d", &a);

		printf("Print number b > a: ");
		scanf_s("%d", &b);

	} while (a > b);

	printf("\nArray:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = a + rand() % (b - a);
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	system("pause");
}

void task6()
{

	int A[4][4] = { { 0 },{ 0 } }, i, j;

	printf("Given array:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 20;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}
	int count, c;
	printf("\nNew array:\n");
	for (i = 0; i < 4; i++)
	{
		count = 3;
		for (j = 0; j < 2; j++)
		{
			c = A[i][j];
			A[i][j] = A[i][count];
			A[i][count] = c;
			count--;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	system("pause");
}

void task7()
{
	int A[4][4] = { { 0 },{ 0 } }, i, j;

	printf("Given array:\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 20;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}
	int count, c;
	printf("\nNew array:\n");
	for (i = 0; i < 4; i++)
	{
		count = 3;
		for (j = 0; j < 2; j++)
		{
			c = A[j][i];
			A[j][i] = A[count][i];
			A[count][i] = c;
			count--;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	system("pause");
}

void task8()
{

	int A[4][4] = { { 0 },{ 0 } }, i, j;

	printf("Given array:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 20;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		sum += A[i][i];
	}
	printf("Sum of the main diag is %d\n", sum);

	system("pause");
}


void task9()
{
	int A[5][5] = { { 0 },{ 0 } }, i, j;

	printf("Given array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = -5 + rand() % 10;
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	printf("\nNew array:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] == 0)
			{
				A[i][j] = -1;
			}
			printf("A[%d][%d] = %d\n", i, j, A[i][j]);
		}
		printf("\n");
	}

	system("pause");
}

void task10()
{
	/*Написать программу, которая заполняет массив 5х5 оценками по 12 бальной системе, 
	преобразовать их в оценки по 5 бальной системе. Двойкой считается оценка ниже 4, тройкой – от 4 до 6 и т.д.*/
	int i, j, A[5][5] = { {0},{0} }, sum;

	cout << "12 points:" << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = 1 + rand() % 12;
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl << "5 points:" << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] < 4)
				A[i][j] = 2;

			else if (A[i][j] >= 4 && A[i][j] <= 6)
				A[i][j] = 3;

			else if (A[i][j] >= 7 && A[i][j] <= 10)
				A[i][j] = 4;

			else A[i][j] = 5;
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
}

int main()

{
	int task, flag;

start:

	printf("Write the number of task: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();
	}break;
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	}

	printf("Do you want to continue? 1 or 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}
