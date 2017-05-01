// OpenCV0207

// The purpose of this program is to exhibit the effect of 
// downsampling an image and using Canny edge detection.



// This program uses the pyrDown to blur and form an a downsampled image pyramid.
// Canny edge detection is applied to the downsampled image.

// Both the initial image and the processed result are shown.
// The processed result is written to a file before the program ends.



// Correct usage: OpenCV0207.exe input_image_filename downsampled_image_filename edgedetection_image_filename

// Example: OpenCV0207.exe Desert.jpg Desert_downsamp.jpg Desert_edgedetect.jpg



// Refer to http://docs.opencv.org/master for relevant documentation.


#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;




















int main(int argc, char** argv)
{
	//-------------------------------------------------------------------------
	// Test whether the number of arguments (argc) is not equal to 4.
	// If it is not equal to 4, 
	// output a message showing what the correct usage of this program is, 
	// then pause for the user response 
	// and return -1.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Declare char* (c-strings) to hold the three image filenames.
	//-------------------------------------------------------------------------

	char* filenameInput = argv[1];			// input file name
	char* filenameDownSampled = argv[2];	// output file name for downsampled image
	char* filenameEdgeDetect = argv[3];		// output file name for edge detection image







	//-------------------------------------------------------------------------
	// Declare Mat objects to hold the image data in memory.
	//-------------------------------------------------------------------------

	Mat imageInput;			// Declare a Mat object to contain the input image.
	Mat imageDownSampled;	// Declare a second Mat object to contain the output downsampled image.
	Mat imageEdgeDetect;	// Declare a third Mat object to contain the output edge detection image.





	//-------------------------------------------------------------------------
	// Use the imread function to read in a color image from a file 
	// whose name is in filenameInput.  
	// Store the image in the input image Mat object allocated above.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the data attribute of the Mat class to test whether any data was
	// actually input.  
	// If no data was input (file not found or could not be read as an image), then 
	// a. output a message, 
	// b. pause for the user's response, and
	// c. return -1.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Perform the downsampling.
	// Use the pyrDown function to convert the input image to a downsampled image.
	// Experiment with calling this function multiple times 
	// (you will need a new output image each time).
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code






	//-------------------------------------------------------------------------
	// Perform the edge detection.
	//
	// First, allocate a working Mat object to hold a gray-scale image.
	//
	// Second, use the cvtColor function to convert the downsampled image into
	// a gray-scale image (color to gray-scale conversion).
	//
	// Third, use the Canny function to perform edge detection on the gray-scale
	// image.  The gray-scale image is the input, the edge-detect image is the output.
	//
	// Experiment with values of the first and second threshold (see the documentation).
	// The first threshold should be smaller than the second threshold.  Typical values 
	// could be 10 and 100 or 20 and 70.  Try different values to find a set that gives
	// a clear meaningful edge-detection image.
	//
	// Finally, try a suggested aperture size of 3 for the Sobel operator and a flag of true
	// for the L2gradient.  You can try other values, to see what the effect is.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the namedWindow function to create a window for displaying the input
	// image.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the imshow function to display the input image in the first window 
	// that was created above.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the namedWindow function to create a window for displaying the
	// output downsampled image.  
	// Note: this must have a different name from the input image window, above.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the imshow function to display the downsampled image in the second window 
	// that was created above.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the namedWindow function to create a window for displaying the
	// output edge detection image.  
	// Note: this must have a different name from the two windows, above.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code







	//-------------------------------------------------------------------------
	// Use the imshow function to display the edge detection image in the third window 
	// that was created above.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code





	//-------------------------------------------------------------------------
	// Use the waitKey function to wait until the user presses any key, in the image window.  
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code





	//-------------------------------------------------------------------------
	// Use the imwrite function to write the downsampled image into the
	// downsampled image output file.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code





	//-------------------------------------------------------------------------
	// Use the imwrite function to write the edge detection image into the
	// edge detection image output file.
	//-------------------------------------------------------------------------
#pragma message ("*** add code ***")	// TODO: add your code here.  Replace this line with your code






	return 0;

}