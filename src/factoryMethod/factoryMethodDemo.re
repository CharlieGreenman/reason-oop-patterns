let show () => {
  let a  = (new FactoryMethod.productFactory 'A')#createProduct;
  let b  = (new FactoryMethod.productFactory 'B')#createProduct;

  Js.log a#method;
  Js.log b#method;
};

show();
