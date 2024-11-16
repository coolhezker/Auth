#ifndef DBFILE_H
#define DBFILE_H

#include "Database.h"
#include <fstream>

class DBFile : public Database {
private:
	string Path;
	char Separator;
public:
	DBFile();
	DBFile(string path);
	DBFile(string path, char separator);
	string ReadFrag(ifstream& is);
	bool Reader();
	bool Writer();
	bool SetPath(string path);
};

#endif // !AUTHFILE_H
