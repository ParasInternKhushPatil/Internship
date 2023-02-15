// C++ program for the above approach
#include <iostream>
#include <math.h>
using namespace std;

// Function to find the magnitude
// of the given vector
double magnitude(double arr[], int N)
{
	// Stores the final magnitude
	double magnitude = 0;

	// Traverse the array
	for (int i = 0; i < N; i++)
		magnitude += arr[i] * arr[i];

	// Return square root of magnitude
	return sqrt(magnitude);
}

// Function to find the dot
// product of two vectors
double dotProduct(double arr[], double brr[], int N)
{
	// Stores dot product
	double product = 0;

	// Traverse the array
	for (int i = 0; i < N; i++)
		product += arr[i] * brr[i];

	// Return the product
	return product;
}

double angleBetweenVectors(double arr[], double brr[], int N)
{
	// Stores dot product of two vectors
	double dotProductOfVectors
		= dotProduct(arr, brr, N);

	// Stores magnitude of vector A
	double magnitudeOfA
		= magnitude(arr, N);

	// Stores magnitude of vector B
	double magnitudeOfB
		= magnitude(brr, N);

	// Stores angle between given vectors
	double radians = dotProductOfVectors
				/ (magnitudeOfA * magnitudeOfB);
		
	// Print the angle
	double degree = acos(radians);  
	
	// Return the Radians
	return degree * 180 / 3.14;
      	 
}
// Driver Code
int main()
{
	// Given magnitude arrays
	double arr[] = { 1, 3, 1};
	double brr[] = { 2, 2, 2};
	double crr[] = { 3, 2, 3};
	
	// Size of the array
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call to find the
	// angle between two vectors
	double angle1 = angleBetweenVectors(arr, brr, N);
	double angle2 = angleBetweenVectors(brr, crr, N);
	double angle3 = angleBetweenVectors(arr, crr, N);
	
	cout << "Cosine of an angle is 1st vector and 2nd vector:"<< angle1  << endl;
	cout << "Cosine of an angle is 2nd vector and 3rd vector:"<< angle2  << endl;
	cout << "Cosine of an angle is 1st vector and 3rd vector:"<< angle3  << endl;
	
	double angle4 = angle1 + angle2;
	
	if (angle4 = angle3)
		cout << "Two consecutive rotation is equivalent to one single rotation by angle (α + β)"<< endl;
	else 
		cout << "Two consecutive rotation is not equivalent to one single rotation by angle (α + β)"<< endl;
      return 0; 
}
