#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "lab5.h"
#include "doctest.h"

TEST_CASE("Test 1"){

	SUBCASE("Test: Double Vector"){
		vector<double_vector> test1 = input_vector("double_vectors.txt");
	
		CHECK(test1.size() == 4);

		CHECK(test1[0].id == 0);
		CHECK(test1[1].id == 1);
		CHECK(test1[2].id == 2);
		CHECK(test1[3].id == 3);

		CHECK(test1[0].from == 0.3);
		CHECK(test1[1].from == 0.9);
        	CHECK(test1[2].from == 9.9);
		CHECK(test1[3].from == 8.9);
	
		CHECK(test1[0].to == 0.4);
		CHECK(test1[1].to == 1.0);
		CHECK(test1[2].to == 2.3);
		CHECK(test1[3].to == 22.1);
	}

	SUBCASE("Test: Dot Product"){

		double_vector test2;
		double_vector test3;

		test2.from = 2.0;
        	test2.to = 4.0;
        	
        	test3.from = 1.0;
        	test3.to = 2.0;
        	CHECK(dot_product(test2, test3) == 10.0);
	}
	
	SUBCASE("Test: Cosine Distance"){

		double_vector test4;
		double_vector test5;

		test4.from = 8.0;
        	test4.to = 5.0;
        	
        	test5.from = 2.0;
        	test5.to = 6.0;
        	CHECK(cosine_distance(test4, test5) > .77);
	}
}


