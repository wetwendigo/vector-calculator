/// <summary>
/// This class represents a single 2D vector. A 2D vector can be
/// set, gotten, and printed to the console using user-defined
/// precision.
/// <remarks>
/// Contains functions that overload the arithmetic operators +,
/// -, *, and /. This simplifies 2D vector arithmetic.
/// </remarks>
/// </summary>
/// See <see cref="Vector2D.cpp"/> for function definitions.
/// Author: Solomon Colley
/// Since: 09/07/2019

#pragma once

#include <iomanip>
#include <sstream>
#include <string>
#include <typeinfo>
#include "OperationException.h"

class Vector2D
{
public:
	/// <summary>
	/// The default constructor. Sets the vector to default values.
	/// </summary>
	Vector2D();

	/// <summary>
	/// A parameterized constructor. Sets the vector to the
	/// parameter values.
	/// </summary>
	/// <param name="x">the 2D vector's x-value</param>
	/// <param name="y">the 2D vector's y-value</param>
	Vector2D(const double x, const double y);

	/// <summary>
	/// The destructor. Frees allocated memory.
	/// </summary>
	~Vector2D();

	/// <summary>
	/// Sets this 2D vector's x- and y-values using the parameter
	/// values.
	/// </summary>
	/// <param name="x">the 2D vector's x-value</param>
	/// <param name="y">the 2D vector's y-value</param>
	void setVector(const double x, const double y);

	/// <summary>
	/// Gets this 2D vector's x-value.
	/// </summary>
	/// <returns>this 2D vector's x-value</returns>
	const double getX();

	/// <summary>
	/// Gets this 2D vector's y-value.
	/// </summary>
	/// <returns>this 2D vector's y-value</returns>
	const double getY();

	/// <summary>
	/// Formats this 2D vector as a string object without using
	/// decimal precision.
	/// </summary>
	/// <returns>this 2D vector as a formatted string</returns>
	const std::string toString();

	/// <summary>
	/// Using user-defined precision, formats this 2D vector as
	/// a string object.
	/// </summary>
	/// <param name="precision">user-defined decimal precision</param>
	/// <returns>this 2D vector as a formatted string</returns>
	const std::string toString(const int precision);

	/// <summary>
	/// Operator + overloader that computes the sum of 2 2D vectors.
	/// </summary>
	/// <param name="v">a 2D vector</param>
	/// <returns>the sum of 2 2D vectors</returns>
	const Vector2D operator+(const Vector2D& v);

	/// <summary>
	/// Operator - overloader that computes the difference of 2 2D vectors.
	/// </summary>
	/// <param name="v">a 2D vector</param>
	/// <returns>the difference of 2 2D vectors</returns>
	const Vector2D operator-(const Vector2D& v);

	/// <summary>
	/// Operator * overloader that computes the product of 2 2D vectors.
	/// </summary>
	/// <param name="v">a 2D vector</param>
	/// <returns>the product of 2 2D vectors</returns>
	const Vector2D operator*(const Vector2D& v);

	/// <summary>
	/// Operator / overloader that computes the quotient of 2 2D vectors.
	/// </summary>
	/// <param name="v">a 2D vector</param>
	/// <returns>the product of 2 2D vectors</returns>
	const Vector2D operator/(const Vector2D& v);
private:
	double x, y; // x- and y-values of the 2D vector
}; // end Vector2D

