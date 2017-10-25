type userBuilderType = {
  mutable name: string,
  mutable age: int,
  mutable phone: string,
  mutable address: string
};

module BuilderPattern = {
  let builder = {
    name: "",
    age: 0,
    phone: "",
    address: ""
  };
  let setName name => builder.name = name;
  let getName () => builder.name;

  let setAge age => builder.age = age;
  let getName () => builder.age;

  let setPhone phone => builder.phone = phone;
  let getPhone () => builder.phone;

  let setAddress address => builder.address = address;
  let getAddress () => builder.address;
};

BuilderPattern.setName "Charles";
Js.log(BuilderPattern.getName ());
