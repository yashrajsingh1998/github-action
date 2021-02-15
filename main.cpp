//#include<iostream>
//int main()
//{
//	std::cout<<"Building";
//	std::cout<<"Build Complete";
//	std::cout<<"final verification one";
//	return 0;
//}



#include <boost/chrono.hpp>
#include <cmath>
#include<bits/stdc++.h>
int main()
{
<<<<<<< HEAD
    boost::chrono::system_clock::time_point start = boost::chrono::system_clock::now();

    for ( long i = 0; i < 10000000; ++i )
    std::sqrt( 123.456L ); // burn some time

    boost::chrono::duration<double> sec = boost::chrono::system_clock::now() - start;
    std::cout << "took " << sec.count() << " seconds\n";
    return 0;
=======
	std::cout<<"Buildg";
	std::cout<<"Build Complete";
	std::cout<<"final verification done";
	return 0;
>>>>>>> cfc71e30cfc0455a4ff26752418a8c39e5328189
}
