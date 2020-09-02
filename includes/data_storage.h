/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  /home/visxim/CLionProjects/DecentralizedDummyProcess/includes/data_storage.h
 *        \brief  Header of checksum_manager for checking the integrity of the data
 *
 *      \details The Checksum_manager creates and checks if the data is valid
 *
 *
 *********************************************************************************************************************/
#ifndef DECENTRALIZEDDUMMYPROCESS_DATA_STORAGE_H
#define DECENTRALIZEDDUMMYPROCESS_DATA_STORAGE_H
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <fstream>
#include <string>
#include <cstring>
#include <stdint.h>
#include "boost/crc.hpp"

using namespace std;

/*!
 * \brief Struct which is specified to hold the values of the UpdateManager UMGR
 */
typedef struct {
    string name;
    string description;
    string dlt_id;
    string log_mode;
    string log_level;
    string log_dir_path;
    unsigned int ipc_port;
    unsigned int reconnection_retry_offset;
    unsigned int msg_buf_size;
    int checksum;

    //!function for serializing the struct
    template <typename Archive>
    void serialize(Archive& ar, const unsigned int version)
    {
        ar & name;
        ar & description;
        ar & dlt_id;
        ar & log_mode;
        ar & log_level;
        ar & log_dir_path;
        ar & ipc_port;
        ar & reconnection_retry_offset;
        ar & msg_buf_size;
        ar & checksum;
    }
} UMGR_s;

typedef struct {
    string name0;
    string description1;
    string mode2;
    string version3;
    string status4;
    string path5;
    int buffer_size6;
    int id7;
    int number8;
    int length9;
    string name10;
    string description11;
    string mode12;
    string version13;
    string status14;
    string path15;
    int buffer_size16;
    int id17;
    int number18;
    int length19;
    string name20;
    string description21;
    string mode22;
    string version23;
    string status24;
    string path25;
    int buffer_size26;
    int id27;
    int number28;
    int length29;
    string name30;
    string description31;
    string mode32;
    string version33;
    string status34;
    string path35;
    int buffer_size36;
    int id37;
    int number38;
    int length39;
    string name40;
    string description41;
    string mode42;
    string version43;
    string status44;
    string path45;
    int buffer_size46;
    int id47;
    int number48;
    int length49;
    string name50;
    string description51;
    string mode52;
    string version53;
    string status54;
    string path55;
    int buffer_size56;
    int id57;
    int number58;
    int length59;
    string name60;
    string description61;
    string mode62;
    string version63;
    string status64;
    string path65;
    int buffer_size66;
    int id67;
    int number68;
    int length69;
    string name70;
    string description71;
    string mode72;
    string version73;
    string status74;
    string path75;
    int buffer_size76;
    int id77;
    int number78;
    int length79;
    string name80;
    string description81;
    string mode82;
    string version83;
    string status84;
    string path85;
    int buffer_size86;
    int id87;
    int number88;
    int length89;
    string name90;
    string description91;
    string mode92;
    string version93;
    string status94;
    string path95;
    int buffer_size96;
    int id97;
    int number98;
    int length99;
    int checksum;


//!function for serializing the struct
    template <typename Archive>
    void serialize(Archive& ar, const unsigned int version)
    {
        ar & name0;
        ar & description1;
        ar & mode2;
        ar & version3;
        ar & status4;
        ar & path5;
        ar & buffer_size6;
        ar & id7;
        ar & number8;
        ar & length9;
        ar & name10;
        ar & description11;
        ar & mode12;
        ar & version13;
        ar & status14;
        ar & path15;
        ar & buffer_size16;
        ar & id17;
        ar & number18;
        ar & length19;
        ar & name20;
        ar & description21;
        ar & mode22;
        ar & version23;
        ar & status24;
        ar & path25;
        ar & buffer_size26;
        ar & id27;
        ar & number28;
        ar & length29;
        ar & name30;
        ar & description31;
        ar & mode32;
        ar & version33;
        ar & status34;
        ar & path35;
        ar & buffer_size36;
        ar & id37;
        ar & number38;
        ar & length39;
        ar & name40;
        ar & description41;
        ar & mode42;
        ar & version43;
        ar & status44;
        ar & path45;
        ar & buffer_size46;
        ar & id47;
        ar & number48;
        ar & length49;
        ar & name50;
        ar & description51;
        ar & mode52;
        ar & version53;
        ar & status54;
        ar & path55;
        ar & buffer_size56;
        ar & id57;
        ar & number58;
        ar & length59;
        ar & name60;
        ar & description61;
        ar & mode62;
        ar & version63;
        ar & status64;
        ar & path65;
        ar & buffer_size66;
        ar & id67;
        ar & number68;
        ar & length69;
        ar & name70;
        ar & description71;
        ar & mode72;
        ar & version73;
        ar & status74;
        ar & path75;
        ar & buffer_size76;
        ar & id77;
        ar & number78;
        ar & length79;
        ar & name80;
        ar & description81;
        ar & mode82;
        ar & version83;
        ar & status84;
        ar & path85;
        ar & buffer_size86;
        ar & id87;
        ar & number88;
        ar & length89;
        ar & name90;
        ar & description91;
        ar & mode92;
        ar & version93;
        ar & status94;
        ar & path95;
        ar & buffer_size96;
        ar & id97;
        ar & number98;
        ar & length99;
        ar & checksum;
    }

} EXMPLE_s;
#endif //DECENTRALIZEDDUMMYPROCESS_DATA_STORAGE_H
