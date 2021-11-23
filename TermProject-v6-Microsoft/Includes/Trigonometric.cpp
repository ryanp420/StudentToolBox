#include <iostream>
#include <cmath>

using std:: cout;
using std:: endl;
using std:: cin;

// 1 Degree = pi / 180 
// Arcsine (inverse function) = sin^-1 
// √ , 𝞹
// U+221a 

/*
    This Program calculates the values Trigonometric Functions for SIN,COS,and TAN
    

*/ 

void preDefinedOptions(); 
void sinFunction(); 
void cosFunction(); 
void tanFunction(); 

const double PI = 3.1415928; 
////
const double option1 = PI/6; 
const double option2 = PI/4; 
const double option3 = PI/3; 
const double option4 = PI/2; 
////
const double option5 = (2*PI)/3;
const double option6 = (3*PI)/4;
const double option7 = (5*PI)/6;
const double option8 = PI; 
////
const double option9 = (7*PI)/6;
const double option10 = (5*PI)/4;
const double option11 = (4*PI)/3;
const double option12 = (3*PI)/2;
////
const double option13 = (5*PI)/3;
const double option14 = (7*PI)/4;
const double option15 = (11*PI)/6;
const double option16 = 0;





int preDefinedChoice; 
int units; 

int trigMain()
{
    // int units; 
    ////////////////////////////
    system("cls"); 
    cout << "------Enter Trigonometric Option:----- " << endl; 

    
    cout << "1. Degrees " << endl;  
    cout << "2. Radians" << endl; 
    cin >> units; 

    
    system("cls"); 

    int trigOperation; 
    cout << "1. Sin()" << endl; 
    cout << "2. Cos()" << endl; 
    cout << "3. Tan()" << endl;
    cin >> trigOperation; 

    if(trigOperation == 1)
        sinFunction(); 
    else if(trigOperation == 2)
        cosFunction(); 
    else
        tanFunction(); 

    

    return 0; 
}


void preDefinedOptions1() 
{
    //int preDefinedChoice; 

    cout << "Pick an option or press 0 to enter your own value: " << endl; 
    cout << "-----0 - 90 DEGREES | 0 - 𝞹/2-----" << endl;
    cout << "1. 𝞹/6" << endl;
    cout << "2. 𝞹/4" << endl; 
    cout << "3. 𝞹/3" << endl;  
    cout << "4. 𝞹/2" << endl;

    cout << "-----------" << endl;

    cout << "5. 2𝞹/3" << endl; 
    cout << "6. 3𝞹/4" << endl; 
    cout << "7. 5𝞹/6" << endl; 
    cout << "8. 𝞹 " << endl; 
    
    cout << "-----------" << endl; 

    cout << "9. 7𝞹/6" << endl; 
    cout << "10.5𝞹.4" << endl; 
    cout << "11.4𝞹/3" << endl; 
    cout << "12.3𝞹/2" << endl; 

    cout << "-----------" << endl; 

    cout << "13. 5𝞹/3" << endl; 
    cout << "14. 7𝞹/4" << endl;
    cout << "15. 11𝞹/6" << endl; 
    cout << "16. 0 " << endl; 

    cin >> preDefinedChoice; 
}

