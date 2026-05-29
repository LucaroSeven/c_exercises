# C Programming Exercises

This directory is set up for learning C by doing exercises.

## Files

- `1_hello_world.c` — your first exercise.
- `Makefile` — compiles exercises and stores compiled programs in `build/`.

## How to compile

Compile all `.c` exercises:

```sh
make
```

Compile one exercise:

```sh
make build/1_hello_world
```

## How to run

Run the first exercise:

```sh
make run EX=1_hello_world
```

Or run the compiled program directly:

```sh
./build/1_hello_world
```

## How to add a new exercise

Create a new `.c` file, for example:

```sh
2_variables.c
```

Then compile it with:

```sh
make
```

Run it with:

```sh
make run EX=2_variables
```

## Cleanup

Remove compiled output:

```sh
make clean
```
