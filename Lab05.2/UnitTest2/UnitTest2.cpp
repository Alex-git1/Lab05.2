#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		void A(const double x, const int n, double& a) {
			double R = (-1.0) * (x * x) / n;
			a *= R;
		}
		
		TEST_METHOD(TestMethod1)
		{
			double a = 1.0;
			A(1.0, 1, a);  
			Assert::AreEqual(-1.0, a, 1e-9);
		}
	};
}
