# Bridge pattern
"Decouple an abstraction from its implementation so that the two can vary independently".

##### Problem with the above description
One note with the above description, is that it can be a bit hard to understand.
I know that I personally had trouble understanding it. A couple of questions I had.
1. What is the relation between abstraction and implementation?
2. "... so that the two can vary", what two are we talking about? Are we just talking
about the abstraction and the implementation?
  * If so what does the bridge pattern accomplish, and why even choose the name
  bridge in the first place?

##### Way of Explaining the bridge pattern in English.
###### Let's Imagine the following Scenario:
Think of the bridge pattern as the item(Item A) being changed, and the
item(Item B A.K.A Implementor) changing the item(Item A) being changed.

###### How to Simplify, Starting from the Top
If we were to try and create a way so that we can create a base for both, and
re-create the objects with differences here and there, how would we do it?

The simple way would be to create an implementer class that would create both
objects at the same time. It would be for instance a door implementer class.
We would be able to pass a different sort of knob. One without a lock, one
with a lock. One maybe with touchscreen capabilites. The only part of this door
that would change would be the knob. The understanding with the door part of the
implementer class, strictly within the bridge pattern is that it will stay, more
or less the same. The refined abstractions will have the ability to constantly
extend the object.

##### What problems can the Bridge design pattern solve?
* An abstraction and its implementation should be defined and extended
 independently from each other.
###### Minor problem
* A compile-time binding between an abstraction and its implementation
should be avoided so that an implementation can be selected at run-time.

###### What solution does the Bridge design pattern describe?
* Separate an abstraction (Abstraction) from its implementation (Implementor)
by putting them in separate class hierarchies.

* Implement the `Abstraction` in terms of (by delegating to) an `Implementor` object.
