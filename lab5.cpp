#include "lab5.h"



vector<double_vector> input_vector(string my_file){
	
	vector<double_vector> test_vect;
	ifstream input_file(my_file);

    	int id = 0;
	double from;
	double to;

    	while(input_file >> from >> to){

        	double_vector i_v;

        	i_v.from = from;
        	i_v.to = to;
        	i_v.id = id++;
        	test_vect.push_back(i_v);
	
	}
	return test_vect;
}

double dot_product(double_vector vector_1, double_vector vector_2){
	double dot_prod = (vector_1.from * vector_2.from) + (vector_1.to * vector_2.to);
	return dot_prod;
}

double vector_length(double_vector vector_1){
	double vec_len = sqrt(dot_product(vector_1, vector_1));
	return vec_len;
}

double cosine_distance(double_vector vector_1, double_vector vector_2) {
	double cos_dist = dot_product(vector_1, vector_2) / (vector_length(vector_1) * vector_length(vector_2));
	return cos_dist;
}

vector <vect_pairs> vector_pairs(vector<double_vector> &vect){
	
	vector<vect_pairs> vec1;
	
	for (int i = 0; i < vect.size() - 1; i++) {
		for (int j = i + 1; j < vect.size(); j++) {
			
			vect_pairs vector1;
			vector1.from = vect[i].from;
			vector1.to = vect[j].to;
			vector1.dist = cosine_distance(vect[i], vect[j]);
			vec1.push_back(vector1);
		}
	}
	return vec1;
}
