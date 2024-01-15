
#include <iostream>

#include "eigen3/Eigen/Core"
#include "eigen3/Eigen/Dense"

namespace Set
{
using Scalar = double;            // Note that "Set::Scalar" is the same as double
using Vector = Eigen::Vector2d;   // Note that "Set::Vector" is the same as Eigen::Vector2d
using Matrix = Eigen::Matrix2d;   // Note that "Set::Matrix" is the same as Eigen::Matrix2d
}

int main(int argc, char **argv)
{
    // TIP: We will use the "Eigen" library to do matrix and vector manipulations.
    //      You can find documentation about Eigen on its webpage
    //            https://eigen.tuxfamily.org/

    // TODO #1: Print "Hello world" to the console by uncommenting the following line:
    //
    // std::cout << "Hello world" << std::endl;
        


    // TODO #2: Create a vector "u" with components [1,2] by uncommenting
    //          the following line:
    // 
    // Set::Vector u(1.0,2.0);



    // TODO #3: Create another vector "v" with components [3,4]



    // TODO #4: Create a zero-filled matrix A by uncommenting the following lines:
    //
    // Set::Matrix A = Set::Matrix::Zero();
    


    // TODO #5: Compute the product Au and print the output:



    // TODO #6: Compute the dot product of u and v and store in a scalar variable by
    //          uncommmenting the following lines.
    //
    // Set::Scalar udotv = u.transpose()*v;
    // std::cout << udotv << std::endl;



    // TODO #7: Compute the dyadic product of u and v and store in a marrix called "D"



    // TODO #8: Compute the determinant of D and print to the screen.

}
