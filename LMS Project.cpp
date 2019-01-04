#include<iostream>
#include <iomanip>
#include <string>
using namespace std;

// this function will check whether credit hours are between 0 to 3 or not
bool isValidCreditHours(int credit_hours){
	bool var1 = false;
	if(credit_hours>0 && credit_hours<=3){
		var1 = true;
	}
	return var1;
	
}

// this function will check whether course code is valid or not
bool isValidCourseCode(char course_code[]){
	bool values1=0, values2=0;
		for(char i = 'A'; i <= 'Z'; i++){
			if(course_code[0] == i ){
				values1=1;
			}
		}
		for(char j = 'A'; j <= 'Z'; j++){
			if(course_code[1] == j ){
				values2=1;
			}
		}
	bool value=0, value2=0, value3=0;
		for(char b = '0'; b<='9'; b++){
			if(course_code[2]==b){
				value=1;
			}
		}
		for(char c = '0'; c<='9'; c++){
			if(course_code[3]==c){
				value2=1;
			}
		}
		for(char d = '0'; d<='9'; d++){
			if(course_code[4]==d){
				value3=1;
			}
	}
	if(values1==1 && values2 == 1 && value ==1 && value2 == 1 && value3==1){
		return 1;
	}
	else{
		return 0;
	}
}

// this function will check whether semester is between 0 to 8 or not
bool isValidSemester(int semester){
	bool var = false;
	if(semester>0 && semester<=8){
		var =true;
	}
	return var;

}

// this function will check whether course name is valid or not
bool isValidCourseName(char course_name[]){
	bool value=true;
	int x=0;
	while(course_name[x] != '\0'){
		for(char y='0'; y<='9'; y++){
			if(course_name[x]==y){
				value=false;
			}
		}
		x++;
	}
	return value;
}

// this function will add course name, credit hours, semester and course name to variables
void AddCourse(string codeList[],string nameList[], int crtHrsList[], int semList[], char course_code[], int credit_hours, int semester, char course_name[]){
	static int n=0;
	if(isValidSemester(semester) == 1 && isValidCourseCode(course_code) == 1 && isValidCreditHours(credit_hours)==1 && isValidCourseName(course_name)==1){
		codeList[n]= course_code;
		crtHrsList[n]=credit_hours;
		semList[n]=semester;
		nameList[n]=course_name;
		cout << "Course has been added successfully" << endl;
	}
	n++;
	
}


//this function will check whether the course code which we want to edit is in the program.
int check_course_code(string codeList[], string edit_course_code){
	bool value=0;
		for(int x=0; x < 100; x++){
		if(codeList[x] == edit_course_code){
			value=1;
			break;
		}
	}
	return value;	
} 

//this function will return the index where details of the course are placed
int index_course_code(string codeList[], string edit_course_code){
	int index;
		for(int x=0; x < 100; x++){
		if(codeList[x] == edit_course_code){
			index=x;
			break;
		}
	}
	return index;
}
//this statement will declare edit_course and delete course for the whole program
string edit_course_code, delete_course_code;

//this function will replace a course of the specified course code with another course detail
void EditCourse(string codeList[],string nameList[], int crtHrsList[], int semList[], char course_code[], int credit_hours, int semester, char course_name[]){
		int n=index_course_code(codeList, edit_course_code);
			codeList[n]= course_code;
			crtHrsList[n]=credit_hours;
			semList[n]=semester;
			nameList[n]=course_name;
		cout << "Course has been edited successfully\n"; 
}

//this function  will delete a course which is given by the user
void DeleteCourse(string codeList[],string nameList[], int crtHrsList[], int semList[]){
	
}

int main()
{
	int option, crtHrsList[100], semList[100], credit_hours, semester;
	char course_code[6], course_name[50];
	string codeList[100], nameList[100];
	int a=1;
	
	while(a){
	
	cout << "** Welcome to University Learning Management System ** \nChoose the following option: ";
	cout << endl << "1 	Add Course" << endl;
	cout << "2	Update Course" << endl;
	cout << "3	Delete Course" << endl;
	cout << "4 	View All Courses" << endl;
	cout << "5	View Courses of a Semester" << endl;
	cout << "6 	Exit Program" << endl << endl;
	cout << "Choose the option: ";
	cin >> option;
	cout << endl;
	
	switch(option){
		
		case 1:
			{
				cout << "Enter the details of the course: ";
				cin >> course_code >> credit_hours >> semester;
				cin.get(course_name, 100);
			
					if(isValidCourseCode(course_code) == 0){
						cout << "Invalid Course Code\n";
					}
					if(isValidCreditHours(credit_hours) ==0){
						cout << "Invalid Credit" << endl;
					}
					if(isValidSemester(semester)==0){
						cout << "Invalid Semester\n";
					}
					bool b=isValidCourseName(course_name);
						if(b==false){
					cout << "Invalid Course Name\n";
					}
			
				AddCourse(codeList,nameList, crtHrsList, semList,course_code, credit_hours, semester, course_name);
				break;
				
			}
			
			
		case 2:
			{
				cout << "Enter the course code to edit: ";
				cin >> edit_course_code;
				
					if(check_course_code(codeList, edit_course_code)==0){
						cout << endl << "This is no course by this course code";
					}
					else
					{
						cout << "Enter the new details of the course: ";
						cin >> course_code >> credit_hours >> semester;
						cin.get(course_name, 100);
						
						EditCourse(codeList,nameList, crtHrsList, semList,course_code, credit_hours, semester, course_name);
					}
					
				break;
			}
			
		case 3:
			{
				cout << "Enter the course code to delete: ";
				cin >> delete_course_code;	
					
					if(check_course_code(codeList, delete_course_code)==0){
						cout << endl << "This is no course by this course code";
					}
					else
					{
						DeleteCourse(codeList, nameList, crtHrsList, semList, course_code, credit_hours, semester, course_name);
	
					}
				break;
			}
				
			
			
			
			
			
			
		case 6:
			{
				a=0;
				break;
			}
			
		default:
			{
				cout << endl << "Invalid Option. Please select from 1 to 6. ";
			}
		   
	}
	
	cout << endl;
	cout << endl;
}
	return 0;
}
