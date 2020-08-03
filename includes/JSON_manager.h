//
// Created by visxim on 7/31/20.
//

#ifndef DECENTRALIZEDDUMMYPROCESS_JSON_MANAGER_H
#define DECENTRALIZEDDUMMYPROCESS_JSON_MANAGER_H

#include <iostream>
#include <fstream>
#include <string>
#include "rapidjson.h"
#include "reader.h"
#include "writer.h"
#include "document.h"
#include "stringbuffer.h"
#include "data_storage.h"
//#include "serializer.h"
//#include "checksum_manager.h"

using namespace rapidjson;
using namespace std;
//using namespace boost::interprocess;

class JSON_manager{
private:
    Document doc;
//    serializer ser;
//    checksum_manager CRC;
public:
    unsigned int read_file(string filename);
    string get_json_config_string();
    unsigned int parseToStructandSerialize(string filename);
};


#endif //DECENTRALIZEDDUMMYPROCESS_JSON_MANAGER_H
