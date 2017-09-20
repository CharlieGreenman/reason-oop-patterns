class virtual virtualProductA = {
  pub virtual methodA: string;
};

class virtual virtualProductB = {
  pub virtual methodB: int;
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

class productB1 = {
  inherit virtualProductB;
  pub methodB => 2;
};

Js.log (new abstractProductA)#methodA;
