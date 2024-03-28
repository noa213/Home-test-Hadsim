#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int choice, option;
	int height, width;
	double remainder;

	cout << "Press-\n1 to rectangle tower\n2 to triangle tower\n3 to exit" << endl;
	cin >> choice;
	while (choice != 3)
	{
		switch (choice)
		{
		case 1:
			cout << "Press the height and width of the tower:" << endl;
			cin >> height >> width;
			if (height == width || abs(height - width) > 5)
				cout << "The area of ​​the rectangle: " << height * width << endl;
			else
				cout << "The scope of the rectangle: " << (height + width) * 2 << endl;
			break;
		case 2:
			cout << "Press the height and width of the tower:" << endl;
			cin >> height >> width;
			cout << "Press-\n1 to the scope of the triangle\n2 to print the triangle" << endl;
			cin >> option;
			switch (option)
			{
			case 1:
				remainder = sqrt(height * height + (width / 2) * (width / 2));
				cout << "The scope of the triangle: " << remainder * 2 + width << endl;
				break;
			case 2:
				if (width % 2 == 0 || width > 2 * height)
					cout << "The triangle cannot be printed." << endl;
				else
				{
					for (int i = 0; i < width / 2; i++)
						cout << " ";
					cout << "*" << endl;
					int lines = (height - 2) / (width / 2 - 1);
					int firstLine = (height - 2) % (width / 2 - 1);
					int num = width / 2 - 1;
					int printLines = 1;
					while (printLines < height - 1)
					{
						for (int j = 0; j < lines + firstLine; j++)
						{
							for (int k = 0; k < num; k++)
								cout << " ";
							for (int k = 0; k < width - num * 2; k++)
								cout << "*";
							cout << endl;
							printLines++;
						}
						num--;
						firstLine = 0;
					}
					for (int i = 0; i < width; i++)
						cout << "*";
					cout << endl;
				}
			}
		}
		cout << "Press-\n1 to rectangle tower\n2 to triangle tower\n3 to exit" << endl;
		cin >> choice;
	}
}