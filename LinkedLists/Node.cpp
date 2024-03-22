// Add includes for header files
#include "Node.hpp"

ostream& Node::print(ostream &os) const
{
  if(_data == nullptr)
    os << "There's nothing here!";
  else
    os << *_data;
  return os;
}

ostream& operator<<(ostream &os, const Node &n)
{
  return n.print(os);
}
