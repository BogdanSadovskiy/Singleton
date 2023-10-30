#include"Loging.h"
#include <iostream>

int main()
{
    Loging& loger = Loging::getInstance();
        int i = 0;
    while (i!= 3) {
        cout << "Add log : ";
        string log; cin >> log;
        loger.addLog(log);
        i++;
    }
    i = 0;
    while (i != 3) {
        cout << loger.getLogs(i);
        i++;
     }
    


}
