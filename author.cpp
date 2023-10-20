#include <iostream>
using namespace std;
#include <author.h>
class Author {
	 public : 
	         int id;
	         string name;
	         string bookname;
	         int notopublish;
	         int notosales;
	 public:   Author();
	           Author(int id,string name,string bookname,int  notopublish,int notosales ){
	           	this->id=id;
	           	this->name=name;
	           	this->bookname=bookname;
	           	this->notopublish=notopublish;
	           	this->notosales=notosales
			   };
	
	
	
};


