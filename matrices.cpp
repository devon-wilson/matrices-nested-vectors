#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
const int MAX_ARRAY = 100;
int main()
{
	vector<vector<int> > a; 
	vector<int> tempA;
	vector<int> tempB;
	vector<vector<int> > b;
	vector<vector<int>  > add;
	vector<vector<int> > sub;
	vector<vector<int> > mult;
	vector<vector<int> > scalA;
	vector<vector<int> > scalB;
	int r1, c1, r2, c2, i, j, tempAVar, tempBVar;
	cout << "Enter rows of first matrix: " << endl; 
	cin >> r1;
	cout << "Enter columns for first matrix: " << endl;
	cin >> c1;
	cout << "Enter rows for second matrix: " << endl;
	cin >> r2; 
	cout << "Enter columns for second matrix: " << endl;
	cin >> c2;
	cout << endl;
	while (c1!=r2)
	{
		cout << "Error! column of first matrix not equal to row of second.";
		cout << "Enter rows and columns for first matrix: ";
		cin >> r1 >> c1;
		cout << "Enter rows and columns for second matrix: ";
		cin >> r2 >> c2;
	}
	cout << endl;
	cout << "Enter elements of matrix 1:" << endl;
	for(i = 0; i < r1; i++)
        {
                for(j = 0; j < c1; j++)
                {
                        cout << "Enter row " << i + 1 << "column " << j + 1 << "'s value; " << endl;
                        cin >> tempAVar;
                        tempA.push_back(tempAVar);
                }
                a.push_back(tempA);
                tempA.clear();
        }
	cout << endl;
	for(i = 0; i < r2; i++)
        {
                for(j = 0; j < c2; j++)
                {
                        cout << "Enter row " << i + 1 << "column " << j + 1 << " value " << endl;
                        cin >> tempBVar;
                        tempB.push_back(tempBVar);
                }
                b.push_back(tempB);
                tempB.clear();
        }
	cout << endl;
        cout << endl << "the matrices you entered are" << endl;
	cout << endl;
        for(i = 0; i < r1; ++i)
        {
                for(j = 0; j < c1; ++j)
                {
                        cout << a[i][j] << " ";
                }
                cout << endl;
        }
	cout << endl;
        cout << "And " << endl;
	cout << endl;
        for(i = 0; i < r2; ++i)
        {
                for(j = 0; j < c2; ++j)
                {
                        cout << b[i][j] << " ";
                }
                cout << endl;
        }
	vector<int> addTemp;
	int addTempVar;
	for(i = 0 ; i < r1; ++i)
	{
                for(j = 0; j < c2; ++j)
		{
     	               addTempVar = a[i][j] + b[i][j];
			addTemp.push_back(addTempVar);
		}
		add.push_back(addTemp);		
		addTemp.clear();
	}
	vector<int> subTemp;
	int subTempVar;
        for(i = 0; i < r1; ++i)
        {
                for(j = 0; j < c2; ++j)
                {
			subTempVar = a[i][j] - b[i][j];
			subTemp.push_back(subTempVar);
                }
		sub.push_back(subTemp);		
		subTemp.clear();
        }
	vector<int> multTemp;
	int multTempVar;
	int k;
	for(i = 0; i < r1; ++i)
	{
		for(j = 0; j < c2; ++j)
		{
			for(k = 0; k < c1; ++k)
			{
				multTempVar =  a[i][k] * b[k][j];
				multTemp.push_back(multTempVar); 
				//mult[i][j] += a[i][k] * b[k][j];
			}
			mult.push_back(multTemp);
			multTemp.clear();
		}
	}
	vector<int> scalATemp;
	int scalATempVar;
        for(i = 0; i < r1; ++i)
        {
                for(j = 0; j < c2; ++j)
                {
			scalATempVar = 2 * a[i][j];
			scalATemp.push_back(scalATempVar);
                }
		scalA.push_back(scalATemp);
		scalATemp.clear();
        }
	vector<int> scalBTemp;
	int scalBTempVar;
        for(i = 0; i < r1; ++i)
        {
                for(j = 0; j < c2; ++j)
                {
			scalBTempVar = 2* b[i][j];
			scalBTemp.push_back(scalBTempVar);
                }
		scalB.push_back(scalBTemp);
		scalBTemp.clear();
        }
        cout << endl << "A + B =" << endl;
        for(i = 0; i < r1; ++i)
        {
                for(j = 0; j < c2; ++j)
                {
			if(j == 1)
                        {
                                cout << " ";
                        }
                        cout << add[i][j];
                        if(j == c2-1)
                        {
                                cout << endl;
                        }
                }
        }
        cout << endl << "A - B =" << endl;
        for(i = 0; i < r1; ++i)
        {
                for(j = 0; j < c2; ++j)
                {
			if(j == 1)
			{
				cout << " ";
			}
                        cout << sub[i][j];
                        if(j == c2-1)
                        {
                                cout << endl;
                        }
                }
        }
	cout << endl << "A * B =" << endl;
	for(i = 0; i < r1; ++i)
	{
		for(j = 0; j < c2; ++j)
		{
			if(j == 1)
                        {
                                cout << " ";
                        }
			cout << mult[i][j];
			if(j == c2-1)
			{
				cout << endl;
			}
		}
	}
        cout << endl << "2 * A =" << endl;
        for(i = 0; i < r1; ++i)
        {
                for(j = 0; j < c2; ++j)
                {
			if(j == 1)
                        {
                                cout << " ";
                        }
                        cout << scalA[i][j];
                        if(j == c2-1)
                        {
                                cout << endl;
                        }
                }
        }
        cout << endl << "2 * B = " << endl;
        for(i = 0; i < r1; ++i)
        {
                for(j = 0; j < c2; ++j)
                {
			if(j == 1)
                        {
                                cout << " ";
                        }
                        cout << scalB[i][j];
                        if(j == c2-1)
                        {
                                cout << endl;
                        }
                }
        }
	return 0;
}



