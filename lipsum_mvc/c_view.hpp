#ifndef C_VIEW_H
#define C_VIEW_H

#include "aw_observer.hpp"
#include "l_model.hpp"

class c_view : public aw_observer {
  public:
    ~c_view();
    explicit c_view(const l_model *const m);
    void notify() override;

  private:
    const l_model *const m_model;
};

#endif
