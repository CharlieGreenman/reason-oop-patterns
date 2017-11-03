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
  let getAge: t => int;
  let setPhone: (t, string) => unit;
  let getPhone: t => string;
  let setAddress: (t, string) => unit;
  let getAddress: t => string;
};

module BuilderPattern = (User: User) => {
  type t = {
    mutable name: string,
    mutable age: int,
    mutable phone: string,
    mutable address: string
  };
  type user = User.t;

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
    Builder.setAge(builder, 120);
    Builder.setPhone(builder, "(123) 456-7890");
    Builder.setAddress(builder, "123 Fake St.");
  };
};

module ConcreteUser = {
  let name:string = "Charles";
  let age:int = 120;
  let phone:string = "(123) 456-7890";
  let address:string = "123 Fake St.";
  type t = {
    mutable name: string,
    mutable age: int,
    mutable phone: string,
    mutable address: string
  };
  let create = (~name:string, ~age:int, ~phone:string, ~address:string) => {
    name: "fake name",
    age: 120,
    phone: "(123) 456-7890",
    address: "123 Fake St."
  };

};

module MyBuilder = BuilderPattern(ConcreteUser);

module DisplayName = Director(ConcreteUser, MyBuilder);

let builder = DisplayName.construct({
  name: "Henry",
  age: 200,
  phone: "words words",
  address: "address address"
});

/* Js.log(MyBuilder.getName(builder)); */
