type userBuilderType = {
  mutable name: string,
  mutable age: int,
  mutable phone: string,
  mutable address: string
};

module type UserBuilderType = {
  let name: string;
  let age: int;
  let phone: string;
  let address: string;
};

module BuilderPattern = fun(Builder: UserBuilderType) => {
  let builder = {
    name: "asd",
    age: 0,
    phone: "",
    address: ""
  };

  let setName = builder.name = Builder.name;
  let getName () => builder.name;

  let setAge = builder.age = Builder.age;
  let getAge () => builder.age;

  let setPhone = builder.phone = Builder.phone;
  let getPhone () => builder.phone;

  let setAddress = builder.address = Builder.address;
  let getAddress () => builder.address;
};

module SetOfIntPairs = BuilderPattern({
  let age = 12;
  let name = "asd";
  let phone = "(123) 456-9876";
  let address =  "770";
});

Js.log(SetOfIntPairs.getName ());
Js.log(SetOfIntPairs.getAge ());
Js.log(SetOfIntPairs.getPhone ());
Js.log(SetOfIntPairs.getAddress ());
