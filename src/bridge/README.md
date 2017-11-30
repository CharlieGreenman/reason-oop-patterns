# Bridge pattern
"Decouple an abstraction from its implementation so that the two can vary independently".

##### Problem with the above description
One note with the above description, is that it can be a bit hard to understand.
I know that I personally had trouble understanding it. A couple of questions I had.
1. What is the relation between abstraction and implementation?
2. "... so that the two can vary", what two are we talking about? Are we just talking
about the abstraction and the implementation?
  * If so what does the bridge pattern accomplish, and why even choose the name bridge in the first place?

##### Way of Explaining the bridge pattern in English.
###### Let's Imagine the following Scenario:
Think of the bridge pattern as the item(Item A) being changed, and the item(Item B A.K.A Implementor) changing the item(Item A) being changed.

###### How to Simplify, Starting from the Top
If we were to try and create a way so that we can create a base for both, and re-create the objects with differences here and there, how would we do it?

For instance, imagine Item A is a television, and item B is a remote. Whenever there is a different Item A, Item B will always be different. The best way would be to create an abstract core for both TV, and remote. Moving forward, one would then be able to just specify the differences for both, but keep the core abstract, or virtual class in tact.

##### What problems can the Bridge design pattern solve?

* An abstraction and its implementation should be defined and extended independently from each other.
###### Minor problem
* A compile-time binding between an abstraction and its implementation should be avoided so that an implementation can be selected at run-time.

###### What solution does the Bridge design pattern describe?
* Separate an abstraction (Abstraction) from its implementation (Implementor) by putting them in separate class hierarchies.
* Implement the `Abstraction` in terms of (by delegating to) an `Implementor` object.
