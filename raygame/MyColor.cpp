#include "MyColor.h"


MyColor::MyColor()
{
}

MyColor::MyColor(int red, int green, int blue, int alpha)
{
	r = red;
	g = green;
	b = blue;
	a = alpha;

	clamp();
}

void MyColor::clamp()
{
	if (r > 255)
		r = 255;
	if (r < 0)
		r = 0;

	if (g > 255)
		g = 255;
	if (g < 0)
		g = 0;

	if (b > 255)
		b = 255;
	if (b < 0)
		b = 0;

	if (a > 255)
		a = 255;
	if (a < 0)
		a = 0;
}

Color MyColor::convertToRaylib()
{
	Color temp;
	temp.r = r;
	temp.g = g;
	temp.b = b;
	temp.a = a;
	return temp;
}

// Arithmetic Operators
MyColor MyColor::operator+(const MyColor & rhs) const
{
	MyColor temp((r + rhs.r), (g + rhs.g), (b + rhs.b), (a + rhs.a));
	temp.clamp();
	return temp;
}
MyColor MyColor::operator-(const MyColor & rhs) const
{
	MyColor temp((r - rhs.r), (g - rhs.g), (b - rhs.b), (a - rhs.a));
	temp.clamp();
	return temp;
}
MyColor MyColor::operator*(const MyColor & rhs) const
{
	MyColor temp((r * rhs.r), (g * rhs.g), (b * rhs.b), (a * rhs.a));
	temp.clamp();
	return temp;
}
MyColor MyColor::operator/(const MyColor & rhs) const
{
	MyColor temp((r / rhs.r), (g / rhs.g), (b / rhs.b), (a / rhs.a));
	temp.clamp();
	return temp;
}

// Compound Arithmetic Operators
MyColor& MyColor::operator+=(const MyColor & rhs)
{
	MyColor temp((r + rhs.r), (g + rhs.g), (b + rhs.b), (a + rhs.a));
	temp.clamp();
	r = temp.r;
	g = temp.g;
	b = temp.b;
	a = temp.a;
	return temp;
}
MyColor& MyColor::operator-=(const MyColor & rhs)
{
	MyColor temp((r + rhs.r), (g + rhs.g), (b + rhs.b), (a + rhs.a));
	temp.clamp();
	r = temp.r;
	g = temp.g;
	b = temp.b;
	a = temp.a;
	return temp;
}
MyColor& MyColor::operator*=(const MyColor & rhs)
{
	MyColor temp((r + rhs.r), (g + rhs.g), (b + rhs.b), (a + rhs.a));
	temp.clamp();
	r = temp.r;
	g = temp.g;
	b = temp.b;
	a = temp.a;
	return temp;
}
MyColor& MyColor::operator/=(const MyColor & rhs)
{
	MyColor temp((r + rhs.r), (g + rhs.g), (b + rhs.b), (a + rhs.a));
	temp.clamp();
	r = temp.r;
	g = temp.g;
	b = temp.b;
	a = temp.a;
	return temp;
}
bool MyColor::operator==(const MyColor & rhs)
{
	if (((r == rhs.r) && (g == rhs.g) && (b == rhs.b) && (a == rhs.a)))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool MyColor::operator!=(const MyColor & rhs)
{
	if (((r != rhs.r) && (g != rhs.g) && (b != rhs.b) && (a != rhs.a)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Not
MyColor MyColor::operator!() const
{
	MyColor temp(-r, -g, -b, a);
	return temp;
}
