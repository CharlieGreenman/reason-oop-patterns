module type User = {
  type t;
  let name: string;
  let age: int;
  let phone: string;
  let address: string;

  let create : (~name:string, ~age:int, ~phone:string, ~address:string) => t;
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

module BuilderPattern = (User: User) => {
  type t = {
    mutable name: string,
    mutable age: int,
    mutable phone: string,
    mutable address: string,
  };

  let setName = (builder, name) => builder.name = name;
  let getName = (builder) => builder.name;

  let setAge = (builder, age) => builder.age = age;
  let getAge = (builder) => builder.age;

  let setPhone = (builder, phone) => builder.phone = phone;
  let getPhone = (builder) => builder.phone;

  let setAddress = (builder, address) => builder.address = address;
  let getAddress = (builder) => builder.address;

  let getResult = (builder) =>
    User.create(~name=builder.name, ~age=builder.age,
                ~phone=builder.phone, ~address=builder.address)
};

module Director = (User: User, Builder: UserBuilder with type user = User.t) => {
  let construct = (builder) => {
    Builder.setName(builder, "Charles");
    Builder.setAge(builder, 120)
  };
};

/* Js.log(Builder ({builder: asd})); */
