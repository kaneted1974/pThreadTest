#include <iostream>
#include "excuteCpp.h"
#include "BinaryGenerator.h"

using namespace std;

void excuteCpp()
{
    cout << "Hello World!\n";
    BinaryGenerator bg;
    cout << bg.getParam() << endl;
    bg.setParam(10);
    cout << bg.getParam() << endl;
}
