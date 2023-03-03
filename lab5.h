#ifndef LAB5_H
#define LAB5_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <cmath>

using namespace std;

struct double_vector {
 double id;
 double from;
 double to;

 double_vector(const double_vector & i_v) : id(i_v.id), from(i_v.from), to(i_v.to) {}; // copy constructor

 double_vector() : id(-1), from(0), to(0) {}; // basic constructor
};

struct vect_pairs {
    double from;
    double to;
    double dist;
};

vector<double_vector> input_vector(string my_file);
double dot_product(double_vector vector_1, double_vector vector_2);
double vector_length(double_vector vector_1);
double cosine_distance(double_vector vector_1, double_vector vector_2);
vector<vect_pairs> vector_pairs (vector<double_vector> vect);

#endif
