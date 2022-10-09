ostream& operator<<(ostream& out, const DPair& thePair)
{
   out << "(" << thePair.first << ", " << *thePair.second << ")";
   return out;
}

