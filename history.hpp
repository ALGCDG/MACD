#ifndef HISTORY_HPP
#define HISTORY_HPP

#include <deque>

class history
{
    private:
        std::deque<double> ticks;
        int length;
    public:
        double get_average() const;
        void add_tick(const double &tick);
        bool is_full();
        history(const int &length);
};

#endif