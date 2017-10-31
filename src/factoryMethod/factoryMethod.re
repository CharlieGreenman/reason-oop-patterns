class virtual abstractProduct = {
  pub virtual method1: string;
};

class concreteProductA = {
  inherit class abstractProduct;
  pub method1 = "This is method1 of ConcreteProductA";
};

class concreteProductB = {
  inherit class abstractProduct;
  pub method1 = "This is method of ConcreteProductB";
};

class productFactory (productType: char) = {
  let message = (productType) =>
    switch productType {
    | 'A' => new concreteProductA
    | 'B' => new concreteProductB
    };
  pub createProduct = message(productType);
};
