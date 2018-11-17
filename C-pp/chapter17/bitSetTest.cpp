/*************************************************************************
	> File Name: bitSetTest.cpp
	> Author: Liu Shengxi 
	> Mail: 13689209566@163.com
	> Created Time: 2018年06月22日 星期五 08时35分44秒
 ************************************************************************/

#include<iostream>
#include<bitset>
using namespace std;
int main(void) {
	bitset<16> bitvec1(1U);
		cout << bitvec1.to_ulong() << endl ;
	//bitset<128> bitvec2(~0ULL);// 0~63 is 1, 63~127 is 0 
	bool is_set  = bitvec1.any();// 1
	bool is_not_set = bitvec1.none();// 0
	bool all_set  = bitvec1.all() ; // 0 
	size_t  onBits = bitvec1.count() ;// 1
	size_t sz =  bitvec1.size() ;//32
	bitvec1.flip();
	bitvec1.reset();
	bitvec1.set();
	cout << is_set << is_not_set << all_set << onBits << sz << "\n" ; 

	// bitset<6> bits ;
	// cin >> bits ;
	// cout << "bits :" <<  bits << endl ;
	bool statue ;
	// unsigned long quizA =  0;
	// quizA |= 1UL << 27 ;
	// statue  = quizA & (1UL << 27);
	// quizA &= ~(1UL << 27);


	bitset<30> quizB ;
	quizB.set(27);
	cout << "quizB == "  << quizB << endl ;
	statue = quizB[27];
	cout << "statue == "  << statue  << endl ;
	quizB.reset(27);
	cout << "quizB == " << quizB << endl ;
	return 0 ;
}

