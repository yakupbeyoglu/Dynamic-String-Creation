#include <iostream>
#include "Dstring.h"

Dstring::Dstring()
{
	size = 0;
	dynamic = NULL;

}
Dstring::Dstring(int s)
{
	set_size(s);
	set_dynamic();

}
Dstring::Dstring(const char *out)
{
   set_size(strlen(out) + 1);
	set_dynamic();
	strcpy(dynamic,out);
}
Dstring::Dstring(const std::string out)
{

	set_size(strlen(out) + 1);
	set_dynamic();
	strcpy(dynamic, out);

}
Dstring::Dstring(const Dstring &cpy)//copy constructor
{
	size = cpy.size;
	dynamic = new char[cpy.size];
	for (int i = 0; i < size; i++)
		dynamic[i] = cpy.dynamic[i];


}
Dstring::~Dstring()
{
	delete[]dynamic;

}

int Dstring::strlen(const char *in)
{
	int length_in = 0;
	for (int i = 0; in[i] != NULL; i++)
		length_in++;
	
	return length_in;

}
int Dstring::strlen(const std::string in)
{
	int length_in = 0;
	for (int i = 0; in[i] != NULL; i++)
		length_in++;
	
	return length_in;
}
void Dstring::strcpy(char *first, const char *second)
{
	int i;
	for (i = 0; second[i] != NULL; i++)
		first[i] = second[i];
	first[i] = NULL;

}
void Dstring::strcpy(char *first, const std::string second)
{
	int i;
	for (i = 0; second[i] != NULL; i++)
		first[i] = second[i];
	first[i] = NULL;



}
void Dstring::strcpy(Dstring right)
{
	delete[]dynamic;
	dynamic = new char[right.size];
	strcpy(this->dynamic, right.dynamic);
}
void Dstring::set_size(int s)
{

	size = s;
}
int Dstring::get_size()const
{
	return size;
}
void Dstring::set_dynamic()
{
	dynamic = new char[size];
}

void Dstring::strncpy(Dstring out, int s)
{
	delete[]dynamic;
	this->size = s;
	dynamic = new char[this->size];
	std::cout << "with strncpy\n";
	strncpy(out.dynamic, s);

}
void Dstring::strncpy( char *second,int s)
{
	int i;
	for (i = 0; i<s; i++)
		this->dynamic[i] = second[i];
	
}
void Dstring::strcat(char *out)
{
	char *a;
	a = new char[this->size];
	for (int i = 0; i < this->size; i++)
		a[i] = dynamic[i];
	int size_a = strlen(a);
	delete[]dynamic;
	this->size = size_a + strlen(out);
	dynamic = new char[this->size];


	int j;
	for (j = 0; j<size_a; j++)
		this->dynamic[j] = a[j];
	for (int i = 0; i<(strlen(out)); i++, j++)
		this->dynamic[j] = out[i];


}
char* Dstring::strcat( Dstring right)
{
	char *a;
	a = new char[this->size];
	for (int i = 0; i < this->size; i++)
		a[i] = dynamic[i];
	int size_a = strlen(a);
	delete[]dynamic;
	this->size = size_a + right.size ;
	dynamic = new char[this->size];


	int j;
	for (j = 0; j<size_a; j++)
		this->dynamic[j] = a[j];
	for (int i = 0; i<right.size; i++, j++)
		this->dynamic[j] = right.dynamic[i];
	return dynamic;

}
char *Dstring::strcat(std::string out)
{
	char *a;
	a = new char[this->size];
	for (int i = 0; i < this->size; i++)
		a[i] = dynamic[i];
	int size_a = strlen(a);
	delete[]dynamic;
	this->size = size_a + strlen(out);
	dynamic = new char[this->size];


	int j;
	for (j = 0; j<size_a; j++)
		this->dynamic[j] = a[j];
	for (int i = 0; i<(strlen(out)); i++, j++)
		this->dynamic[j] = out[i];
	return dynamic;


}
char* Dstring::strncat(Dstring in, int s)
{
	return(strncat(in.dynamic, s));



}

char* Dstring::strncat(char *in, int s)
{
	char *a;
	a = new char[this->size];
	for (int i = 0; i < this->size; i++)
		a[i] = dynamic[i];
	int size_a = strlen(a);
	delete[]dynamic;
	this->size = size_a + s;
	dynamic = new char[this->size];


	int j;
	for (j = 0; j<size_a; j++)
		this->dynamic[j] = a[j];
	for (int i = 0; i<s; i++, j++)
		this->dynamic[j] = in[i];
	return dynamic;

}
char *Dstring::strncat(std::string in, int s)
{
	char *a;
	a = new char[this->size];
	for (int i = 0; i < this->size; i++)
		a[i] = dynamic[i];
	int size_a = strlen(a);
	delete[]dynamic;
	this->size = size_a + s;
	dynamic = new char[this->size];


	int j;
	for (j = 0; j<size_a; j++)
		this->dynamic[j] = a[j];
	for (int i = 0; i<s; i++, j++)
		this->dynamic[j] = in[i];
	return dynamic;

}



