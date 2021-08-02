// Arrays  11  2/3     

/* write  a   program   that declare a matrix n*n and read and store values in
the matrix and display the average of values of the two diagonals (main and off
diagonal )
evaluate the transpose of the matrix (changing rows by columns and vise versa)

Note : i just code the algorithm to solve the proplem i dont take care about
the validation and the input errors of the user (No test cases)
__________________________________________________________________________*/

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

/* Matrix transpose  */

int main() {
	int n;
	float avg1 = 0, avg2 = 0;
	cout << "enter the size of the square matrix  \n";

	cin >> n;
	int mat[n][n];

	cout << "fill the square matrix ";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << mat[i][j] << " ";

			if (i == j) {
				avg1 += mat[i][j];
			}
		}
		cout << "\n";
		avg2 += mat[i][n - i - 1]; // sater so8ayer bas 3aizm
	}

	cout << "\naverage of main diagonal is " << avg1 / n << "\n\n";
	cout << "average of off  diagonal is " << avg2 / n << "\n\n";

	cout << "Transpose of the matrix  \n\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << mat[j][i] << " ";
		}
		cout << "\n";
	}

	return 0;
}
