/**
* @file vectorTools.cpp
* @author David Tirri (david.tirri@ucdenver.edu)
* @brief Implementation for vector utility functions: addElements, filterElements,
* printElements, scaleElements, and splitString. Provides reusable vector
* manipulation tools with exception safety using const char* messages.
* @version 0.1
* @date 2025-10-07
*
* @copyright Copyright (c) 2025
* University of Colorado Denver - Department of Computer Science
*/

#include "vectorTools.h"
#include <iostream>
#include <algorithm>

using namespace std;

void addElements(vector<int>& vec, int arr[], int size) {
    if (size < 1) {
        throw "Array must have values";
    }
    // Optional micro-opt: reduce reallocations
    vec.reserve(vec.size() + static_cast<size_t>(size));

    // Fast bulk insert preserving order
    vec.insert(vec.end(), arr, arr + size);
}

vector<int> filterElements(vector<int>& inputVector, int thresholdValue) {
    if (inputVector.empty()) {
        throw "Empty Vector Found. Use populated one";
    }

    vector<int> filteredValues;
    filteredValues.reserve(inputVector.size());  // optional

    for (int value : inputVector) {              // preserve original order
        if (value <= thresholdValue) {
            filteredValues.push_back(value);
        }
    }
    return filteredValues;
}

void printElements(vector<int>& values, int itemsPerLine) {
    if (values.empty()) {
        throw "Empty Vector Found. Use populated one";
    }

    if (itemsPerLine <= 0) {
        itemsPerLine = static_cast<int>(values.size()); // print on one line
    }

    int itemsOnCurrentLine = 0;
    for (size_t elementIndex = 0; elementIndex < values.size(); ++elementIndex) {
        cout << values[elementIndex];
        ++itemsOnCurrentLine;

        const bool isEndOfRow    = (itemsOnCurrentLine == itemsPerLine);
        const bool isLastElement = (elementIndex + 1 == values.size());

        if (isEndOfRow && !isLastElement) {
            cout << '\n';            // break between rows
            itemsOnCurrentLine = 0;
        } else if (!isLastElement) {
            cout << ' ';             // space between items on the same row
        }
    }
    cout << '\n';                     // exactly one newline at the end
}

vector<float> scaleElements(vector<int>& inputValues) {
    if (inputValues.empty()) {
        throw "Empty Vector Found. Use populated one";
    }

    int minValue = inputValues[0];
    int maxValue = inputValues[0];
    for (int value : inputValues) {
        if (value < minValue) minValue = value;
        if (value > maxValue) maxValue = value;
    }

    vector<float> scaledValues;
    scaledValues.reserve(inputValues.size());

    if (minValue == maxValue) {
        // All values identical → return all zeros
        scaledValues.assign(inputValues.size(), 0.0f);
        return scaledValues;
    }

    float denominator = static_cast<float>(maxValue - minValue);
    for (int value : inputValues) {
        float scaled = static_cast<float>(value - minValue) / denominator;
        scaledValues.push_back(scaled);
    }
    return scaledValues;
}

vector<string> splitString(string& original, char delim) {
    vector<string> parts;
    parts.reserve(original.size() / 2 + 1);   // heuristic, optional

    string currentSegment;
    for (char ch : original) {
        if (ch == delim) {
            parts.push_back(currentSegment);  // may be empty (preserve)
            currentSegment.clear();
        } else {
            currentSegment.push_back(ch);
        }
    }
    parts.push_back(currentSegment);          // final segment (may be empty)
    return parts;
}