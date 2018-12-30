#include <iostream>
using namespace std;
int main()
{
	int maximum, a;
		maximum=0;
		while (a!=-1)
			{
				cout << "enter the number=";
				cin	 >> a;
				if (a<-1)
					{
					}
				else
					{
						if (a>maximum)
							{
								maximum=a;
							}
						else
							{
							}
					}
			}
		cout << "Maximum number=" << maximum;
		return 0;
}
