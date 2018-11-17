

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class my_class{
public:
	my_class(const string &temp_name ,const int temp_value ):name(temp_name),value(temp_value){ }
	bool  operator<(const my_class & tt ) const {
		return this->value < tt.value  ;
	}
	string name ;
	int value ;
};
int main(void){
  	my_class a[8]={{"赵",3},{"钱",5},{"宋",1},{"李",7},{"张",6},{"刘",9},{"王",456},{"龙",0}} ;
  	sort(a,a+8);
  	for(int i=0;i< 8 ;i++ )	
  		cout << a[i].name << " : " << a[i].value << endl ;
	return 0 ;
}
