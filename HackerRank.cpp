// HackerRank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


void Strings() {

    std::string word = "Hello world!";

    //TO GET A PART OF A STRING 
    //-THE FIRST PARAMETER IS THE STARTING INDEX THAT IS INCLUSIVE
    //-THE SECOND PARAMETER IS THE LENGTH OF THE SUBSTRING YOU WANT TO ACQUIRE, COUNT THE STARTING INDEX TOO.
    std::string subword = word.substr(0,5);
    std::cout << subword << std::endl;

    //UPPER AND LOWERCASE
    char letter = 'S';
    int isupper = std::isupper(letter);  //RETURNS ZERO IF ITS LOWERCASE, AND ANYTHING ELSE IF ITS UPPERCASE
    std::cout << isupper << std::endl;

    int islower = std::islower(letter); //RETURNS ZERO IF ITS UPPERCASE, AND ANYTHING ELSE IF ITS LOWERCASE
    std::cout << islower << std::endl;

    //HOW TO TURN A CHAR INTO UPPER OR LOWER
    char upperletter = toupper(letter);
    char lowerletter = tolower(letter);

    //REPLACING PART OF A STRING WITH THE REPLACE() FUNCTION
    std::string replacement = "Kevin";
    std::string replacedworld = word.replace(6, replacement.size(), replacement); //THE FIRST INDEX IS INCLUSIVE
    std::cout << replacedworld << std::endl;

    //HOW TO ADD A CHAR TO A STRING
    char addletter = 'A';
    word.push_back(addletter); //THIS WORKS BECAUSE A STRING IS JUST AN ARRAY OF CHARS
}
void sortingAlgorithms() {

    int arr[10] = { 10, 2, 4, 5, 6, 7, 3, 8, 1,9 };
    //HOW TO SORT AN ARRAY

    //Bubble sort - one of the easiest

}
void BitManipulation() {
    //OPERATORS
    // | OR
    // & AND
    // ^ XOR
    // ~ NEGATION
    // << LEFT SHIFT
    // >> RIGHT SHIFT

 
   
}

int main()
{
    Strings();
    sortingAlgorithms();
    
}

