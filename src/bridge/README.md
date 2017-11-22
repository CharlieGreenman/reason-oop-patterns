# Bridge pattern
"Decouple an abstraction from its implementation so that the two can vary independently".

##### What problems can the Bridge design pattern solve?

* An abstraction and its implementation should be defined and extended independently from each other.
###### Minor problem
* A compile-time binding between an abstraction and its implementation should be avoided so that an implementation can be selected at run-time.

###### What solution does the Bridge design pattern describe?
* Separate an abstraction (Abstraction) from its implementation (Implementor) by putting them in separate class hierarchies.
* Implement the `Abstraction` in terms of (by delegating to) an `Implementor` object.
