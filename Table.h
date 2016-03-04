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
        vector<string>TableData[3];

    private:
        vector<string> columnName;
};
