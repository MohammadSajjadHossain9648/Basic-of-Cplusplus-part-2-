#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/
                  https://www.educative.io/answers/deep-copying-vs-shallow-copying
                  https://dotnettutorials.net/lesson/deep-copy-and-shallow-copy-in-cpp/
                  https://www.javatpoint.com/cpp-copy-constructor
                  https://www.tutorialspoint.com/what-is-shallow-copy-and-how-it-is-different-from-deep-copy-in-chash
                  https://www.mylearningmania.com/2021/02/deep-and-shallow-copy-in-cpp.html
                  https://prepinsta.com/c-plus-plus-theory/shallow-and-deep-copy-in-cpp/
                  https://owlcation.com/stem/Copy-Constructor-shallow-copy-vs-deep-copy
*/
/*  shallow copy:
    The default copy constructor can only produce the shallow copy.
    A Shallow copy is defined as the process of creating the copy of an object by copying data of all the
    member variables as it is.
*/
/*  Shallow copy:
    shallow copy means both object access same memory. The problem with the shallow copy is that the two objects
    are not independent

    note: 1) default copy constructor does shallow copy.
          2) both object access same memory. If you modify the one object, the change will be reflected
          in the other object.
          3) if one object deleted, memory/referenced object must be destroyed and another object point nothing.
          4) shallow copy consume less memory.
          5) When dealing with a ​large number of pointers during programming, shallow copying​ is a bad idea since
          deleting one of the referenced objects, even accidentally, means that there are now a lot of
          dangling/stooped pointers in the code.
          6) The problem with the shallow copy is that the two objects are not independent.

*/
/*  Shallow copy:
    In this case, a copy of the references/addresses to h1 are c​opied into h2. Hence, the addresses of h1 and h2
    will be the same as they will be pointing to the same memory location.

    let an example:
        Hero h1(70, 'A');  // Hero(health, level)
        Hero h2(h1);

    now, see the diagram:
        Hero h1(original reference)                     Hero h2(copied reference of h1)
        --------------------------                        --------------------------
        |  -------               |                        |  -------               |
        |  | 125 | -> health     |                        |  | 125 | -> health     |
        |  -------               |                        |  -------               |
        |  -------               |                        |  -------               |
        |  | 239 | -> level      |                        |  | 239 | -> level      |
        |  -------               |                        |  -------               |
        --------------------------                        --------------------------
                        \                                               /
                         \                                             /
                          \                                           /
                           \       --------------------------        /
                            \      |  ------                |       /
                             \-->  |  | 70 | -> health      |   <--/
                                   |  ------                |
                                   |  125(address)          |
                                   |                        |
                                   |  -----                 |
                                   |  | A | -> level        |
                                   |  -----                 |
                                   |  239(address)          |
                                   --------------------------
                                    referenced object(memory)


    When either of the two object pointers is deleted, the other object loses the referenced object too. This is
    because the other object is still pointing to the memory allocation that has already been released. Now, the
    other non-deleted object pointer is a dangling pointer.
    If you modify the one object, the change will be reflected in the other object.

    remember:
    When dealing with a ​large number of pointers during programming, shallow copying​ is a bad idea since deleting
    one of the referenced objects, even accidentally, means that there are now a lot of dangling/stooped pointers
    in the code.
*/
/*
    In shallow copy, an object is created by simply copying the data of all variables of the original object.
    This works well if none of the variables of the object are defined in the heap section of memory. If some
    variables are dynamically allocated memory from heap section, then the copied object variable will also
    reference the same memory location.
    This will create ambiguity and run-time errors, dangling pointer. Since both objects will reference to the
    same memory location, then change made by one will reflect those change in another object as well. Since we
    wanted to create a replica of the object, this purpose will not be filled by Shallow copy.

    Note: C++ compiler implicitly creates a copy constructor and overloads assignment operator in order to perform
    shallow copy at compile time.
*/


/*  Deep copy:
    Deep copy means both object access same value with different memory.

    note: 1) user-define copy constructor does deep copy
          2) both object access same value but memory is different. if one object changed, other never changed.
          3) if one object deleted, other object still remain in memory. or can say that
          if one object pointer is deleted, the other will still have​ access to the referenced object’s value
          because it is still valid in the memory.
          4) Deep copying consumes much more memory, ​but it makes your code more robust. It also eliminates/destroy
          the risk of stooped/dangling pointers in the code since each object pointer points to a different
          location in the memory.
          5) When dealing with a ​large number of pointers during programming, deep copying​ is a good idea. cause
          no risk of stooped pointer in code.
          6) The relief with the deep copy is that the two objects are independent.
*/
/*
    Deep copy:
    In the case of deep copying, a copy of all the members of h1 are made, memory is allocated in a different
    location for h2, and the copied members are assigned to h2. The more accurate term to use would be “cloning”
    since they are identical yet different (i.e.,​ stored as two different entities in the memory space).

    let an example:
        Hero h1(70, 'A');  // Hero(health, level)
        Hero h2(h1);

    now, see the diagram:
        Hero h1(original reference)                     Hero h2(copied reference of h1)
        --------------------------                        --------------------------
        |  -------               |                        |  -------               |
        |  | 125 | -> health     |                        |  | 519 | -> health     |
        |  -------               |                        |  -------               |
        |  -------               |                        |  -------               |
        |  | 239 | -> level      |                        |  | 788 | -> level      |
        |  -------               |<--                     |  -------               |<--
        --------------------------  |                     --------------------------  |
                                    |                                                 |
                                    |                                                 |
                                    |                                                 |
                                    |                                                 |
       --------------------------   |                    --------------------------   |
       |  ------                |   |                    |  ------                |   |
       |  | 70 | -> health      | <--                    |  | 70 | -> health      | <--
       |  ------                |                        |  ------                |
       |  125(address)          |                        |  519(address)          |
       |                        |                        |                        |
       |  -----                 |                        |  -----                 |
       |  | A | -> level        |                        |  | A | -> level        |
       |  -----                 |                        |  -----                 |
       |  239(address)          |                        |  788(address)          |
       --------------------------                        --------------------------
            referenced object                             copied referenced object
            (memory of h1)                          (memory of h2 with a memory copy of h1)

    Now, in the case of deep copying, if one object pointer is deleted, the other will still have​ access to the
    referenced object’s value because it is still valid in the memory.

    note:
    Deep copying consumes much more memory, ​but it makes your code more robust. It also eliminates/destroy the risk
    of stooped/dangling pointers in the code since each object pointer points to a different location in the memory.
*/
/*
    In Deep copy, an object is created by copying data of all variables, and it also allocates similar memory
    resources with the same value to the object. In order to perform Deep copy, we need to explicitly define
    the copy constructor and assign dynamic memory as well, if required. Also, it is required to dynamically
    allocate memory to the variables in the other constructors, as well.
*/
int main()
{
}
