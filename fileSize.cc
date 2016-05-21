#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
  fstream newFile;
  if(argc >= 2)
    {
      newFile.open(argv[1], ios::in);
      newFile.seekg(0, newFile.end);
      int length = newFile.tellg();
      cout << length << endl;
    }
}
