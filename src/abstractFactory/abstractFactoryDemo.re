let show () => {
  let factory1: AbstractFactory.abstractFactory = new AbstractFactory.concreteFactory1;
  let tester1: AbstractFactory.testFactory = (new AbstractFactory.testFactory(factory1));
  tester1#test();

  let factory2: AbstractFactory.abstractFactory = new AbstractFactory.concreteFactory2;
  let tester2: AbstractFactory.testFactory = (new AbstractFactory.testFactory(factory2));
  tester2#test();
};

show();
