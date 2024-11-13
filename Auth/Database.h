#ifndef DATABASE_H
#define DATABASE_H

#include <unordered_map>
#include <string>
#include "User.h"

using namespace std;

class Database {
private:
	unordered_map<string, User> DB;
public:
	bool AddUser(string name, string pass);
	bool RemoveUser(string name);
	auto FindUser(string name);
};

#endif // !DATABASE_H
