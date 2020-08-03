//
// Created by visxim on 7/31/20.
//

#include "includes/file.h"

/*
 * Function for setting the filename of the file_object
 *
 * */
void file::setfilename(string file)
{
    filename = file;
};
/*
 * Function for retreiving the JSON information from the file
 *
 * */
void file::callJSON()
{
    fileJSONmng.read_file(filename);
    fileJSONmng.parseToStructandSerialize(filename);
};