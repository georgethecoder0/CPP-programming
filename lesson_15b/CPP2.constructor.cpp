/* CPP2.constructor.cpp */
#include <iostream>
using namespace std;

class dog 
{  
  public:
     dog(int in_mood);
     void bark();
     void report_mood();
  private:    
      int mood;
};

int main() 
{
    dog piko(6);   

    cout<<"Piko, how are you today?"<<endl;    
    piko.report_mood();    
    cout<<endl;    

    cout<<"Piko, please bark twice for me"<<endl;    
    piko.bark(); 
    piko.bark();   
    return 0; 
}

dog::dog(int in_mood)    
{      
    mood=in_mood;    
}    
void dog::bark()    
{      
    cout<<"woof!"<<endl;    
}
void dog::report_mood()    
{      
    if (mood>10)        
        cout<<"I am cool";      
    else        
        cout<<"I am furious";    
} 
