#include <iostream> 
#include <cmath> 
using std:: cout; 
using std:: endl; 
using std:: cin; 

double addition(double x, double y)
{
     return x + y; 
}

double subtraction(double x,double y)
{

    return x - y; 
}

double multiplication(double x,double y)
{
    return x * y; 
}

double division(double x,double y)
{
    return x / y;
}

void calculateOperation() 
{
    //Simple Arithmetic 
    double x,y; 
    int choice; 
    int leaveOption = 1; 
    do
    {
        cout <<  "Enter in 2 numbers: " << endl; 

        cout << "Enter in X: " << endl; 
        cin >> x; 
        cout << "Enter in Y: " << endl; 
        cin >> y; 


        cout <<  "Enter operation: " << endl; 
        cout << "1. Addition " << endl; 
        cout << "2. Subtraction " << endl; 
        cout << "3. Multiplication " << endl; 
        cout << "4. Division " << endl; 

        cin >> choice; 

        

        switch (choice)
        {
            case 1: 
                choice = 1; 
                cout << endl;  
                cout << addition(x,y) << endl; 
                break;

            case 2: 
                choice = 2; 
                cout << endl;  
                cout << subtraction(x,y) << endl; 
                break; 
            case 3:
                choice = 3; 
                cout << endl;  
                cout << multiplication(x,y) << endl; 
                break; 
            case 4: 
                choice = 4;
                cout << endl;  
                cout << division(x,y) << endl; 
                break; 
            default:
                cout << "Invalid Choice" << endl; 
                break;
        } 

        cout << endl;
        cout << "Would you like to perform another operation? Press 1 to continue or 0 to quit: " << endl; 
        cin >> leaveOption; 
    }while(leaveOption != 0);     

}

void quadraticFormula()
{
    int leaveOption = 1; 
    do
    {
        double a,b,c,x1,x2; 
            cout << "Enter the cofficients of A,B and C" << endl; 
            cin >> a >> b >> c; 
        
            if(a == 0.0)
            {
                cout << "You entered 0. UNDEFINED" << endl; 
                exit(1); 
            } 
            x1 = (-b + sqrt((b*b) - 4 * a * c)) / (2 * a); 
            x2 = (-b - sqrt((b*b) - 4 * a * c)) / (2 * a); 

            cout << "X1 = " << x1 << endl; 
            cout << "X2 = " << x2 << endl; 

            cout << endl; 
            cout << "Would you like to do another operation? Press 1 to continue, or 0 to quit: " << endl; 
            cin >> leaveOption; 

    }while(leaveOption != 0 ); 
}

void otherArithmetic()
{
    //SquareRoot Functions and Exponential Functions
    int choice; 
    int leaveOption = 1; 

    do{
    cout << "Enter Operation: " << endl; 
    

    cout << "1. Exponent: " << endl;
    cout << "2. Square Root:" << endl;
    cout << "3. Cubic Root: " << endl;
    cin >> choice; 

    double baseNumber,powerNumber; 
    if(choice == 1)
    {   

        cout << "Enter base number: " << endl; 
        cin >> baseNumber; 
        cout << "Enter power number: " << endl; 
        cin >> powerNumber; 

        cout << "The result of " << baseNumber << " to the " << " power of " << powerNumber << " is: " << pow(baseNumber,powerNumber) << endl; 
    }

    else if(choice == 2)
    {
        cout << "Enter number to find square root: " << endl;  
        cin >> baseNumber; 

        cout << "The square root of: " << baseNumber << " is: " << sqrt(baseNumber); 
    }
    else{
        cout << "Enter number to find cube root: " << endl;  
        cin >> baseNumber; 
        cout << "The cube root of: " << baseNumber << " is: " << cbrt(baseNumber); 
    }

    cout << endl; 
    cout << "Would you like to perform another operation? Press 1 to contiue or 0 to quit: " << endl; 
    cin >> leaveOption; 

    }while(leaveOption != 0); 
    

    

}

void findHypotenuse() 
{
    system("cls"); 
    double a,b,c; 
    int leaveOption = 1; 

    do
    {
        cout << "Enter in the two legs of the triangle: " << endl; 
        cout << "a = "; 
        cin >> a;

        cout << "b = "; 
        cin >> b;

        cout << "The hypotenuse is: " << hypot(a,b) << endl; 

        cout << endl; 
        cout << "Would you like to perform another operation? Press 1 to contiue or 0 to quit: " << endl; 
        cin >> leaveOption; 

        
    
    }while(leaveOption != 0); 
}

int recursionFactorial(int a)
{
   if(a <= 1)
        return 1; 
   return a * recursionFactorial(a - 1);  
}

void findFactorial()
{
    // ** This program attepmts to use Recursion to find the Factorial of a number
    system("cls"); 
    double numFactioral; 

    int choice = 1; 

    while(choice != 0)
    {
        cout << "Enter number to factorialize:" << endl; 
        cin >> numFactioral;
        cout << recursionFactorial(numFactioral); 

        cout << endl; 

        cout << "Would you like to do another calculation?" << endl; 
        cout << "1.Yes, 0.No" << endl; 
        cin >> choice; 
    }
}






