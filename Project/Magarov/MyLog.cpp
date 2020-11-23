#include "MyLog.h"

namespace Magarov
{
    void MyLog::log(string str)
    {
        getInstance().logs.push_back(str);
    }

    void MyLog::write()
    {
        for (int idx = 0; idx < logs.size(); idx++)
        {
            cout << logs[idx] << "\n\r";
        }
    }

    void MyLog::clear()
    {
        logs.clear();
    }
}