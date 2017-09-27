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
  pub createProductB => (new productB1);
};

class virtual concreteFactory2 = {
  pub createProductA => (new productA2);
  pub createProductB => (new productB2);
};

let f (p: abstractProductA) => Js.log p#methodA;
f (new productA1);
