#include <string>
#include <fstream>
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void slow_print(const string&, unsigned int);

int main(){
	string L;
	ifstream X ("goodbye.txt");
	 if (X.is_open())
	  {
	    while (X.good())
	    {
	      getline(X,L);
	      slow_print(L,30);
	    }
	    X.close();
	  }
	return 0;
}

void slow_print(const string& message, unsigned int millis_per_char){
	for(const char c:message){
		cout<<c<<flush;
		this_thread::sleep_for(chrono::milliseconds(5));
	}
	cout<<endl;
}
