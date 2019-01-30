#include "l_model.hpp"

l_model::l_model() {}

void l_model::set_observer(aw_observer *const aw) { m_aw_observer = aw; }

void l_model::set_active_idx(const int i) {
    if (i >= m_words.size()) {
        return;
    }
    m_active = i;
    if (m_aw_observer) {
        m_aw_observer->notify();
    }
}

std::size_t l_model::get_data_len() const { return m_words.size(); }

const std::string &l_model::get_active() const { return m_words[m_active]; }

int l_model::get_active_idx() const { return m_active; }
