#include <conio.h>
#include<bits/stdc++.h>

using namespace std;

//https://www.geeksforgeeks.org/stdstring-class-in-c/
//issue when taking string input just after integer input
//https://www.geeksforgeeks.org/c-string-class-applications-set-2/
int main(){
	
	// char arr[] = "hello";

	
	// int k;
	
	// getline(cin,s2);
	// cin>>k;
	// getline(cin,s4);
	// cout<<k<<endl;
	
	// string s1 = "hello again";

	// s1.push_back('o');
	// cout<<s1<<endl;

	// s1.pop_back();
	// cout<<s1<<endl;

	// cout<<s1.capacity()<<endl;
	// s1.resize(5);
	// cout<<s1<<endl;
	// // s1.shrink_to_fit();

	// cout << "The string using forward iterators is : ";
 //    for (auto it=s1.begin(); it!=s1.end(); it++)
 //    cout << *it;
 //    cout << endl;


 //    char sub_s[100] ; 
 //    s1 = "an string till here and some more";
	// // copy(“char array”, len, pos) :- This function copies the substring in target character array mentioned in its arguments. It takes 
	// //3 arguments, target char array, length to be copied and starting position in string to start copying.
 //    s1.copy(sub_s,15,3);

 //    string s2 = "some more shit";
 //    s1.swap(s2);
 //    cout<<sub_s<<endl;


	string s1,s2;
	s1 = "once upon a time there was a king. this time he invited death upon himself";
	s2 = "once upon a time there was a lion.";

	cout<<"compare: "<<s1.compare(s2)<<endl;

	cout<<" index of word - 'time' " <<s1.find("time")<<endl;

	cout<<"index of 1st occurence of any char: "<<s1.find_first_of("upon")<<endl;

	cout<<"index of last occurence of any char: "<<s1.find_last_of("upon")<<endl;

	cout<<" last starting index of word - 'time': " <<s1.rfind("time")<<endl;

	s2.insert(24," a rabbit also ");
	cout<<"s2 after insertion: "<<s2<<endl;

	s2.clear();

	if(!s1.empty()){
		cout<<"s1 is not empty"<<endl;
	}
	getch();
	return 0;
}


