#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;
class Table {
    public:
        int dataNum;
        Table();
        ~Table();
        bool insertData(vector<string>data);
        bool addColumn(string name, int type, int unit, int isKey);

        vector<string> TableData[3];

        vector<string> columnName;
        std::vector<int> columnType;
        vector<int> columnUnit;
        vector<int> columnKey;
};
