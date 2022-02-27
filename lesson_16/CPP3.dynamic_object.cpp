/* CPP3.dynamic_object.cpp Δυναμική Δέσμευση μνήμης για αντικείμενο */

#include <iostream>
using namespace std;

class dummy {
    public:
        int x; 
};

int main()
{    
    dummy *p = NULL; //Ta de??e? se a?t??e?µe?? 
    p = new dummy; // ??sµe?s? ?????        
    if (!p) cout<<"Error allocating memory";

    /* ??a??se?? t?µ?? */   
    p->x = 5;
    
    /* ??t?p?se?? */    
    cout<<"p->x = "<<p->x<<endl;      

    delete p; // ?p?d?sµe?s? µ??µ??    

    return 0;
}
