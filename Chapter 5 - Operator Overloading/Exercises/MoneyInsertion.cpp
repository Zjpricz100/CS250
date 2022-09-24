ostream& operator<<(ostream& out, const Money& theAmount) // remember, friend is only needed in the header
{
   out << "$ " << theAmount.amount;
   return out;
}

// NOTE

// SHOULD NOT USE FRIEND AS ITS A FRIEND ALREADY PER THE DECLARATION
// NOT CONST AS FRIEND FUNCTIONS IS NOT A MEMBER OF THE CLASS SO
    // NO CALLING OBJECT

// DO NOT USE GET FUNCTIONS AS FRIEND HAS ACCESS TO THE MEMBER VARS