// Copyright (c) 2021 Ichiro ITS
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#ifndef KEISAN__POINT_2_HPP_
#define KEISAN__POINT_2_HPP_

namespace keisan
{

struct Point2
{
  Point2();
  Point2(double x, double y);
  Point2(const Point2 & point);

  Point2 & operator=(Point2 & point);
  Point2 & operator+=(Point2 & point);
  Point2 & operator-=(Point2 & point);

  Point2 & operator+=(double value);
  Point2 & operator-=(double value);
  Point2 & operator*=(double value);
  Point2 & operator/=(double value);

  Point2 operator+(Point2 & point);
  Point2 operator-(Point2 & point);

  Point2 operator+(double value);
  Point2 operator-(double value);
  Point2 operator*(double value);
  Point2 operator/(double value);

  static double distance_between(Point2 & point_a, Point2 & point_b);
  static double angle_between(Point2 point1, Point2 point2);

  double magnitude();
  double direction();

  Point2 normalize();

  double x;
  double y;
};

}  // namespace keisan

#endif  // KEISAN__POINT_2_HPP_
