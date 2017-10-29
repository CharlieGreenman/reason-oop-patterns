

/* module type BUILDER = {
  let name = "asd",
  let age = 0;
  let phone = "";
  let address = "";
}; */

module type UserBuilderType = {
  let name: string;
  let age: int;
  let phone: string;
  let address: string;
};

module BuilderPattern = fun(Builder: UserBuilderType) => {
  let setName name => builder.name = name;
  let getName () => builder.name;

  let setAge age => builder.age = age;
  let getAge () => builder.age;

  let setPhone phone => builder.phone = phone;
  let getPhone () => builder.phone;

  let setAddress address => builder.address = address;
  let getAddress () => builder.address;
};

BuilderPattern.setName "Charles";
Js.log(BuilderPattern.getName ());