void Dstring::print()const
{
	for (int i = 0; i<size; i++)
	{
		std::cout << dynamic[i];

	}
}
bool Dstring::strcmp(char *first, char *second)
{
	int length1 = strlen(first);
	int length2 = strlen(second);
	char *a, *b;


	int x = 0;
	if (length1 == length2)
	{
		a = new char[length1];
		b = new char[length2];
		for (int i = 0; i < this->size; i++)
			   a[i] = dynamic[i];
		b = second;

		change(a, b);
		for (int i = 0; a[i] != NULL; i++)
			if (a[i] == b[i])
			{
				std::cout << "[ " << i << " ]=" << a[i] << "  == [" << i << " ] = " << b[i] << std::endl;
				x++;
				continue;
			}
			else
			{
				/*std::cout << "not equal" << std::endl;
				system("PAUSE"
				break;
				*/
				return false;
			}
		if (x == length1)
		{
			//std::cout << first << " same as " << second;
			return true;
		}
	}
	else
		//std::cout << "length is not same \n";
		return false;


}
bool Dstring::strcmp(Dstring right)//void Dstring::strcmp(const Dstring &right)
{
	if (strcmp(this->dynamic, right.dynamic))
	{
		std::cout << dynamic << " = " << right.dynamic << std::endl;
		return true;
	}
	else
	{
		std::cout << dynamic << " is not same " << right.dynamic << std::endl;
		if (dynamic > right.dynamic)
			std::cout << dynamic << "is greater than" << right.dynamic << std::endl;
		else
		{
			std::cout << dynamic << "is less than " << right.dynamic << std::endl;
		}
		return false;
	}


}
void Dstring::change(char a[], char b[])
{

	for (int i = 0; a[i] != NULL; i++)
	{
		if ((a[i] >= 97) && (a[i] <= 122))
			a[i] = a[i] - 32;
		if ((b[i] >= 97) && (b[i] <= 122))
			b[i] = b[i] - 32;

	}
}
bool Dstring::strncmp(Dstring right, int n)
{
	if (strncmp(dynamic, right.dynamic, n))
		return true;
	else
	{
		return false;
	}

}
bool Dstring::strncmp(char *first, char *second, int n)
{

	int length1 = strlen(first);
	int length2 = strlen(second);
	char *a, *b;


	int x = 0;

	a = new char[length1];
	b = new char[length2];
	
	a = first;
	b = second;

	/*	for (int i = 0; a[i] != NULL; i++)
	{
	if ((a[i] >= 97) && (a[i] <= 122))
	a[i] = a[i] - 32;
	if ((b[i] >= 97) && (b[i] <= 122))
	b[i] = b[i] - 32;

	}
	*/
	change(a, b);
	for (int i = 0; i<n; i++)
		if (a[i] == b[i])
		{
			std::cout << "[ " << i << " ]=" << a[i] << "  == [" << i << " ] = " << b[i] << std::endl;
			x++;
			continue;
		}
		else
		{
			
			return false;
		}
	if (x == n)
		return true;
}

char * Dstring::strchr(char *s1, int f)//f is find gonderilen icerisinde arar//gerek yoktur  buna bu sadece test icindir !!!!!
{
	static char *s2 = s1;;
	do {
		if (*s2 == f)
			return s2;

	} while (*s2++);
	return 0;

}
char *Dstring::strchr(int f)
{
	static char *x = this->dynamic;
	do {
		if (*x == f)
			return x;
	} while (*x++);
	
	return 0;
}
char *Dstring::strchr(Dstring right)//its cannot find more than 1 character because its take to int ch for the find;
{
	int f = (int)right.dynamic[1];

	return strchr(f);
}
char *Dstring::strstr(Dstring right) {

	char *a;
	a = new char[this->size];
	for (int i = 0; i < this->size; i++)
		a[i] = this->dynamic[i];
	int z = 0;
	int j;
	
	
	if (right.size > this->size)
		std::cout << "can not access because search size is more than  string size !!!! " << std::endl;

	else
	{

		for (int i = 0; i < size; i++, z++)
		{
			j = 0;
			if (this->dynamic[i] == right.dynamic[j])
			{
				while ((this->dynamic[i] == right.dynamic[j]) && (j <(right.size)))
				{
					j++;
					i++;

				}
				if (j+1 == right.size)
					break;
			}

		}

	}
	if (j+1 == right.size) {
		for (int i = 0; i < z; i++)
		{
			(*a++);

		}
		return a;
	}
	else
	{
		return 0;
	}
}

