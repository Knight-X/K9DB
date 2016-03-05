#include <gtest/gtest.h>
#include "Table.h"

int Gcd(int a, int b)
{
    return 0 == b ? a : Gcd(b, a % b);
}

TEST(GcdTest, IntTest)
{
    EXPECT_EQ(1, Gcd(2, 5));
    Table x;
    vector<string> y;
    for (int i = 0; i <= 3; i++) {
        y.push_back("xyz");
    }
    x.insertData(y);
    copy(x.TableData[0].cbegin(), x.TableData[0].cend(), ostream_iterator<string>(cout, " "));
}
TEST(ColumnTest, AddTest)
{
    Table x;
    x.addColumn("name", 1, 5, 1);
    string strCode = x.columnName[0];
    cout << strCode << endl;
    EXPECT_STREQ("name", strCode.c_str());
    EXPECT_EQ(1, x.columnType[0]);
    EXPECT_EQ(5, x.columnUnit[0]);
    EXPECT_EQ(1, x.columnKey[0]);
}
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
