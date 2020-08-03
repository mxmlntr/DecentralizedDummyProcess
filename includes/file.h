/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  /home/visxim/CLionProjects/DecentralizedDummyProcess/includes/file.h
 *        \brief  Header of file methods for file handling
 *
 *      \details The file is for accessing the files with the configurations
 *
 *********************************************************************************************************************/
#ifndef DECENTRALIZEDDUMMYPROCESS_FILE_H
#define DECENTRALIZEDDUMMYPROCESS_FILE_H
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "JSON_manager.h"

using namespace std;

/*!
 * \brief File class for handling file access
 */
class file{
private:
    string filename;
public:
    JSON_manager fileJSONmng;
    void setfilename(string file);
    void callJSON();
};

#endif //DECENTRALIZEDDUMMYPROCESS_FILE_H


