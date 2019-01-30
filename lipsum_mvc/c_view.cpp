#include "c_view.hpp"
#include <iostream>


c_view::~c_view(){ 
    std::cout << std::endl; 
}

c_view::c_view(const l_model * const m) 
    : m_model{m} 
{}

void c_view::notify(){
    std::cout <<  m_model->get_active() << " ";
}


