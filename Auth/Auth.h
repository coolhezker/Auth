#ifndef AUTH_H
#define AUTH_H

#include "Database.h"

struct Auth {
	bool Registration(Database& db, string name, string pass);
	bool Authentication(Database& db, string name, string pass) const;
};

#endif
