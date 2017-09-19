class virtual virtualProductA = {
  pub virtual methodA: string;
};

class abstractProductA = {
  inherit virtualProductA;
  pub methodA => "name";
};

Js.log (new abstractProductA)#methodA;
