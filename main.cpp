#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

///   Global Variable PI   ///
const double PI = 3.14;

/****************************
*   Function Declarations   *
****************************/

/// Rectangle Functions ///
void PrintRectanglePerimeter(double, double);
double CalcRectanglePerimeter(double, double);
double DoubleRectanglePerimeter(double&, double&);

/// Circle/Sphere Functions ///
__attribute__((unused)) void Swap(int&, int&);
__attribute__((unused)) void Swap(double&, double&);
__attribute__((unused)) double CalcCircumferenceOfCircle(double);
__attribute__((unused)) double CalcAreaOfCircle(double);
__attribute__((unused)) double CalcVolumeOfSphere(double);


/********************
*   Main Function   *
********************/

int main()
{
    cout << "Getting this line to print earns you points!\n"; // Test Output


   /*******************
   *   Declarations   *
   *******************/

    double height = 0.0;
    double width = 0.0;
    double radius = 0.0;

   ///   Receive Inputs   ///
    cin >> height >> width >> radius;  /// More intuitive option for inputs is listed at the bottom of this code ///


   /*********************
   *   Implimentation   *
   *********************/

    PrintRectanglePerimeter(height, width);
    cout << CalcRectanglePerimeter(height, width) << endl;
    cout << "... about to double height and width...\n";
    DoubleRectanglePerimeter(height, width);
    PrintRectanglePerimeter(height, width);

    return 0;
}



/**************************
*   Rectangle Functions   *
**************************/

double CalcRectanglePerimeter(double height, double width)
{
    double rectanglePerimeter = 2.0 * height + 2.0 * width;
    return rectanglePerimeter;
}

void PrintRectanglePerimeter(double height, double width)
{
    cout << "A rectangle with height " << fixed << setprecision(1) << height << " and width "
         << fixed << setprecision(1) << width
         << " has a perimeter of " << fixed << setprecision(1)
         << CalcRectanglePerimeter(height, width) << "." << endl;
}

double DoubleRectanglePerimeter(double& height, double& width)
{
    height = 2.0 * height;
    width = 2.0 * width;
    double doublePerimeter = height + width;
    return doublePerimeter;
}

/******************************
*   Circle/Sphere Functions   *
******************************/

__attribute__((unused)) void Swap(int& arg1, int& arg2)
{
    int tempArg = arg1;
    arg1 = arg2;
    arg2 = tempArg;
}
__attribute__((unused)) void Swap(double& arg1, double& arg2)
{
    double tempArg = arg1;
    arg1 = arg2;
    arg2 = tempArg;
}
__attribute__((unused)) double CalcCircumferenceOfCircle(double circleRad)
{
    double circumference = 2 * PI * circleRad;
    return circumference;
}
__attribute__((unused)) double CalcAreaOfCircle(double circleRad)
{
    double circleArea = PI * circleRad * circleRad;
    return circleArea;
}
__attribute__((unused)) double CalcVolumeOfSphere(double sphereRad)
{
    double sphereVolume = (4 * PI * pow(sphereRad, 3)) / 3;
    return sphereVolume;
}


/// Optional change of the input sequence to make it more intuitive.

/**********************
*   Receive Inputs   *
**********************

cout << "Input Height: ";
cin >> height;
cout << endl;

cout << "Input Width: ";
cin >> width;
cout << endl;

cout << "Input Radius: ";
cin >> radius;
cout << endl; */
