// Land Area Measurement for the Students of Maharajahat High School, UD sponsored by JK Consultants
#include <iostream>
#include <cmath>

struct client
{
    char name[50];
    char father[50];
    char district[50];
    char block[50];
    char jlno[50];
    char mouza[50];
    char khatianno[50];
    char dagno[50];
};

    int NoOfTriangles;

struct triangle
{
    float side1;
    float side2;
    float side3;
} t[2];


int main()
{
    std::cout << "\nJK Consultants \n----------------------- \nMaharajahat High School" << std::endl;
    std::cout << "\nEnter Information of the Client: " << std::endl;

    // storing clients information

    client c;

    std::cout << "\nClient's Name: ";
    std::cin.getline(c.name, 50);

    std::cout << "\nClient's Father Name: ";
    std::cin.getline(c.father, 50);

    std::cout << "\nClient's District Name: ";
    std::cin.getline(c.district, 50);

    std::cout << "\nClient's Block Name: ";
    std::cin.getline(c.block, 50);

    std::cout << "\nClient's Land J.L. No: ";
    std::cin.getline(c.jlno, 50);

    std::cout << "\nClient's Land Mouza Name: ";
    std::cin.getline(c.mouza, 50);

    std::cout << "\nClient's Land Khatian No: ";
    std::cin.getline(c.khatianno, 50);

    std::cout << "\nClient's Land Dag No: ";
    std::cin.getline(c.dagno, 50);


    float sc, s, a, ta;

    std::cout << "\nEnter the Scale of the Mouza Map in '1mm = __ Foot' Format: ";
    std::cin >> sc;

    std::cout << "\nEnter the Numbers of Sub-Triangles: ";
    std::cin >> NoOfTriangles;

    std::cout << "\nEnter the Value of all the 3 Sides of all the Triangles Chronologically: " << std::endl;

    // storing all Triangles Sides information
    s = 0;
    a = 0;
    ta = 0;
    NoOfTriangles == NoOfTriangles+1;


    for(int i = 0; i < NoOfTriangles; ++i)
    {
        std::cin >> t[i].side1 >> t[i].side2 >> t[i].side3;

        s = (( (t[i].side1 * sc) + (t[i].side2 * sc) + (t[i].side3 * sc) ) / 2);
        a = sqrt(s * (s - (t[i].side1 * sc)) * (s - (t[i].side2 * sc)) * (s - (t[i].side3 * sc)));
        ta = ta + a;

    }

    std::cout << "\n----------------------- \nJK Consultants \n----------------------- \nSurveyor Hriday Barman \n-----------------------" << std::endl;

    std::cout << "\nLand Owner: " << c.name << ", Father's Name: " << c.father << ", District: " << c.district << ", Under Block: " << c.block << ", J.L. No.: " << c.jlno << ", Mouza: " << c.mouza << ", Khatian No.: " << c.khatianno << ", Dag No.: " << c.dagno << std::endl;

    std::cout << "\n----------------------- \nArea of the Land: " << ta << " Sq. Ft. \n-----------------------" << std::endl;
    std::cout << "\n----------------------- \n" << ta / 435.6 / 100 << " Acres" << std::endl;
    std::cout << "\n" << ta / 435.6 << " Satak" << std::endl;
    std::cout << "\n" << ta / 720 / 20 << " Bighas" << std::endl;
    std::cout << "\n" << ta / 720 << " Kathas" << std::endl;
    std::cout << "\n" << ta / 45 << " Chhataks \n----------------------- " << std::endl;

    return 0;
}