/*void Dstring::change_2(char a[], char b[])
{
	int i;
	for (i = 0; a[i] != NULL; i++)
	{
		if ((a[i] >= 97) && (a[i] <= 122))
			a[i] = a[i] - 32;
	}

	for (i = 0; b[i] != NULL; i++)
	{
		if ((b[i] >= 97) && (b[i] <= 122))
			b[i] = b[i] - 32;

	}


}
*/
std::istream&operator>>(std::istream & in, const Dstring & right)
{
	for (int i = 0; i < right.size; i++)
	{
		std::cout << "enter index [" << i << " ] =";
		in >> right.dynamic[i];

	}
	return in;

}
/*void Dstring::cpy(char *a)
{
	int i;
	for (i = 0; dynamic[i] != NULL; i++)
		a[i] = dynamic[i];
	a[i] = NULL;



}
*/
char *Dstring::strrchr(Dstring right, int x)
{
	char *cpyof_source;
	cpyof_source = new char[size];
	for (int i = 0; i < this->size; i++)
		cpyof_source[i] = this->dynamic[i];
	
	char *cpyof_right;
	cpyof_right = new char[right.size];
	//change_2(cpyof_source, cpyof_right);//eger Yakup icerisinde U (buyuk harf)aranirsa bulmaycak ama U=u oyuzen hepsini buyuk harf yaptikki bulabilsin  orjinali degismemek icin copyleri kullandik.
	for (int i = 0; right.dynamic[i] != NULL; i++)
		cpyof_right[i] = right.dynamic[i];
	if (x < 0)
		x = -1 * x;
	std::cout << right.dynamic[x] << std::endl;
	int f = (int)cpyof_right[x];
	int memory = -1;
	for (int i = 0; i<size; i++)
	{
		if (cpyof_source[i] == f)
			memory = i;


	}
	if (memory != -1) {
		for (int i = 0; i <memory; i++)
			(*cpyof_source++);

		return cpyof_source;
	}
	else
	{
		return NULL;
	}





}
char *Dstring::strtok(const char *c_delete)
{
	char *cpyof_source;
	cpyof_source = new char[this->size];
	for (int i = 0; i < this->size; i++)
		cpyof_source[i] = this->dynamic[i];

	int timer = -1;
	int lenght = strlen(c_delete);
	int z = -1;

	for (int i = 0; dynamic[i] != NULL; i++)
	{
		for (int j = 0; j < lenght; j++)
		{
			if (dynamic[i] == c_delete[j])
			{
				std::cout << std::endl;
				timer = i;
				dynamic[i] = ' ';


			}

		}

		std::cout << dynamic[i];
	}
	if (timer > -1)
		for (int x = 0; x < timer; x++)
			(*cpyof_source++);
	return cpyof_source;
	
}
char *Dstring::strtok(Dstring  right)
{

	return (strtok(right.dynamic));

}
Dstring &Dstring::operator=(const Dstring &right)
{

	delete[]dynamic;
	set_size(right.size);
	set_dynamic();
	strcpy(right.dynamic);
	return *this;

}


char* Dstring::strcat(char *first, char *second)// for + operator!!
	{
		int last = strlen(first);
		int second_len = strlen(second);
		char *yeni;
		yeni = new char[last + second_len - 1];
		for (int i = 0; first[i] != NULL; i++)
		{
			yeni[i] = first[i];
		}
		for (int j = 0; second[j] != NULL; j++, last++)
		{
			yeni[last] = second[j];

		}
		yeni[last] = NULL;
		for (int i = 0; yeni[i] != NULL; i++)
		{
			std::cout << "[ " << i << " ] = " << yeni[i] << std::endl;
		}
		return yeni;





	}

Dstring Dstring::operator +(const Dstring &right)
{
	return  strcat(dynamic, right.dynamic);


}
Dstring & Dstring::operator +=(const Dstring &right)
{

	strcat(right);
	return *this;

}
bool Dstring::operator ==(const Dstring &right)
{
	//if(strcmp(right)) bool a cevir strcmp i
	if (strcmp(right))
		return 1;
	else
	{
		return 0;
	}





}
bool Dstring::operator!=(const Dstring &right)
{
	return !(*this == right);



}
bool Dstring::operator >(const Dstring &right)
{
	return (this->size > right.size);
}
bool Dstring::operator >=(const Dstring &right)
{
	return (this->size >= right.size);

}
bool Dstring::operator< (const Dstring &right)
{
	return (this->size < right.size);

}
bool Dstring::operator<=(const Dstring &right)
{
	return (this->size <= right.size);
}
std::ostream & operator <<(std::ostream &out, const Dstring &right)
{
	for (int i = 0; right.dynamic[i] != NULL; i++)
		out << right.dynamic[i] ;
	return out;


}
/*std::ostream & operator <<(std::ostream &out, const Dstring &right)
{
	


}
*/
