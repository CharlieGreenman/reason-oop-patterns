let g = new AbstractFactory.testFactory(new AbstractFactory.concreteFactory1);
Js.log (g#createProductA#methodA);

let show () => {
  let factory1: AbstractFactory.abstractFactory = new AbstractFactory.concreteFactory1;
};
