#include <iostream>
#include <cmath>

double function(double x = 0)
{
	double y = 0;
	double z = 0;
	double t = 0;

	z = sin(x) * sin(x) * sin(x);
	t = cos(x) * cos(x) * cos(x);
	z = z + t;
	y = z * log(x);
	return y;
}

void Display_B(double[5], char[], int, double[5]);

void Display_A(double xn, double xk, char[], int, double[50]);

int main()
{
	double results_task_A[50] = { 0 };
	double xn = 0.11;
	double xk = 0.36;
	double dx = 0.05;
	int i = 0;
	char a[] = {'T','a','s','k',' ','A'};
	while (xn <= xk)
	{
		*(results_task_A + i) = function(xn);
		i++;
		xn = xn + dx;
	}

	xn = 0.11;

	Display_A(xn, xk, a, i, results_task_A);

	char b[] = { 'T','a','s','k',' ','B' };
	const int n = 5;
	double task_B[n] = { 0.2,0.3,0.38,0.43,0.57 };
	double results_task_B[n] = {0,0,0,0,0};
	for (int i = 0; i != n; )
	{
		*(results_task_B + i) = function(*(task_B + i));
		i++;
	}

		std::cout << std::endl;
		std::cout << std::endl;

	Display_B(task_B, b, n, results_task_B);
}

void Display_A(double xn = 0, double xk = 0, char d[] = { }, int j = 0, double g[50] = { 0 })
{
	int k = j;
	for (int j = 0; j < 8; j++)
	{
		 if ((j==1)||(j == 3) || (j == 5)||(j==7))
				{
					for (int i = 1; i < 39; i++)
					{
						std::cout << "--";
					}
				}
		else if (j == 2)
		{
			 std::cout << std::endl << "|";
			 for (int i = 1; i < 18; i++)
			 {
				 std::cout << "  ";
			 }
			 for (int i = 0; i < 6; i++)
			 {
				 std::cout << d[i];
			 }
			 for (int i = 1; i < 18; i++)
			 {
				 std::cout << "  ";
			 }
			 std::cout << "|" << std::endl;
		}
		
		else if (j == 4)
		{
			std::cout << std::endl << "|    X   |   ";
			while (xn <= xk)
			{
				std::cout << xn << "   |   ";
				xn = xn + 0.05;
			}
			std::cout << std::endl;
		}
		else if (j == 6)
		{
			std::cout << std::endl << "| Result | ";
			for (int i = 0; i < k ;)
			{
				std::cout << g[0+i]<<" | ";
				i++;
			}
			std::cout << std::endl;
		}
	}
}

void Display_B(double task_B[5], char d[] = { }, int j = 0, double g[50] = { 0 })
{
	int k = j;
	for (int j = 0; j < 8; j++)
	{
		if ((j == 1) || (j == 3) || (j == 5) || (j == 7))
		{
			for (int i = 1; i < 35; i++)
			{
				std::cout << "--";
			}
		}
		else if (j == 2)
		{
			std::cout << std::endl << "|";
			for (int i = 1; i < 16; i++)
			{
				std::cout << "  ";
			}
			for (int i = 0; i < 6; i++)
			{
				std::cout << d[i];
			}
			for (int i = 1; i < 16; i++)
			{
				std::cout << "  ";
			}
			std::cout << "|" << std::endl;
		}

		else if (j == 4)
		{
			std::cout << std::endl << "|    X   |   ";
			for(int i = 0; i <= j; i++)
			{
				std::cout << task_B[i] << "    |   ";
			}
			std::cout << std::endl;
		}
		else if (j == 6)
		{
			std::cout << std::endl << "| Result | ";
			for (int i = 0; i < k;)
			{
				std::cout << g[0 + i] << " | ";
				i++;
			}
			std::cout << std::endl;
		}
	}
}