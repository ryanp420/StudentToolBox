#include <iostream> 
#include <cmath>
#include "Calculator.h"
#include "GradeCalculator.h"
#include "Trigonometric.h"
#include "Game.h"

using std:: cout; 
using std:: endl; 
using std:: cin; 

void menuOption(); 


void gameMenu()
{
    int gameChoice; 
    cout << "Press [1] to begin the Game! " << endl; 
    cout << "Press [0] to go back: " << endl; 
    while(cin >> gameChoice) 
    {
        if (gameChoice == 1)
            gameMain();
        else if(gameChoice == 0)
            menuOption(); 
    }
}

void studentAverageGradeCalc()
{   
    int studentAverageOption; 
    cout << "You selected Grade Calculator, Press 1 to continue or 0 to go back: " << endl; 
    cin >> studentAverageOption; 
    if(studentAverageOption == 1)
    {
        system("cls"); 
        StudentInfo();
    }
    else
        menuOption();  
}

// ** CALCULATOR OPTIONS 

void trigonometricMenu()
{
    system("cls"); 
    int choice;
    cout << "Press [1] to enter Trigonometric Calculator" << endl;
    cout << "Press [0] to go back" << endl; 

    while(cin >> choice)
    {
        if(choice == 1)
            trigMain(); 
        else if(choice == 0)
            menuOption(); 
    }



/* 
    cout << "0. Convert Radians to Degrees " << endl;
    cout << "1. Convert Degrees to Radians " << endl; 

    cout << "2. Find the Sine(x) " << endl; 
    cout << "3. Find the Cosine(x) " << endl; 
    cout << "4. Find the Tangent(x) " << endl; 

    cin >> choice; 
*/ 

}

void alegbraicMenu()
{
    system("cls"); 
    int choice;
    cout << "------Enter Algebraic Option:----- " << endl; 
    cout << "1. Quadratic Formula " << endl; 
    cout << "2. Find Hypotenuse " << endl; 

    cin >> choice; 

    if (choice == 1)
    {   
        cout << "Entering Quadratic Formula Calculator" << endl;  
        quadraticFormula(); 
    }
    else{
        cout << "Entering Hypotenuse Calculator" << endl; 
        findHypotenuse(); 
    }
     
}

void calculatorMenu()
{
    system("cls");
    int calculatorMenuOption;  
    // Menu 
    cout << "-----THIS IS THE CALCULATOR MENU SECTION-----" << endl; 
    cout << "1. Simple Arithmetic " << endl; 
    cout << "2. Algebraic " << endl; 
    cout << "3. Trigonometric " << endl; 

    cout << "4. Other Arithmetic  " << endl; 
    cout << "5. Factorials " << endl; 


    
    cout << endl; 
    cout << "Select option or press 0 to go back: " << endl; 
    cin >> calculatorMenuOption; 

// Go back to main menu 
    if(calculatorMenuOption== 0)
    {
        system("cls"); 
        menuOption(); 
    }

// Operation Selection: 
    system("cls"); 

    switch(calculatorMenuOption)
    {
        case 1: 
            calculatorMenuOption = 1; 
            cout << "ENTERING ARITHMETIC CALCULATOR" << endl;
            calculateOperation(); // Calculator.cpp 
            break; 
        case 2:
            calculatorMenuOption = 2; 
            alegbraicMenu(); // Calculator.cpp 
            break; 
        case 3: 
            calculatorMenuOption = 3; 
            //trigonometricMenu(); 
            cout << "-----ENTERING TRIGONOMETRIC MENU" << endl;
            trigonometricMenu(); 
            break; 

        case 4: 
            calculatorMenuOption = 4;
            cout << "Entering other Arithmetic: " << endl;
            system("cls"); 
            otherArithmetic();  
            break;

        case 5: 
            calculatorMenuOption = 5; 
            cout << "Entering Factorials Calculator" << endl; 
            findFactorial(); 
            break; 

        default: 
            cout << "INVALID OPTION" << endl; 
            break; 
    }
}

// ** CALCULATOR OPTIONS END 

void menuOption()

{   
    int menuOption; 
    cout << "----------WELCOME TO STUDENT TOOL BOX!----------" << endl; 
    cout << "Option 1: Calculator " << endl; 
    cout << "Option 2: Grade Average Calculator " << endl; 
    cout << "Option 3: Game " << endl; 

    cout << "Enter Option Number!" << endl; 
    std:: cin >> menuOption; 

    switch(menuOption)
    {
        case 1: 
            menuOption = 1; 
            cout << "-----ENTERING CALCULATOR-----" << endl; 
            calculatorMenu(); // go to calculator menu page 
            //calculateOperation(); // Function is Initiated from Calulator.cpp
            break; 
        case 2: 
            menuOption = 2; 
            cout << "-----ENTERING GRADE AVERAGE CALCULATOR-----" << endl; 
            studentAverageGradeCalc(); 
            break; 
        case 3: 
            menuOption = 3; 
            cout << "-----ENTERING GAME OPTION-----" << endl; 
            gameMenu(); 
            break; 

        default: 
            cout << "INVALID OPTION" << endl; 
            break; 
        
    }

}

