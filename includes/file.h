//
// Created by visxim on 7/31/20.
//

#ifndef DECENTRALIZEDDUMMYPROCESS_FILE_H
#define DECENTRALIZEDDUMMYPROCESS_FILE_H

#include "JSON_manager.h"

using namespace std;

class file
{
private:
    string filename;
public:
    JSON_manager fileJSONmng;
    void setfilename(string file);
    void callJSON();


};



#endif //DECENTRALIZEDDUMMYPROCESS_FILE_H
