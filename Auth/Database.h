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
	Database();
	Database(const Database& D);
	Database(Database&& D) noexcept;
	Database& operator=(const Database& D);
	Database& operator=(Database&& D) noexcept;

	bool AddUser(string name, string pass);
	bool RemoveUser(string name);
	User* FindUser(string name);
	virtual void PrintDB();
	
};

#endif // !DATABASE_H
