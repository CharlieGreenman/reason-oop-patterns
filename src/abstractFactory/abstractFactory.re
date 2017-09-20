class virtual virtualProductA = {
  pub virtual methodA: string;
};

class virtual virtualProductB = {
  pub virtual methodB: int;
};

class abstractProductA = {
  inherit virtualProductA;
  pub methodA => "name";
};

class abstractProductB = {
  inherit virtualProductB;
  pub methodA => 2;
};

Js.log (new abstractProductA)#methodA;
