module type User = {
  type t;
  let name: string;
  let age: int;
  let phone: string;
  let address: string;

  /* let create : (~name:string, ~age:int, ~phone:string, ~address:string) => t; */
};

module type UserBuilder = {
  type t;
  type user;

  let setName: (t,string) => unit;
  let getName: t => string;
  let setAge: (t, int) => unit;
  let getAge: t => unit;
  let setPhone: (t, string) => unit;
  let getPhone: t => unit;
  let setAddress: (t, string) => unit;
  let getAddress: t => unit;
};

module BuilderPattern = fun(User: User) => {
  let setName = (builder, name) => builder.name = name;
  let getName = (builder) => builder.name;

  let setAge = (builder, age) => builder.age = age;
  let getAge = (builder) => builder.age;

  let setPhone = (builder, phone) => builder.phone = phone;
  let getPhone = (builder) => builder.phone;

  let setAddress = (builder, address) => builder.address = address;
  let getAddress = (builder) => builder.address;
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
