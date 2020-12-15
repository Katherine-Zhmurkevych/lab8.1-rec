//рекурсивний спосіб
#include <iostream>
using namespace std;

int count(char* charSequence)
{
	int counter = 0;
	int i = 1; 
	if (i < strlen(charSequence))
	{
		if (charSequence[i] == 'a' || charSequence[i] == 'b' || charSequence[i] == 'c')
		{
			if (charSequence[i + 1] == 'a' || charSequence[i + 1] == 'b' || charSequence[i + 1] == 'c')
			{
				if (charSequence[i - 1] == 'a' || charSequence[i - 1] == 'b' || charSequence[i - 1] == 'c')
				{
					counter++;
						i++;
						count(charSequence);
				}
			}
		}
	}
	return counter;
}
char* modifying(char* charSequence)
{
	int counter = 0;
	int i = 1; 
	if (i < strlen(charSequence))
	{
		if (charSequence[i] == 'a' || charSequence[i] == 'b' || charSequence[i] == 'c')
		{
			if (charSequence[i + 1] == 'a' || charSequence[i + 1] == 'b' || charSequence[i + 1] == 'c')
			{
				if (charSequence[i - 1] == 'a' || charSequence[i - 1] == 'b' || charSequence[i - 1] == 'c')
				{
					charSequence[i] = '*';
					charSequence[i - 1] = '*';
					charSequence[i + 1] = '*';
					i++;
					modifying(charSequence);
				}
			}
		}
	}
	return charSequence;
}

int main()
{
	char charSequence[100];
	cout << "Enter string: " << endl;
	cin.getline(charSequence, 100);
	cout << "Number of letter combinations : " << count(charSequence) << endl;
	cout << "Modified string: " << modifying(charSequence);
}