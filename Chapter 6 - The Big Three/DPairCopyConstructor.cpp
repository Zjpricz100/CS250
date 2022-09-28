DPair::DPair(const DPair& thePair)
{
   first = thePair.first;
   second = new int(*thePair.second);
}

// we MUST allocate memory for dynamic data with constructors

