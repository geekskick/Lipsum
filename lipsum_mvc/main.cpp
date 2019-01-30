#include <iostream>
#include "l_model.hpp"
#include "c_view.hpp"

int main(){
    
    l_model m;
    c_view c(&m);
    m.set_observer(&c);
    
    const auto lim = m.get_data_len();
    for(auto i = 0; i < lim; i++){    
        m.set_active_idx(i);
    }

}
