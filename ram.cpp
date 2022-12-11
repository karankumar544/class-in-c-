#include <iostream>
using namespace std;
class building
{
    int rooms;
    int floars;
    int area;

public:
    void set_rooms(int num);
    int get_room();
    void set_floars(int num);
    int get_floars();
    void set_area(int num);
    int get_area();
};
// here house class is derived from class building

class house : public building
{
    int bedrooms;
    int bathrooms;

public:
    void set_bedrooms(int num);
    int get_bedrooms();
    void set_bathrooms(int num);
    int get_bathrooms();
};

class school : public building
{
    int classrooms;
    int offices;

public:
    void set_classrooms(int num);
    int get_classrooms();
    void set_office(int num);
    int get_office();
};

void building ::set_rooms(int num)
{
    rooms = num;
}
void building ::set_floars(int num)
{
    floars = num;
}
void building ::set_area(int num)
{
    area = num;
}
int building ::get_room()
{
    return rooms;
}
int building ::get_floars()
{
    return floars;
}
int building ::get_area()
{
    return area;
}
void house ::set_bedrooms(int num)
{
    bedrooms = num;
}
void house ::set_bathrooms(int num)
{
    bathrooms = num;
}
int house ::get_bedrooms()
{
    return bedrooms;
}
int house :: get_bathrooms()
{
    return bathrooms;
}
void school ::set_classrooms(int num)
{
    classrooms = num;
}
void school ::set_office(int num)
{
    offices = num;
}
int school ::get_classrooms()
{
    return classrooms;
}
int school ::get_office()
{
    return offices;
}
int main()
{
    building B;
    B.set_rooms(500);
    B.set_floars(50);
    B.set_area(2000);
    house H;
    H.set_bedrooms(150);
    H.set_bathrooms(50);
    school S;
    S.set_classrooms(250);
    S.set_office(50);
    cout<<B.get_room()<<endl;
    cout<<B.get_floars()<<endl;
    cout<<B.get_area()<<endl;
    cout<<H.get_bedrooms()<<endl;
    cout<<H.get_bathrooms()<<endl;
    cout<<S.get_classrooms()<<endl;
    cout<<S.get_office()<<endl;
    return 0;
}