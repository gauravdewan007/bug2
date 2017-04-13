#include <iostream>
#include <utility>
#include <map>
#include <string>
#include <cstdlib>

using namespace std;

struct cmp_str
{
	bool operator()(const char* a, const char* b) const
	{
		return std::strcmp(a,b)<0;
	}
};
using mymap =  std::map<const char*, std::string, cmp_str>;

static mymap MakeMap()
{
	const std::pair<const char*, std::string> myArr[] = {
	std::make_pair("aaaa", "bbbbb"),
	std::make_pair("aasaa", "bebbbb"),
	std::make_pair("aadaa", "bgbbbb"),
	std::make_pair("aaseaa", "bbbbb"),
	std::make_pair("aafaa", "bbabbb"),
	std::make_pair("aaasfa", "bbbkiobb"),
	std::make_pair("aasefaa", "bbbbbnb"),
	std::make_pair("aaasfa", "bbadbbb"),
	std::make_pair("aaggaa", "bbkdkbbb"),
	std::make_pair("aaffaa", "bbbnbb"),
	std::make_pair("abbaaa", "bblabbb"),
	std::make_pair("aadaa", "bbbbdkdab"),
	std::make_pair("aaava", "bbmbbb"),
	std::make_pair("aaaab", "bbbbbll"),
	std::make_pair("aaaabd", "bbbblb"),
	std::make_pair("aaaar", "bbbkbb"),
	std::make_pair("aaatsda", "bbbbb"),
	std::make_pair("aamkaga", "bblkjbbb"),
	std::make_pair("aaaa", "bbkdkbbb"),
	std::make_pair("aaakjda", "bbbbb"),
	std::make_pair("aakjhaa", "bbbkiobb"),
	std::make_pair("aakcaa", "bbkdbbb"),
	std::make_pair("aattaa", "bbbbkeb"),
	std::make_pair("aaapa", "bbbbo;b"),
	std::make_pair("aaoaa", "bikbbbb"),
	std::make_pair("aajaa", "bbghbbb"),
	std::make_pair("aaala", "bbbkakbb")
	//add more and more items below !!
	};
	size_t cnt = sizeof myArr/ sizeof myArr[0];
	return mymap(myArr, myArr+cnt);
}
mymap* p;
mymap * q;
void foo()
{
	 *p = MakeMap();
}
void bar()
{
	 *q = MakeMap();
}
int main()
{
  srand(time(NULL)); 
  int r = rand()%20; 
  if(r<10)
	  foo();
  else
	  bar();
 if(p == NULL)
	 cout<<"p is null";
 return 0;
}
