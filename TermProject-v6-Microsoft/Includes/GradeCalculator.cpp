/*
    ? This program combines takes in user grades and averages the input and stores in a .txt file
*/ 


#include <iostream> 
#include <fstream>
#include <string> 
#include <vector> 
using std:: cout; 
using std:: endl; 
using std:: cin; 
using std:: string; 


void StudentInfo(); 


class Student
{
    public: 
        void setStudentInfo(string getName,string getClass, int getGrade)
        {
            name = getName;   
            className = getClass; 
            grade = getGrade; 
        }

        string getStudentName()
        {
            return name; 
            
        }
        string getStudentClass()
        {
            return className; 
        }
        int getStudentGrade()
        {
            return grade; 
        }

    private: 
        string name; 
        string className;
        int grade; 
}; 


void StudentInfo()
{
    // Declaring File to Store In: 
    std:: fstream studentAverage; 
    studentAverage.open("StudentAverage1.txt", std::ios::app); 

    char menuOption; 

    
    Student student1; 
    string student1Name, student1Class; 

    cout << "-----ENTERING GRADE AVERAGE CALCULATOR-----" << endl; 
    
    cin.ignore(); // for some reason without this, it skips over the student1Name; 
    //studentAverage << student1Name << endl;   // storing the variables in the file 
    
    cout << "Enter student name: " << endl; 
    getline(cin,student1Name); 
    studentAverage << student1Name << endl;   // storing the variables in the file 


    
    cout << "Enter class name: " << endl; 
    getline(cin,student1Class);
    studentAverage << student1Class << endl; 

    //////////////GETTING STUDENT GRADES AND PRINTING THE AVERAGES: 

    double vectorSize,vectorValues = 0, sumOfGrades = 0; 
    std:: vector<int> studentGradesList; 
    cout << "Enter amount of grades: " << endl; 
    cin >> vectorSize; 
            
    // user input loop for entering in Grades: 
    for(int i = 0; i < vectorSize; i++)
    {
        cout << "Grade: [" << i + 1 << ": ] " << endl; 
        cin >> vectorValues;
        studentGradesList.push_back(vectorValues); // puting studentGrades (vectorValues) into the Vector List
        sumOfGrades = sumOfGrades + vectorValues; 
        studentAverage << vectorValues << endl; // Storing Grades into .txt file 
                
    }

    //Printing studentGradesList: 
    for(int i = 0; i <vectorSize; i++)
    {
        cout << "Grade #: " << i + 1 << " = " <<   studentGradesList[i] << endl; 
    }
            
    cout << endl; 
    cout << endl; 

    //Printing and Storing Grade Averages: 
    double averageOfGrades = sumOfGrades / vectorSize; 
    cout << "GRADE AVERAGE: " << averageOfGrades << endl; 
    studentAverage << "GRADE AVERAGE OF: " << student1Class << ": " << averageOfGrades << endl; 
    studentAverage << endl; 

    cout << endl; 
    int choice; 
    cout << "Enter more grades? Press 1 to continue or 0 to quit: " << endl; 
    cin >> choice; 

    if(choice == 0)
    {
        studentAverage.close(); 
        exit(1); 
    }
    else
    {
        StudentInfo(); // wont ask for the Student Name; 
    }

}

