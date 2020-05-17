// pThreadTest.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "BinaryGenerator.h"
#include "csub.h"
#include "mainC.h"

using namespace std;

int main()
{
    //cout << "Hello World!\n";
    //BinaryGenerator bg;
    //cout << bg.getParam() << endl;
    //bg.setParam(10);
    //cout << bg.getParam() << endl;

    cout << csub(7);
    mainC();
    return 0;
}
