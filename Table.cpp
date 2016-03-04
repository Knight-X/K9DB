#include "Table.h"


Table::Table(){
  dataNum = 3;
}

Table::~Table(){}

bool Table::insertData(vector<string> data)
{
    for (int i = 0; i <= 3; i++) {
        TableData[i].push_back(data[i]);
    }

    return true;
}
