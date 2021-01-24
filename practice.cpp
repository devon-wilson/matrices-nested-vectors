#include <iostream>
#include <vector>
 
using namespace std;
int main()
{
	vector<vector<int> > johnson;
	vector<int> johnsonJr;
	vector<vector<int> > jordan;
	vector<int> jordanJr;
	int row1, col1, row2, col2, i, h, j, k, l, m, n, o, temp, r;
	int counter = 0;
	cout << "Enter rows of first matrix " << endl;
	cin >> row1;
	cout << "Enter columns of first matrix " << endl;
	cin >> col1;
	cout << "Enter rows of second matrix " << endl;
	cin >> row2;
	cout << "Enter columns of second matrix " << endl;
	cin >> col2;	
	cout << "Enter johnson values " << endl;
	cout << endl;
	for(j = 0; j < row1; j++)
	{
		for(k = 0; k < col1; k++)
		{
			cout << "Enter row " << j + 1 << "column " << k + 1 << " value " << endl;
			cin >> temp;
			johnsonJr.push_back(temp);
			counter++;
		}
		johnson.push_back(johnsonJr);
		johnsonJr.clear();
	}
	cout << "Enter jordan values " << endl;
	for(i = 0; i < row2; i++)
        {
                for(h = 0; h < col2; h++)
                {
                        cout << "Enter row " << i + 1 << "column " << h + 1 << " value " << endl;
                        cin >> temp;
                        jordanJr.push_back(temp);
                }
		jordan.push_back(jordanJr);
		jordanJr.clear();
        }	
	cout << endl;
	cout << "matrix johnson " << endl;
	for(l = 0; l < row1; l++)
        {
                for(m = 0; m < col1; m++)
                {
                        cout << johnson[l][m];
                }
		cout << endl;
        }
	cout << endl;
	cout << "matrix jordan " << endl;
        for(n = 0; n < row2; n++)
        {
                for(o = 0; o < col2; o++)
                {
                        cout << jordan[n][o];
                }
                cout << endl;
        }
}
