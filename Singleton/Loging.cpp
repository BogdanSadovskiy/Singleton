#pragma once
#include"Loging.h"
void Loging::addLog(string log) {
	this->log.push_back(log);
}

int Loging::getSizeLog() {
	return this->log.size();
}

string Loging:: getLogs(int iterator) {
	return this->log[iterator];
}