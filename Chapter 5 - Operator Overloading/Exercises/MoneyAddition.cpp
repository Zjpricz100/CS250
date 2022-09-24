Money Money::operator+(const Money& otherAmount) const
{
   return Money (amount + otherAmount.amount);
}

// NOTE MEMBER FUNCTION WHICH MEANS WE MAKE CONST AND WE HAVE DIRECT ACCESS
// TO AMOUNT