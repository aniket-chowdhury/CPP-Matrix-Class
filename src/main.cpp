#include <iostream>
#include <vector>
#include "etmatrix.hpp"
#include "cpp20matrix.hpp"
#include "time.hpp"

int main(int argc, char *argv[])
{
    std::cout << "C++ version\nBuilt on Version: 201703\nCurrent Version\t: " << __cplusplus << std::endl;
    lib::etmatrix<float> e_mat({{8.98, 9.23, 5.41, 3.91, 7.05, 2.76, 8.12, 8.49, 8.95, 5.9},
                                {9.5, 5.8, 4.51, 6.6, 9.96, 9.17, 7.93, 0.82, 6.13, 4.86},
                                {6.3, 8.45, 2.43, 7.31, 1.17, 2.2, 7.95, 3.33, 8.16, 1.01},
                                {1.46, 6.98, 0.45, 5.74, 9.1, 5.34, 6.81, 0.27, 6.35, 6.06},
                                {5.76, 3.91, 3.7, 9.81, 0.36, 0.22, 9.61, 1.85, 1.24, 2.11},
                                {8.01, 9.37, 0.23, 4.26, 1.02, 2.6, 2.21, 6.47, 3.5, 1.8},
                                {5.04, 0.39, 1.01, 9.88, 1.99, 3.59, 7.32, 8.38, 9.18, 1.69},
                                {6.73, 9.67, 0.58, 6.76, 8.45, 3.42, 2.51, 5.97, 4.42, 1.75},
                                {4.72, 4.1, 5.69, 5.09, 3.11, 3.57, 8.38, 2.51, 5.61, 0.12},
                                {7.42, 3.36, 0.46, 2.81, 2.4, 9.53, 3.52, 2.88, 3.59, 9.47}});
    lib::etmatrix<float> e_mat_1({{6.34, 6.21, 7.16, 3.88, 4.14, 6.51, 0.02, 1.92, 3.34, 2.39},
                                  {6.37, 3.79, 8.75, 5.68, 4.14, 4.02, 7.02, 4.18, 6.62, 0.47},
                                  {4.45, 2.59, 1.58, 5.28, 4.87, 5.61, 7.55, 8.84, 4.95, 3.12},
                                  {4.67, 8.09, 8.75, 8.12, 1.88, 9.99, 6.33, 0.83, 7.26, 9.87},
                                  {4.02, 6.79, 3.16, 2.14, 7.17, 0.02, 8.23, 5.28, 0.98, 1.19},
                                  {6.49, 8.74, 2.8, 9.79, 1.0, 8.54, 3.97, 0.81, 2.75, 4.53},
                                  {7.92, 8.61, 1.33, 5.21, 6.51, 3.47, 8.72, 2.78, 0.19, 0.41},
                                  {6.81, 5.58, 9.47, 9.38, 9.1, 0.42, 7.49, 7.01, 6.55, 7.12},
                                  {9.03, 6.4, 3.72, 5.38, 2.08, 5.87, 0.09, 1.51, 3.33, 7.9},
                                  {7.18, 3.38, 6.21, 0.41, 1.64, 9.82, 2.9, 3.95, 5.48, 2.93}});
    lib::etmatrix<float> e;

    lib::cpp20matrix<float> cpp_mat({{8.98, 9.23, 5.41, 3.91, 7.05, 2.76, 8.12, 8.49, 8.95, 5.9},
                                     {9.5, 5.8, 4.51, 6.6, 9.96, 9.17, 7.93, 0.82, 6.13, 4.86},
                                     {6.3, 8.45, 2.43, 7.31, 1.17, 2.2, 7.95, 3.33, 8.16, 1.01},
                                     {1.46, 6.98, 0.45, 5.74, 9.1, 5.34, 6.81, 0.27, 6.35, 6.06},
                                     {5.76, 3.91, 3.7, 9.81, 0.36, 0.22, 9.61, 1.85, 1.24, 2.11},
                                     {8.01, 9.37, 0.23, 4.26, 1.02, 2.6, 2.21, 6.47, 3.5, 1.8},
                                     {5.04, 0.39, 1.01, 9.88, 1.99, 3.59, 7.32, 8.38, 9.18, 1.69},
                                     {6.73, 9.67, 0.58, 6.76, 8.45, 3.42, 2.51, 5.97, 4.42, 1.75},
                                     {4.72, 4.1, 5.69, 5.09, 3.11, 3.57, 8.38, 2.51, 5.61, 0.12},
                                     {7.42, 3.36, 0.46, 2.81, 2.4, 9.53, 3.52, 2.88, 3.59, 9.47}});
    lib::cpp20matrix<float> cpp_mat_1({{6.34, 6.21, 7.16, 3.88, 4.14, 6.51, 0.02, 1.92, 3.34, 2.39},
                                       {6.37, 3.79, 8.75, 5.68, 4.14, 4.02, 7.02, 4.18, 6.62, 0.47},
                                       {4.45, 2.59, 1.58, 5.28, 4.87, 5.61, 7.55, 8.84, 4.95, 3.12},
                                       {4.67, 8.09, 8.75, 8.12, 1.88, 9.99, 6.33, 0.83, 7.26, 9.87},
                                       {4.02, 6.79, 3.16, 2.14, 7.17, 0.02, 8.23, 5.28, 0.98, 1.19},
                                       {6.49, 8.74, 2.8, 9.79, 1.0, 8.54, 3.97, 0.81, 2.75, 4.53},
                                       {7.92, 8.61, 1.33, 5.21, 6.51, 3.47, 8.72, 2.78, 0.19, 0.41},
                                       {6.81, 5.58, 9.47, 9.38, 9.1, 0.42, 7.49, 7.01, 6.55, 7.12},
                                       {9.03, 6.4, 3.72, 5.38, 2.08, 5.87, 0.09, 1.51, 3.33, 7.9},
                                       {7.18, 3.38, 6.21, 0.41, 1.64, 9.82, 2.9, 3.95, 5.48, 2.93}});

    lib::time_taken t;
    t.start();
    auto c = (cpp_mat + cpp_mat_1);
    std::cout << "\n"
              << t.finish() << "\n";
    t.start();
    
    std::cout << "\n"
              << t.finish();
}
