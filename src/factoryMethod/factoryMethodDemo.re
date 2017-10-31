let show = () => {
  let a: FactoryMethod.abstractProduct = (new FactoryMethod.productFactory)('A')#createProduct;
  let b: FactoryMethod.abstractProduct = (new FactoryMethod.productFactory)('B')#createProduct;
  Js.log(a#method1);
  Js.log(b#method1);
};

show ();
