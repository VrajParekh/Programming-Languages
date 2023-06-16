// #include<iostream>
// using namespace std;
// int main()
// {
//     enum Meal{breakfast,lunch,dinner};
//     Meal m1=lunch;
//     cout<<m1;
//     return 0;
// }
// -----------------------------------------------------
// // Example 1 : Enumeration Type
// #include <iostream>
// using namespace std;

// enum week
// {
//     Sunday,
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday
// };

// int main()
// {
//     week today;
//     today = Wednesday;
//     cout << "Day " << today + 1;
//     return 0;
// }
// // Output
// //     Day 4
// -----------------------------------------------------
// // Example2: Changing Default Value of Enums

// #include <iostream>
// using namespace std;

// enum seasons
// {
//     spring = 34,
//     summer = 4,
//     autumn = 9,
//     winter = 32
// };

// int main()
// {

//     seasons s;

//     s = summer;
//     cout << "Summer = " << s << endl;

//     return 0;
// }
// // Output
// // Summer = 4
// -----------------------------------------------------
// // Example3:
// #include<iostream>
// using namespace std;

// int main()
// {
//     // Defining enum Gender
//     enum Gender
//     {
//         Male,
//         Female
//     };

//     // Creating Gender type variable
//     Gender gender = Male;

//     switch (gender)
//     {
//     case Male:
//         cout << "Gender is Male";
//         break;
//     case Female:
//         cout << "Gender is Female";
//         break;
//     default:
//         cout << "Value can be Male or Female";
//     }
//     return 0;
// }
// // Output:
// // Gender is Male
// -----------------------------------------------------
// Example:4
// using namespace std;

// // Defining enum Year
// enum year {
//     Jan,
//     Feb,
//     Mar,
//     Apr,
//     May,
//     Jun,
//     Jul,
//     Aug,
//     Sep,
//     Oct,
//     Nov,
//     Dec
// };

// // Driver Code
// int main()
// {
//     int i;

//     // Traversing the year enum
//     for (i = Jan; i <= Dec; i++)
//         cout << i << " ";

//     return 0;
// }

// Output:
// 0 1 2 3 4 5 6 7 8 9 10 11
