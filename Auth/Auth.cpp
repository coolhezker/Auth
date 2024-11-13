#include "Auth.h"

using A = Auth;

bool A::Registration(Database& db, string name, string pass) {
	return db.AddUser(name, pass);
}
