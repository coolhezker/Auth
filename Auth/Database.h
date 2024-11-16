#ifndef DATABASE_H
#define DATABASE_H

#include <unordered_map>
#include <string>
#include "User.h"

using namespace std;

class Database {
protected:
	unordered_map<string, User> DB;
public:
	bool AddUser(string name, string pass);
	bool RemoveUser(string name);
	void PrintDB();
	const unordered_map<string, User>& ReturnDB();
	User* FindUser(string name);
};

#endif // !DATABASE_H
