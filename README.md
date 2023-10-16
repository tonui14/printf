# Printf Project

## Contributors
- [Daisy Tonui](https://github.com/lxmwaniky/)
- [Alex Mwaniki](https://github.com/lxmwaniky/)

## Description

The goal of this project is to create a custom ```printf``` function in C that can format and display text in the console based on a format string and an unspecified number of arguments.

## Prototype

```c
int _printf(const char *format, ...);
```

## Return Value

The `_printf` function will return the number of characters printed (excluding the null byte used to end output to strings).

## Printf cases to handle
- printf(“%s”, — — — — -)
- printf(“%c”, — )
- printf(“%%”)
- printf(“ String here”)
- printf(“%d or %i”)

## Supported Conversion Specifiers

The custom `printf` function will handle the following conversion specifiers:

- `%c`: Print a single character.
- `%s`: Print a null-terminated string.
- `%%`: Print a percent symbol.

Additionally, the following conversion specifiers for integers will also be handled:

- `%d`: Print a signed integer.
- `%i`: Print a signed integer.

## Collaborators

- [Daisy Tonui](https://github.com/tonui14/)
- [Alex Mwaniki](https://github.com/lxmwaniky/)
