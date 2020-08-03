#include <iostream>
#include "file.h"

file file1;
int main()
{
    file1.setfilename("UMGR.json");
    file1.callJSON();
    return 0;
}
