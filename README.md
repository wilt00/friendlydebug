# friendlydebug
The world's most encouraging (and unnecessary) C debugging library. 
Inspired by, and dedicated to, [@M-Berrada](https://github.com/M-Berrada).

Have you ever found yourself dropping printf statements into your C code, instead of taking the 30 seconds you'd need to go open an actual debugger? Sure you have! But that's so much work, typing out unique messages and remembering where they all came from in your code. What's more, sometimes the bugs are so tricky that you end up questioning every life decision that brought you to this point. Was I ever good at programming? Should I move to the country and take up goat farming? Will anyone ever love me? Well, worry no more. Friendlydebug gives you both the information and the emotional support you need to power through and squash that bug once and for all!

## Usage

```C
void fdbg_info()
```
Prints a dull, boring debug message to stderr, such as: `DEBUG: At line 46, function main, file test.c`

```C
void fdbg_message()
```
Prints a warm, encouraging message to stderr, such as `DEBUG: (At line 351, func main) I believe in you!` Isn't that nice?

```C
void fdbg_setname(char * name)
```
Call this function at the beginning of your code to teach Friendlydebug your name!

```C
void fdbg_personal()
```
Like `fdbg_message()`, but personalized with your own name!
