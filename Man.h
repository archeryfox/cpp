#pragma once
#include <iostream>
#include <string>
#ifndef MYCLASS_H
#define MYCLASS_H
using namespace std;

class Man
{
public:
	int name = 2;
	void dyn() {
		cout << Man::name;
	}
	
};
/// <summary>h </summary>

#endif
