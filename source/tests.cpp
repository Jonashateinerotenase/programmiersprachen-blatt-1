#define CATCH_CONFIG_RUNNER
//#include <catch.hpp>
#include "catch.hpp"
#include <cmath>

int max(int a, int b)
{
if(a<b)return b;
	else return a;
}

int gcd (int a, int b)
{
	int ergebnis=1;
	for(int i=1;i <= max(a,b);++i){
		if(a%i==0 && b%i==0){
			ergebnis=i;
		}

	}
return ergebnis;
}
int checksum (int sum){
	int res=0;
	while(sum>0){
		res=res+sum%10;
		sum=sum/10;
	}
	return res;
}

int sumMultiples()
{	
	int ergebnis=0;
	for(int i=1; i<=1000; ++i){
		if(i%3==0 || i%5==0){
			ergebnis=ergebnis+i;
		}
	}
	return ergebnis;
}


TEST_CASE (" describe_checksum ", "[checksum]")
{
REQUIRE (checksum (15) == 6 );
REQUIRE (checksum (101) == 2);
REQUIRE (checksum (12222) == 9);
}
TEST_CASE (" describe_sumMultiples ", "[sumMultiples]")
{
REQUIRE (sumMultiples () == 234168 );
}
int main (int argc , char * argv [])
{
return Catch :: Session (). run( argc , argv );
}

