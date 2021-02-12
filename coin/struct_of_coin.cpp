#include <iostream>
#include <string>
using namespace std;

struct vol{
    
    string name;
    int age;
    
};

void get(vol *obj){
    
    cout<<"Name:";
    cin>>obj->name;
    cout<<"Age:";
    cin>>obj->age;
}

void show(vol *obj){
    
    cout<<obj->name<<endl;
    cout<<obj->age<<endl;
}

//function who gets pointer to struct
//void get(vol *obj);
//function who shows information of the struct
//void show(vol *obj);
int main()
{
   vol *obj = new vol; 
   get(obj);
   show(obj);

   vol *user = new vol;
   get(user);
   show(user);
    return 0;
}