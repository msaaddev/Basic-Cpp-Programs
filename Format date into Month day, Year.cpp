#include <iostream>
#include <string>
using namespace std;

bool check(char day[])
{
	int int_day = atoi(day);
	bool value=0;	
		if(int_day >0 && int_day <=31){
			value = true;
		}
	if(value == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char date[10] = {'\0'}, day[3] = {'\0'}, mon[3] = {'\0'}, year[5] = {'\0'};
    int a=0, b=0, c=0;
	string month;
    
    do
    {
    	
	
    cout << "Enter date in format dd-mm-yyyy: ";
    cin >> date;
    cout << endl;
    cout << endl;
    
    	for(int x=0; x < 10; x++)
    	{
    		if(date[x] != '-')
    		{
    			if(x>=0 && x<2)
    			{
    				day[a] = date[x];
    				a++;
    				
				}
				else if(x>2 && x<5)
				{
					mon[b] = date[x];
					b++;
				}
				else if(x>5 && x <= 9)
				{
					year[c] = date[x];
					c++;
				}
				
			}
		}
		
	}while(check(day) ==0);	
	
	int option = atoi(mon);
	switch(option)
	{
		case 01:
			month = "Jan";
			break;
		
		case 02:
			month = "Feb";
			break;

		case 03:
			month = "Mar";
			break;
		case 04:
			month = "Apr";
			break;	
		case 05:
			month = "May";
			break;
		case 06:
			month = "Jun";
			break;	
		case 07:
			month = "Jul";
			break;
		case  8:
			month = "Aug";
			break;	
		case 9:
			month = "Sep";
			break;
		case 10:
			month = "Oct";
			break;
		case 11:
			month = "Nov";
			break;
		case 12:
			month = "Dec";
			break;
		default:
			cout << "nInvalid date.\n";
	}

		cout << "Date: " << month << " " << day << ", " << year;	

}

