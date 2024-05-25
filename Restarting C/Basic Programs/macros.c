// MACROS
// In C, macros are a way to define simple, reusable code snippets. They are created using the #define preprocessor directive.
// Macros are often used to create constants, inline functions, or to perform code generation. 

//  1. Simple Constants:
   #define PI 3.14159
   
// 2. **Function-Like Macros:**
   #define SQUARE(x) ((x) * (x))
   int result = SQUARE(5);  // Expands to: ((5) * (5))

// Note: Be cautious with function-like macros to avoid unexpected behavior due to argument evaluation.

// 3. Conditional Macros:
   #define MAX(x, y) ((x) > (y) ? (x) : (y))
    // This macro returns the maximum of two values.
   int max_value = MAX(10, 20);  // Expands to: ((10) > (20) ? (10) : (20))

// 4. Stringizing Operator (`#`):
   #define STRINGIZE(x) #x
    // This macro converts its argument to a string.
    printf("%s\n", STRINGIZE(Hello));  // Expands to: printf("%s\n", "Hello")

// 5. Token Concatenation Operator (`##`):
   #define CONCAT(x, y) x ## y

   // This macro concatenates two tokens.
   int xy = CONCAT(42, 7);  // Expands to: int xy = 427;
