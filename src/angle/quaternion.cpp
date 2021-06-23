// Copyright (c) 2021 ICHIRO ITS
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

#include <keisan/angle/quaternion.hpp>

namespace keisan
{

Quaternion::Quaternion()
{
}

Quaternion::Quaternion(const double & x, const double & y, const double & z, const double & w)
: x(x), y(y), z(z), w(w)
{
}

Quaternion::Quaternion(const Quaternion & other)
: x(other.x), y(other.y), z(other.z), w(other.w)
{
}

Quaternion & Quaternion::operator=(const Quaternion & other)
{
  x = other.x;
  y = other.y;
  z = other.z;
  w = other.w;

  return *this;
}

bool Quaternion::operator==(const Quaternion & other) const
{
  return x == other.x && y == other.y && z == other.z && w == other.w;
}

bool Quaternion::operator!=(const Quaternion & other) const
{
  return x != other.x || y != other.y || z != other.z || w != other.w;
}

}  // namespace keisan
