#include "history.hpp"
#include <numeric>
double history::get_average() const
{
    double sum;
    for (std::deque<double>::const_iterator it = ticks.begin(); it != ticks.end(); it++)
    {
        sum += *it;
    }
    return sum / ticks.size();
}

void history::add_tick(const double &tick)
{
    ticks.push_back(tick);
    if (ticks.size() > length)
    {
        ticks.pop_front();
    }
}

bool history::is_full()
{
    return length == ticks.size();
}

history::history(const int &in_length) : length(in_length)
{

}