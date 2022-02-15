#ifndef SEGREGATION_H
#define SEGREGATION_H

#include <string>
#include <vector>

class segregation
{
private:
    int max_plastic, max_mixed, current_mixed, current_plastics;
    std::vector <std::string> plastics;
    std::vector <std::string> mixed;
public:
    segregation(unsigned int m_plastic=0, unsigned int m_mixed=0){
        max_plastic = m_plastic;
        max_mixed = m_mixed;
        current_plastics = current_mixed = 0;
    };
    std::vector <std::string> get_plastics(){return plastics;}
    std::vector <std::string> get_mixed(){return mixed;}
    void add_mixed(std::string trash);
    void add_plastics(std::string trash);
    void rm_all_plastics();
    void rm_all_mixed();
    bool mixed_is_full();
    bool plastics_is_full();
};
#endif