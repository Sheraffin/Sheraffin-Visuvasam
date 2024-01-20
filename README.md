DESCRIPTION:
BOOKSHOP MANAGEMENT SYSTEM:
In this project bookshop management system , the program includes several classes and member functions to perform certain process such as:
1.Entry of the book 2.To buy the Book 3.To search the Book
4.To edit the details of the Book


First, In the class DATA we get basic details of the book in separate member functions, In gettitle get the title of the book, In getauthor get author name of the book , In getid get the unique id of the book , In publish enter the publisher name .to put entry of the book in the bookshop.
Then in class EDITDATA  edit the details of the book given by the user to get details of another book in separate functions, gettitle1 , getauthor1 , getid1 , publish1, to get title ,author name
,ID and publisher name of that newbook from the user to search or to put entry of that new book .
In the class SEARCH search the required book of the user in the bookshop by using searchbook member function. In that compare the author and title of the book available in bookshop , If it is available print “Book found successfully “. Else, print “Book is not found”.
In class BUY buy the book which the user put entry , In buybook function . first check the stock and if the stock is greater than the quantity of book you want then calculate the price of the book, Else print the book is not in stock.
In main function bu using switch case call every function to execute and end the program.
 

CONCEPTS USED IN BOOKSHOP MANAGEMENT SYSTEM PROGRAM:



1.	CLASSES AND OBJECT:
In C++ programming, a Class is a fundamental block of a program that has its own set of methods and variables. You can access these methods and variables by creating an object or the instance of the class.
2.	MULTILEVEL INHERITANCE:
In multilevel inheritance, a child class inherits all its parent classes' properties. The base class is the parent class of all sub- classes in multilevel inheritance. Inheritance goes from parent to child.
3.	CONSTRUCTOR:
A constructor in C++ is a special 'MEMBER FUNCTION' having the same name as that of its class which is used to initialize some valid values to the data members of an object. It is executed automatically whenever an object of a class is created.
4.	INLINE FUNCTION:
Inline function in C++ is an enhancement feature that improves the execution time and speed of the program.
5.	AUTO STORAGE CLASS:
The auto keyword is a simple way to declare a variable that has a complicated type. For example, you can use auto to declare a variable where the initialization expression involves templates, pointers to functions, or pointers to members.
 
6.	SCOPE RESOLUTION:
The Scope Resolution Operator (also called Paamayim Nekudotayim) or in simpler  terms,  the double colon,  is a  token that allows  access  to static,  constant,  and  overridden properties or methods of a class. When referencing these items from outside the class definition, use the name of the class.
7.	STATIC MEMBER DATA:
Static data members are class members  that  are  declared  using the static keyword. There is only one copy of the static  data member in the class, even if there are many class objects. This is because all the objects share the static data member.
