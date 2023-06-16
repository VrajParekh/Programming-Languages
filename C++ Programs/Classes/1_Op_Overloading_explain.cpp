//Definition:- To assign more than one operation on same operator known as operator overloading

//syntax:
//      return-type operator_op(argument list)  here 'operator' is function
//      {
//          body;
//      }

// We cannot overload below mention operators (using member function);
// • Class member access operators (.)
// • Scope resolution operator (::)
// • Size operator (sizeof)
// • Conditional operator (?:)

// We cannot overload below mention operators (using friend function)
// • Assignment operator =
// • Function call operator ()
// • Subscripting operator ([])
// • Class member access operator (->)

// Two types of operator overloading in ++
// 1. unary operator overloading
// 2. Binary operator overloading

//1.UNARY OPERATOR OVERLOADING:-
// "An operator which contain only one operand is called unary operator overloading"
//syntax:
//      1)class function:
//                      return-type operator_op(arg list)
//                      {
//                           body;
//                      }
//      2)friend function:
//                      friend return-type operator_op(arg list);

//1.BIARY OPERATOR OVERLOADING:-
// "An operator which contain two operands is called biary operator overloading"
//syntax:
//      1)class function:
//                      return-type class_name :: operator op(arg list) //only single argument
//                      {
//                           body;
//                      }
//      2)friend function:
//                      friend return-type operator op(arg list); //we can pass only two arguments
