#include <iostream>
#include "Auth.h"

using namespace std;

int main() {
	Database DB;
	Auth A;
	A.Registration(DB, "punel", "pass");
	A.Registration(DB, "roma", "fuck");
	A.Registration(DB, "vasya", "my");
	A.Registration(DB, "vitya", "ass");
	User* user = DB.FindUser("vasya");
	User* user2 = DB.FindUser("roma");
	cout << user->getName() << " " << user->getPass() << '\n';
	DB.RemoveUser("punel");
	cout << user2->getName() << " " << user2->getPass() << '\n';
	if (A.Authentication(DB, "roma", "paca"))
		cout << "kaka" << '\n';
	else cout << "bebe" << '\n';
	if (A.Authentication(DB, "vitya", "ass"))
		cout << "kaka" << '\n';
	else cout << "bebe" << '\n';
	return 0;
}
