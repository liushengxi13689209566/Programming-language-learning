#include <iostream>  
#include <vector>  
#include <stdexcept>  
using namespace std;  
int main() {  
    vector <int> a;  
    a.push_back(1);  
    try {  
        a.at(1);  
    }  
    catch (std::out_of_range &exc) {  
        cout << exc.what() << " Line:" << __LINE__ << " File:" << __FILE__ << endl;  
    }  
    return EXIT_SUCCESS;  
}   