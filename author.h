#include <iostream>
using namespace std;
class Author {
	 public : 
	         int id;
	         string name;
	         string bookname;
	         int notopublish;
	         int notosales;
	 public:   Author();
	           Author(int id,string name,string bookname,int  notopublish,int notosales );
	
	
	
};

   int getid(){return id };
   string getname(){return name};
   string getbookname(){return bookname };
   int getnotopublish(){ return notopublish  };
   int getnotosales(){return  getnotosales };
   
    void setid();
    void setname();
    void setbookname();
    void setnotopublish();
    void setnotosales();
    
    void availablecopy(){
	};
	
	void tosales(){
	};
