#include <iostream>
#include <sqlite3.h>

using namespace std;

int main() {
    sqlite3 *db;
    int rc = sqlite3_open("test.db", &db);
    if (SQLITE_OK == rc) {
        cout << "Opened db successfully"<<endl;
        sqlite3_close(db);
    } else {
        cout << "Unable to open db because " << sqlite3_errmsg(db) <<endl;
    }
    return 0;
}