#include "Auth.h"

using A = Auth;

bool A::Registration(Database& db, string name, string pass) {
	return db.AddUser(name, pass);
}

bool A::Authentication(Database& db, string name, string pass) const {
	User* user = db.FindUser(name);
	if (user != nullptr)
		if (user->getPass() == pass)
			return true;
	return false;
}
