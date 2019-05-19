#include <iostream>
#include "Dstring.h"

int main()
{
	char a[] = "YAKUP";
	char b[] = "yakup";
	char c[] = "163049";
	char d[] = "egg";
	char e[] = "EgO";
	
	Dstring test_xcmp(b);
	Dstring test_xcmp2(a);
	test_xcmp.strcmp(test_xcmp2);
	/*char *xcpy=test_xcmp2.strcat(zaman);
	if (a)
		test_xcmp2.print();
	else
	{
		std::cout << "\nnot have";
	}
	if (d > e)
		std::cout << "\ngreat";
	else
	{
		std::cout << "less";
	}*/
	/*test_xcmp.strcmp(test_xcmp2);
	Dstring test(a);
	Dstring test_empty;
	test_empty.strcpy(test);
	Dstring test_2;
	std::cout << "strcpy test :" << std::endl;
	//test_empty.strncpy(test,3);
	test_empty.strncpy(test,3);
	//test_2.print();
	test_empty.print();
	std::cout << "\n test strcat :" << std::endl;
	Dstring test_cat(c);
	char *st=test.strcat(test_cat);
	if (st)
		test.print();
	else
	{
		std::cout << "error";
	}
	std::cout << "\nwith strcat : \n";
	test.print();
	Dstring test_strncat(a);
	Dstring test_strncat2(b);
	std::cout << "with strncat :\n";
	test_strncat.strncat(test_strncat2, 3);
	std::cout << std::endl << "test :" << std::endl;
	test_strncat.print();
	std::cout << std::endl;
	char test_cmp[] = "yakup";
	char test_cmp2[] = "YaKUp";
	std::cout << std::endl << "test compare :\n";
	Dstring test_cmp1(test_cmp);
	Dstring test_cmp21(test_cmp2);
	char test_cmp3[] = "beyoglu";
	Dstring test_cmp22(test_cmp3);
	if (test_cmp1.strcmp(test_cmp21))
		std::cout << "same" << std::endl;
	else
	{
		std::cout << "not same" << std::endl;
	}
	std::cout << std::endl;
	
	if (test_cmp22.strcmp(test_cmp1))
		std::cout << "same" << std::endl;
	else
	{
		std::cout << "not same" << std::endl;
	}
	std::cout << std::endl;
	char test_ncmp[] = "yakup1";
	Dstring ncmp(test_ncmp);
	char test_ncmp2[] = "yakuap";
	Dstring ncmp2(test_ncmp2);
	std::cout << std::endl << "test strchr:\n";
	if (test_cmp1.strncmp(ncmp, 3))
		std::cout << "same up to 3 character" << std::endl;
	else
	{
		std::cout << "not same " << std::endl;
	}
	if (ncmp.strchr(ncmp2))
		std::cout << "find";
	else
		std::cout << "not have";
	std::cout << std::endl;
	std::cout << "with strstr :" << std::endl;
	char teststr[] = "Dogus YaKuP'un kardesidir";
	char teststr2[] = "id";
	Dstring test_strstr(teststr);
	Dstring test_strstr2(teststr2);
	Dstring test_ios(10);
	//std::cin >> test_ios;
	char *s = test_strstr.strstr(test_strstr2);
	if (s)
		std::cout << s << std::endl;
	else
		std::cout << "not have";
	std::cout << "with strrch:\n";
	const char *test_strrch = "dogusyakupbeyoglu";
	 const char *test2_strrch = "beyoglu";
	Dstring str_test(test_strrch);
	Dstring strtest2(test2_strrch);
	char *k = str_test.strrchr(strtest2, 2);
	if (k != NULL)
		std::cout << k;
	else
	{
		std::cout << "not have";
	}
	*/
	std::cout << std::endl << "with strtok :" << std::endl;
	char try_tok[] = "yakup Beyoglu,kod/yazmayi/ogreniyor";
	char seperate[] = ",./";
	Dstring   tok(try_tok);
	char *m = tok.strtok(seperate);
	if (m != NULL)
		std::cout << std::endl << m;
	else
	{
		std::cout << "null";
	}
	/*
	std::cout << std::endl << "with opertor overloading :" << std::endl;
	char x[] = "yakup";
	char y[] = "beyoglu";
	Dstring op1;
	Dstring op2(y);
	Dstring op3(x);

	op1 = op2;
	if (op1 == op2)
	std::cout << "same\n"<<std::endl;
	else
	{
		std::cout << "not same\n" << std::endl;
	}
	if (op1 != op3)
	std::cout << " not same\n" << std::endl;
	else
	{
	std::cout <<" same\n" << std::endl;
	}
	std::cout << "before  +=  :" << std::endl;
	op1.print();
	std::cout << " size is =" << op1.get_size();
	op1 += op3;
	std::cout << "after process + =" << std::endl;
	op1.print();
	std::cout << "size is =" << op1.get_size();
	
	std::cout << std::endl <<( op1 + op3);
	std::string den = "yakup";
	std::cout << "\nafter \n";
	Dstring test15(den);
	//buradan sonrasi ovearload testi icini !!!
	char over[] = "163049";
	
	std::string over2 = "yakup beyoglu";
	Dstring over_cat(over);
	char *overx= over_cat.strcat(over2);
	if (overx)
		over_cat.print();
	else
	{
		std::cout << "error" << std::endl;
	}
	*/
	system("PAUSE");
	



	return 0;


}