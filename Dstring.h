
#ifndef Dstring_h
#define Dstring_h
#include <iostream>

class Dstring {
	//friend std::ostream &operator <<(std::ostream &, const Dstring &);
	friend std::istream&operator>>(std::istream &, const Dstring &);
	friend std::ostream & operator <<(std::ostream &, const Dstring &);
public:

	Dstring();
	Dstring(int);
	Dstring(const char *);
	Dstring(const Dstring &);// use one copy
	Dstring(const std::string);
	~Dstring();//dest
	void set_size(int);
	int get_size()const;//
	void set_dynamic();
	int strlen(const char*);
	int strlen(const std::string);
	void strcpy(char *, const char *);
	void strcpy(char *, const std::string);
	void  strcpy(Dstring);
	void strncpy(Dstring , int s);
	void print()const;
	void strncpy(char *, int);
	char *strcat(Dstring);
	void strcat(char *);
	char* strcat(std::string);
	char* strcat(char *, char *);
	//void cpy(char *);
	char* strncat(Dstring, int);

	char* strncat(char *, int);
	char *strncat(std::string, int);
	bool strcmp(char *, char*);
	bool strcmp( Dstring);
	void change(char a[], char b[]);
	bool strncmp(Dstring, int);
	bool strncmp(char *, char *, int);
	char *strchr(Dstring);
	char * strchr(char *, int);//test icindir disardan bir tane string gelmesi lazim
	char *strchr(int);
	///char strstr
	//char *strstr(char*);
	char *strstr(Dstring);
	char *strrchr(Dstring, int);

	char*strtok(const char *);
	char *strtok(Dstring);
	Dstring & operator =(const Dstring &);
	Dstring operator +(const Dstring &);
	Dstring & operator +=(const Dstring &);
	bool operator ==(const Dstring &);
	bool operator !=(const Dstring &);
	bool operator >=(const Dstring &);
	bool operator <=(const Dstring &);
	bool operator >(const Dstring &);
	bool operator <(const Dstring &);





private:
	int size;
	char *dynamic;



};
#endif
