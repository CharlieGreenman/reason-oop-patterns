type userBuilderType = {
  mutable name: string,
  mutable age: string,
  mutable phone: int,
  mutable address: string
};

module type UserBuilderType = {
  let name: string;
  let age: int;
  let phone: string;
  let address: string;
};

module BuilderPattern = fun(Builder: UserBuilderType) => {
  let builder = {};
  let setName name => builder.name = Builder.name;
  let getName () => builder.name;

  let setAge age => builder.age = Builder.age;
  let getAge () => builder.age;

  let setPhone phone => builder.phone = Builder.phone;
  let getPhone () => builder.phone;

  let setAddress address => builder.address = Builder.address;
  let getAddress () => builder.address;
};

BuilderPattern.setName "Charles";
Js.log(BuilderPattern.getName ());
