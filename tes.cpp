#include <bits/stdc++.h>

using namespace std;
class MaterialNotAvailableException : public exception
{
public:
    MaterialNotAvailableException() : exception("Material not available") {}
};
class Building
{
private:
    int materialCount;

public:
    Building() { materialCount = 0; }
    void addMaterial(int materials) { materialCount += materials; }
    void buildConstruction()
    {
        if (materialCount == 0)
            throw MaterialNotAvailableException();
        else
            std::cout << "Building has been built";
    }
};
int main()
{
    Building b;

    try
    {
        b.buildConstruction();
    }
    catch (MaterialNotAvailableException mae)
    {
        cout << mae.what() << endl;
    }
    catch (exception e)
    {
        cout << "exception caught" << endl;
    }
}
