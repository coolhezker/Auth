#ifndef AUTH_H
#define AUTH_H

#include "Database.h"

struct Auth {
	string HashPassword(string pass);
	bool Registration(Database& db, string name, string pass);
	bool Authorization(const Database& db, string name, string pass) const;
};

#endif
