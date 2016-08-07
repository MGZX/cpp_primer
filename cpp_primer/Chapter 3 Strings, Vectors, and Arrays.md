## 3.1 Namespace using Declarations

## 3.2 Library `String` type

### way to initialize a String

```cpp
string s1;
string s2(s1);
string s2 = s1;
string s3("value"); // direct initialization
string s3 = "value"; // copy initialization (with a '=')
string s4(n,'c');
```

### string Operations
![String operations](string_operations.PNG)

### `cin` on string
only read a space-separaded string

    cin >> a;
    cout << a;
    // if input is `Hello World!`
    // output is `Hello`

### read a whole line use `getline`
    string a;
    getline(cin, s); // without the new line at the end

### `empty()`
return a bool value

    if (!s.empty())
        cout << s << endl;
### `+` with string
only add to a string variable, can't add to a string literal

    string a = "abc";
    string b = a + "def"; // ok
    string c = "abc" + "def"; // error
**!!! string literal and string type is not the same type
   string leteral is build in type while string is not**

### cctype functions, deal with char in string
![cctype func](cctype_func.PNG)
in `<cctype> header`

### `range for` statement
    // sytax:
    for (declaration : expression)
        statement

    // eg:
    for (char c : "Hello World")
        cout << c << endl;

### `decltype()`
get a type for declaration

    // eg:
    string s = "Hello World";
    decltype(s.size()) size = 0;
    // size's type is string::size_type

### change char in a string
notice the use of reference

    string a = "Hello World";
    for(char &c = a)
        c = toupper(c);

## Library `vector` type

**??? templete and instance**

### initialize vector
![vector initialize](vector_init.PNG)
