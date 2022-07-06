#include "functions.h"

std::vector<int> generateIntArrayFromInput(int argCount, char* args[]) {
	std::vector<int> theList;
	for (int i = 1; i < argCount; i++) {
		theList.push_back(atoi(args[i]));
	}
	return theList;
}

void bubbleSort(std::vector<int>& theVec) {
	int n = theVec.size();
	int i = 0;
	bool sorted = false;
	while (i < n && !sorted) {
		sorted = true;
		for (int j = 0; j < (n - 1); j++) {
			if (theVec[j] > theVec[j + 1]) {
				int temp = theVec[j];
				theVec[j] = theVec[j + 1];
				theVec[j + 1] = temp;
				sorted = false;
			}
		}
	}
}