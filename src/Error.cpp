#include <iterator>
#include <algorithm>
#include <string>
#include <locale>
#include "Utility.hpp"

static bool isPosNum(const std::string &str)
{
    std::string::const_iterator itStr =
    std::find_if(str.begin(), str.end(), [](const char c) { return
    !std::isdigit(c); });

    return itStr == str.end();
}

bool checkErrorA(int ac, char **av, int n, int ir, int jr)
{
    for (int i = 1; i < ac; i++) {
        if (!isPosNum(av[i]))
            return FAILURE;
    }
    if (n < 2 || (ir || jr) >= n - 1 || (ir || jr) < 1)
        return FAILURE;
    return SUCCESS;
}

bool checkErrorB(int ac, char **av, int n, int ir, int jr,
    int i, int j)
{
    if (!checkErrorA(ac, av, n, ir, jr))
        return FAILURE;
    if ((i || j) >= n)
        return FAILURE;
    return SUCCESS;
}
