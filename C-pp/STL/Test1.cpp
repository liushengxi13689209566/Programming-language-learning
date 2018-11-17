#include<iostream>
#include<string>
#include<vector>
using  namespace std ;
const long ASIZE  =   500 ;

long get_a_target_long()
{
long target=0;

	cout << "target (0~" << RAND_MAX << "): ";
	cin >> target;
	return target;
}

string get_a_target_string()
{
long target=0;
char buf[10];

	cout << "target (0~" << RAND_MAX << "): ";
	cin >> target;
	snprintf(buf, 10, "%d", target);
	return string(buf);
}

int compareLongs(const void* a, const void* b)
{
  return ( *(long*)a - *(long*)b );
}

int compareStrings(const void* a, const void* b)
{
  if ( *(string*)a > *(string*)b )
     	return 1;
  else if ( *(string*)a < *(string*)b )
     	return -1;  
  else      	
        return 0;  
}
//---------------------------------------------------
#include <array>
#include <iostream>
#include <ctime> 
#include <cstdlib> //qsort, bsearch, NULL

namespace jj01
{
void test_array()
{
	cout << "\ntest_array().......... \n";
     
array<long,ASIZE> c;  	
			
clock_t timeStart = clock();									
    for(long i=0; i< ASIZE; ++i) {
        c[i] = rand(); 
    }
	cout << "milli-seconds : " << (clock()-timeStart) << endl;	//
	cout << "array.size()= " << c.size() << endl;		
	cout << "array.front()= " << c.front() << endl;	
	cout << "array.back()= " << c.back() << endl;	
	cout << "array.data()= " << c.data() << endl;	
	
long target = get_a_target_long();

	timeStart = clock();
    ::qsort(c.data(), ASIZE, sizeof(long), compareLongs);

    //  for(long i=0; i< ASIZE; ++i) {
    //     cout << c[i] << endl  ;  
    // }
    // cout << endl; 
long* pItem = (long*)::bsearch(&target, (c.data()), ASIZE, sizeof(long), compareLongs); 
	cout << "qsort()+bsearch(), milli-seconds : " << (clock()-timeStart) << endl;	//    
  	if (pItem != NULL)
    	cout << "found, " << *pItem << endl;
  	else
    	cout << "not found! " << endl;	
}
}

/*************************************************************************************** */
#include <set>
#include <stdexcept>
#include <string>
#include <cstdlib> //abort()
#include <cstdio>  //snprintf()
#include <iostream>
#include <ctime> 
namespace jj06
{
void test_multiset(long& value)
{
	cout << "\ntest_multiset().......... \n " ; 
	
multiset<string> c;  	
char buf[10];		
clock_t timeStart = clock();								
    for(long i=0; i< value; ++i)
    {
    	try {
    		snprintf(buf, 10, "%d", rand());
        	c.insert(string(buf));     				
		}
		catch(exception& p) {
			cout << "i=" << i << " " << p.what() << endl ;	
			abort();
		}
	}
	cout << "milli-seconds : " << (clock()-timeStart) << endl;	
	cout << "multiset.size()= " << c.size() << endl;	
	cout << "multiset.max_size()= " << c.max_size() << endl;	//214748364
	
string target = get_a_target_string();	
	{
    timeStart = clock();
auto pItem = find(c.begin(), c.end(), target);	//比 c.find(...) 慢很多	
	cout << "std::find(), milli-seconds : " << (clock()-timeStart) << endl;		
	if (pItem != c.end())
    	cout << "found, " << *pItem << endl;
  	else
    	cout << "not found! " << endl;	
 	}
 	
 	{
    timeStart = clock();		
auto pItem = c.find(target);		//比 std::find(...) 快很多							
	cout << "c.find(), milli-seconds : " << (clock()-timeStart) << endl;		 
	if (pItem != c.end())
    	cout << "found, " << *pItem << endl;
  	else
    	cout << "not found! " << endl;	
 	}	
	 
	c.clear();
	test_moveable(multiset<MyString>(),multiset<MyStrNoMove>(), value);	 						
}															 
}
int main(int argc, char** argv) 
{
    jj01::test_array();
    
	return 0;
}