void tanFunction()
{
    double trigNumber; 
    preDefinedOptions1(); 

    if(preDefinedChoice == 0 && units == 1) // Picks Degrees as a Unit 
    {
        cout << "Enter number: " << endl; 
        cin >> trigNumber;
        cout << endl; 
        
        trigNumber == trigNumber * (PI / 180); 
        cout << "tan (" << trigNumber << ") = " << tan(trigNumber) << endl; 
        exit(1); 

    }
    else if(preDefinedChoice == 0 && units == 2) // Picks Radians as a Unit 
    {
        cout << "Enter number: " << endl; 
        cin >> trigNumber;
        cout << endl; 
        
        cout << "tan (" << trigNumber << ") = " << tan(trigNumber) << endl; 
        exit(1); 
    }
    else if(preDefinedChoice != 0)
    {
        switch(preDefinedChoice)
        {
            case 1:
                preDefinedChoice = option1; 
                cout << "tan (" << tan(option1) << ")" << endl; 
                break; 
            case 2: 
                preDefinedChoice = option2; 
                cout << "tan (" << tan(option2) << ")" << endl; 
                break; 
            case 3: 
                preDefinedChoice = option3; 
                cout << "tan (" << tan(option3) << ")" << endl; 
                break; 
            case 4: 
                preDefinedChoice = option4; 
                cout << "tan (" << tan(option4) << ")" << endl; 
                break; 
            case 5: 
                preDefinedChoice = option5; 
                cout << "tan (" << tan(option5) << ")" << endl; 
                break;
            case 6: 
                preDefinedChoice = option6; 
                cout << "tan (" << tan(option6) << ")" << endl; 
                break;
            case 7:
                preDefinedChoice = option7; 
                cout << "tan (" << tan(option7) << ")" << endl; 
                break; 
            case 8:
                preDefinedChoice = option8; 
                cout << "tan (" << tan(option8) << ")" << endl; 
                break;
            case 9: 
                preDefinedChoice = option9; 
                cout << "tan (" << tan(option9) << ")" << endl; 
                break;
            case 10: 
                preDefinedChoice = option10; 
                cout << "tan (" << tan(option10) << ")" << endl; 
                break;
            case 11:
                preDefinedChoice = option11; 
                cout << "tan (" << tan(option11) << ")" << endl; 
                break; 
            case 12:
                preDefinedChoice = option12; 
                cout << "tan (" << tan(option12) << ")" << endl; 
                break;
            case 13: 
                preDefinedChoice = option13; 
                cout << "tan (" << tan(option13) << ")" << endl; 
                break;
            case 14: 
                preDefinedChoice = option14; 
                cout << "tan (" << tan(option14) << ")" << endl; 
                break;
            case 15:
                preDefinedChoice = option15; 
                cout << "tan (" << tan(option15) << ")" << endl; 
                break;
            case 16: 
                preDefinedChoice = option16; 
                cout << "tan (" << tan(option16) << ")" << endl;   
                break; 

             default: 
                cout << "Invalid" << endl; 
                break; 
         }
     }
    int anotherOption; 
    cout << "Would you like to enter another operation? " << endl; 
    cout << "0. No" << endl; 
    cout << "1. Yes" << endl; 
    cin >> anotherOption; 
    if(anotherOption == 0)
        exit(1);
    else if(anotherOption == 1)
        trigMain(); 
}

void cosFunction()
{
    double trigNumber; 
    preDefinedOptions1(); 

    if(preDefinedChoice == 0 && units == 1) // Picks Degrees as a Unit 
    {
        cout << "Enter number: " << endl; 
        cin >> trigNumber;
        cout << endl; 
        
        trigNumber == trigNumber * (PI / 180); 
        cout << "Cos (" << trigNumber << ") = " << cos(trigNumber) << endl; 
        exit(1); 

    }
    else if(preDefinedChoice == 0 && units == 2) // Picks Radians as a Unit 
    {
        cout << "Enter number: " << endl; 
        cin >> trigNumber;
        cout << endl; 
        
        cout << "Cos (" << trigNumber << ") = " << cos(trigNumber) << endl; 
        exit(1); 
    }
    else if(preDefinedChoice != 0)
    {
        switch(preDefinedChoice)
        {
            case 1:
                preDefinedChoice = option1; 
                cout << "cos (" << cos(option1) << ")" << endl; 
                break; 
            case 2: 
                preDefinedChoice = option2; 
                cout << "cos (" << cos(option2) << ")" << endl; 
                break; 
            case 3: 
                preDefinedChoice = option3; 
                cout << "cos (" << cos(option3) << ")" << endl; 
                break; 
            case 4: 
                preDefinedChoice = option4; 
                cout << "cos (" << cos(option4) << ")" << endl; 
                break; 
            case 5: 
                preDefinedChoice = option5; 
                cout << "cos (" << cos(option5) << ")" << endl; 
                break;
            case 6: 
                preDefinedChoice = option6; 
                cout << "cos (" << cos(option6) << ")" << endl; 
                break;
            case 7:
                preDefinedChoice = option7; 
                cout << "cos (" << cos(option7) << ")" << endl; 
                break; 
            case 8:
                preDefinedChoice = option8; 
                cout << "cos (" << cos(option8) << ")" << endl; 
                break;
            case 9: 
                preDefinedChoice = option9; 
                cout << "cos (" << cos(option9) << ")" << endl; 
                break;
            case 10: 
                preDefinedChoice = option10; 
                cout << "cos (" << cos(option10) << ")" << endl; 
                break;
            case 11:
                preDefinedChoice = option11; 
                cout << "cos (" << cos(option11) << ")" << endl; 
                break; 
            case 12:
                preDefinedChoice = option12; 
                cout << "cos (" << cos(option12) << ")" << endl; 
                break;
            case 13: 
                preDefinedChoice = option13; 
                cout << "cos (" << cos(option13) << ")" << endl; 
                break;
            case 14: 
                preDefinedChoice = option14; 
                cout << "cos (" << cos(option14) << ")" << endl; 
                break;
            case 15:
                preDefinedChoice = option15; 
                cout << "cos (" << cos(option15) << ")" << endl; 
                break;
            case 16: 
                preDefinedChoice = option16; 
                cout << "cos (" << cos(option16) << ")" << endl;   
                break; 

             default: 
                cout << "Invalid" << endl; 
                break; 
         }
     
     }
    int anotherOption; 
    cout << "Would you like to enter another operation? " << endl; 
    cout << "0. No" << endl; 
    cout << "1. Yes" << endl; 
    cin >> anotherOption; 
    if(anotherOption == 0)
        exit(1);
    else if(anotherOption == 1)
        trigMain(); 
}

