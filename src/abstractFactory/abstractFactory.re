type abstractProductA = {
  methodA: string
};

type abstractProductB = {
  methodB: int
};


class virtual virtualProductA = {
  pub virtual methodA: string;
};

class virtual virtualProductB = {
  pub virtual methodB: int;
};

class virtual abstractFactory = {
  pub virtual createProductA : virtualProductA;
  pub virtual createProductB : virtualProductB;
};

class productA1 = {
  inherit virtualProductA;
  pub methodA => "This is methodA of ProductA1";
};

class productB1 = {
  inherit virtualProductB;
  pub methodB => 1;
};

class productA2 = {
  inherit virtualProductA;
  pub methodA => "This is methodA of ProductA2";
};

class productB2 = {
  inherit virtualProductB;
  pub methodB => 2;
};

class virtual concreteFactory1 = {
  inherit abstractFactory;
  pub createProductA => (new productA1);
};
