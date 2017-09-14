class product = {};

let a: int = 1;

let b: int = 2;

let c: int = a + b;

class stack_of_ints = {
  as self;
  val mutable the_list: list int = []; /* instance variable */
  pub push x =>
    /* push method */
    the_list = [x, ...the_list];
};
