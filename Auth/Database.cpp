#include "Database.h"

using D = Database;

bool D::AddUser(string name, string pass) {
	if (DB.find(name) == DB.end()) {
		DB[name] = User(name, pass);
		return true;
	}
	return false;
} 

bool D::RemoveUser(string name) {
	if (DB.find(name) != DB.end()) {
		DB.erase(name);
		return true;
	}
	return false;
}

User* D::FindUser(string name) {
	auto it = DB.find(name);
	if (it != DB.end()) {
		return &it->second;
	}
	return nullptr;
}
