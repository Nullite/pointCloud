#include "Listener.h"
#include <time.h>

int main()
{
    time_t start, end;

    
    srand(time(nullptr));
    PointCloud pc(300000);
    time(&start);
    Listener list(pc);
    time(&end);
    double seconds = difftime(end, start);
    std::cout << seconds << " seconds to get floats from string_data";   
}

