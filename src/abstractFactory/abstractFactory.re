type abstractProductA = {. methodA : string};

type abstractProductB = {. methodB : int};

class virtual abstractFactory = {
  pub virtual createProductA: abstractProductA;
  pub virtual createProductB: abstractProductB;
};

class productA1 = {
  pub methodA = "This is methodA of ProductA1";
};

class productB1 = {
  pub methodB = 1;
};

class productA2 = {
  pub methodA = "This is methodA of ProductA2";
};

class productB2 = {
  pub methodB = 2;
};

class concreteFactory1 = {
  inherit class abstractFactory;
  pub createProductA = new productA1;
  pub createProductB = new productB1;
};

class concreteFactory2 = {
  inherit class abstractFactory;
  pub createProductA = new productA2;
  pub createProductB = new productB2;
};

class testFactory (factory: abstractFactory) => {
  as self;
  pub createProductA = factory#createProductA;
  pub createProductB = factory#createProductB;
  pub test () => {
    Js.log self#createProductA#methodA;
    Js.log self#createProductB#methodB
  };
};