void sinFunction()
{
    double trigNumber; 
    preDefinedOptions1(); 

    if(preDefinedChoice == 0 && units == 1) // Picks Degrees as a Unit 
    {
        cout << "Enter number: " << endl; 
        cin >> trigNumber;
        cout << endl; 
        
        trigNumber == trigNumber * (PI / 180); 
        cout << "Sin (" << trigNumber << ") = " << sin(trigNumber) << endl;
        exit(1);  

    }
    else if(preDefinedChoice == 0 && units == 2) // Picks Radians as a Unit 
    {
        cout << "Enter number: " << endl; 
        cin >> trigNumber;
        cout << endl; 
        
        cout << "Sin (" << trigNumber << ") = " << sin(trigNumber) << endl; 
        exit(1);  

    }
    else if(preDefinedChoice != 0)
    {
        switch(preDefinedChoice)
        {
            case 1:
                preDefinedChoice = option1; 
                cout << "Sin (" << sin(option1) << ")" << endl; 
                break; 
            case 2: 
                preDefinedChoice = option2; 
                cout << "Sin (" << sin(option2) << ")" << endl; 
                break; 
            case 3: 
                preDefinedChoice = option3; 
                cout << "Sin (" << sin(option3) << ")" << endl; 
                break; 
            case 4: 
                preDefinedChoice = option4; 
                cout << "Sin (" << sin(option4) << ")" << endl; 
                break; 
            case 5: 
                preDefinedChoice = option5; 
                cout << "Sin (" << sin(option5) << ")" << endl; 
                break;
            case 6: 
                preDefinedChoice = option6; 
                cout << "Sin (" << sin(option6) << ")" << endl; 
                break;
            case 7:
                preDefinedChoice = option7; 
                cout << "Sin (" << sin(option7) << ")" << endl; 
                break; 
            case 8:
                preDefinedChoice = option8; 
                cout << "Sin (" << sin(option8) << ")" << endl; 
                break;
            case 9: 
                preDefinedChoice = option9; 
                cout << "Sin (" << sin(option9) << ")" << endl; 
                break;
            case 10: 
                preDefinedChoice = option10; 
                cout << "Sin (" << sin(option10) << ")" << endl; 
                break;
            case 11:
                preDefinedChoice = option11; 
                cout << "Sin (" << sin(option11) << ")" << endl; 
                break; 
            case 12:
                preDefinedChoice = option12; 
                cout << "Sin (" << sin(option12) << ")" << endl; 
                break;
            case 13: 
                preDefinedChoice = option13; 
                cout << "Sin (" << sin(option13) << ")" << endl; 
                break;
            case 14: 
                preDefinedChoice = option14; 
                cout << "Sin (" << sin(option14) << ")" << endl; 
                break;
            case 15:
                preDefinedChoice = option15; 
                cout << "Sin (" << sin(option15) << ")" << endl; 
                break;
            case 16: 
                preDefinedChoice = option16; 
                cout << "Sin (" << sin(option16) << ")" << endl;   
                break; 

             default: 
                cout << "Invalid" << endl; 
                break; 
         }
     }

    int anotherOption; 
    cout << "Would you like to enter another operation? " << endl; 
    cout << "0. No" << endl; 
    cout << "1. Yes" << endl; 
    cin >> anotherOption; 
    if(anotherOption == 0)
        exit(1);
    else if(anotherOption == 1)
        trigMain();   

           
} 

