let show () => {
  let a: FactoryMethod.abstractProduct  = (new FactoryMethod.productFactory 'A')#createProduct;
  let b: FactoryMethod.abstractProduct = (new FactoryMethod.productFactory 'B')#createProduct;

  Js.log a#method;
  Js.log b#method;
};

show();
