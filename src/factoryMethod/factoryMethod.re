type abstractProduct = {.
  method: string
};

class concreteProductA = {
  pub method => "This is method of ConcreteProductA1";
};

class concreteProductB = {
  pub method  => "This is method of ConcreteProductA1";
};

class productFactory (productType: char) => {
  let message productType => switch productType {
    | 'A' => (new concreteProductA);
    | 'B' => (new concreteProductB);
  };

  pub createProduct => message productType;
}
