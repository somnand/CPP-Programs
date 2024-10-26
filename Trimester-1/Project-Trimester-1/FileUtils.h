#include<vector>
#include<string>
using namespace std;

class FileUtils
{
    public:
    static vector<string> readDatasetFromFile();
    static void readDatasetFromFile(int startPos);
};