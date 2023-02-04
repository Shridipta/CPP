#include <bits/stdc++.h>
using namespace std;

// local scope
void f()
{
    int i = 10;
}

// class scope
class Event
{
public:
    enum Type
    {
        keyDown,
    };

    Type getType() const
    {
        return type;
    }

private:
    Type type;
};

// Namespace Scope
namespace Aviation
{
    const double NMPerSM = 0.826201;
    double convertToSM(double nm);
    double convertToNM(double sm);
}

double Aviation::convertToSM(double nm)
{
    return nm * NMPerSM;
}
double Aviation::convertToNM(double sm)
{
    return sm / NMPerSM;
}


// Unnamed Namespace
namespace
{
    const double NMPerSM = 0.826201;
    double convertToSM2(double nm);
    double convertToNM2(double sm);
}


// see enclosing scopes
int main()
{
    cout << Aviation::convertToSM(20.0);

    // using declarations
    using Aviation::convertToSM;
    double sm = convertToSM(20.0);

    cout << sm;

    // using directive
    using namespace Aviation;
    sm = convertToSM(20.0);
    double nm = convertToNM(40.0);
    return 0;
}