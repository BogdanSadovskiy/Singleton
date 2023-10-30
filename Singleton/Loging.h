#pragma once
using namespace std;
#include<iostream>
#include <vector>
class Loging
{
private:
	vector<string> log;
	Loging() {};
	Loging(const Loging&) = delete;
	Loging& operator= (const Loging) = delete;
public:
	static Loging& getInstance() {
		static Loging instance;
		return instance;
	}
	void addLog(string log);
	int getSizeLog();
	string getLogs(int iterator);
		
};


