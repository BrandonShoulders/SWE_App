#pragma
#include "wx/wx.h"
#include <vector>
#include <cstring>
#include <math.h>
#include <stdio.h>
#include <sstream>
#include <iostream>




class CalculatorProcessor
{

	/*instance should always be private or protected*/
protected:

	/*single instance of object*/
	static CalculatorProcessor* _calculatorProcessor;

	/*constructor*/
	CalculatorProcessor() {};

	const double pi = 3.14;

public:

	/*
	* Singleton Class(CalculatorProcessor) should not be cloneable
	*/
	CalculatorProcessor(CalculatorProcessor& other) = delete;

	/*
	* Singleton Class(CalculatorProcessor) should not be assignable
	*/
	CalculatorProcessor& operator= (CalculatorProcessor& other) = delete;

	/* Get instance Method*/
	static CalculatorProcessor* GetInstance();

	/*Function to find precedence*/
	int precedence(char operand);

	/*Function to perform calculations*/
	double calculate(int a, int b, char operand);

	/*Function to return value or expression*/
	double evaluate(std::string tokens);

	/*Function for trigonometry*/
	double sinfuntion(double degree);
	double tanfuntion(double degree);	
	double cosfuntion(double degree);

};





























/*** @brief Tokenize the given vector  according to the regex* and remove the empty tokens. ** @param str * @param re* @return std::vector<std::string>*
	std::vector<std::string> tokenize(const std::string str, const std::regex re) {

		std::sregex_token_iterator it{ str.begin(), str.end(), re, -1 };
		std::vector<std::string> tokenized{ it, {} };

		tokenized.erase(std::remove_if(tokenized.begin(), tokenized.end(), [](std::string const& s) {
			return s.size() == 0;
			}), tokenized.end());
		return tokenized;
	}*/