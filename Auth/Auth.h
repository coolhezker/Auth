#ifndef AUTH_H
#define AUTH_H

#include "Database.h"

struct Auth {
	bool Registration(Database& db);
	bool Authorization(const Database& db) const;
};

#endif