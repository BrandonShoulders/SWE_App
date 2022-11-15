#pragma
#include "wx/wx.h"
#include <vector>
#include <string>
#include <math.h>
#include <stack>
#include <algorithm>


class CalculatorProcessor
{


protected:
	static CalculatorProcessor* _calculatorProcessor;
	CalculatorProcessor();

public:
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	CalculatorProcessor& operator= (CalculatorProcessor& other) = delete;
	static CalculatorProcessor* GetInstance() {
		if (_calculatorProcessor == nullptr)
		{
			_calculatorProcessor = new CalculatorProcessor();
		}
		return _calculatorProcessor;
	}
	void addition();
	void subtraction();
	void division();
	void multiplication();
	void trigonometrySin();
	void trigonometryCos();
    void trigonometryTan();
	void calculate() {

	}


	


};


