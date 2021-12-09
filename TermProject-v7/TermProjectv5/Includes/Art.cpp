#include <iostream>
#include <string>
#include <fstream> 

#include "Calculator.h"
#include "GradeCalculator.h"
#include "Trigonometric.h"
#include "Game.h"
#include "Menu.h"

void printASCII(std::string fileName)
{
    std::string line = "";
    std::ifstream inFile; 
    inFile.open("Includes/ASCII.txt"); 
    if(inFile.is_open())
    {
        while (getline(inFile,line))
        {
            std::cout << line << std:: endl; 
        }
        
    } 
    else{
        std:: cout << "File Failed to Load" << std:: endl; 
        std:: cout << "Could not dislpay toolbox art" << std:: endl; 

    }
    inFile.close(); 
}

void mainArt() 
{
    std::string fileName = "ASCII.txt"; 
    printASCII(fileName); 
    menuOption(); 
}