type abstractProductA = {.
  methodA: string
};

type abstractProductB = {.
  methodB: int
};

type abstractFactory = {.
  createProductA: abstractProductA,
  createProductB: abstractProductB
};

class virtual virtualProductA = {
  pub virtual methodA: string;
};

class virtual virtualProductB = {
  pub virtual methodB: int;
};

class productA1 = {
  pub methodA => "This is methodA of ProductA1";
};

class productB1 = {
  pub methodB => 1;
};

class productA2 = {
  pub methodA => "This is methodA of ProductA2";
};

class productB2 = {
  pub methodB => 2;
};

class virtual concreteFactory1 = {
  pub createProductA => (new productA1);
};

let f (p: abstractProductA) => Js.log p#methodA;
f (new productA1);
