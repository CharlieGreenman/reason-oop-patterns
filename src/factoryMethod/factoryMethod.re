class virtual abstractProduct = {
  pub virtual method: string
};

class concreteProductA = {
  pub method => "This is method of ConcreteProductA";
};

class concreteProductB = {
  pub method  => "This is method of ConcreteProductB";
};

class productFactory (productType: char) => {
  let message productType => switch productType {
    | 'A' => (new concreteProductA);
    | 'B' => (new concreteProductB);
  };

  pub createProduct => message productType;
}
