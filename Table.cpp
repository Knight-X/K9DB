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

bool Table::addColumn(string name, int type, int unit, int isKey)
{
    columnName.push_back(name);
    columnUnit.push_back(unit);
    columnType.push_back(type);
    columnKey.push_back(isKey);
    return true;
}
