#include <iostream>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include "string.h"
#include "keys.cpp"
#include "hash_system.h"

using namespace  std;

 class Object_coin{
    public:
        string FILE_NAME;
        int ID ;
        int value_of_coin;
        int value_of_coin_now=0;
        string random_for_hash;    //random value
        float direct_coin[50]={}; //array for using by onother functions 
        int coin_hash[150]={}; 
        
        string Prefix_for_coin="LUNAS:@@@@_coin_$:";

        void make_coin_value_for_1(){
        	float number_for_random; 
        	for(int  i=0; i<=value_of_coin;i++){
        		number_for_random+=1+rand()%23435,5;
                coin_hash[i]={number_for_random};
        		
        	}
        		

        	}
        void make_coin_for_direct_value(){
            
        	cout<<"Value of coin:"<<endl;
        	cin>>value_of_coin;
        	if (value_of_coin==1){
        		make_coin_value_for_1();
        	}
        }


        };
      


