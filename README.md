## Setup

The easiest way to get up and running is to SSH into one of the lab machines. You can do this by running ssh,

```
ssh [username@]digital-XX.ee.byu.edu
```

Substitute your username for your CAEDM username and the XX for a number between 01 and 60. For example,

```
ssh bill@digital-05.ee.byu.edu
```

You can only do this when you are on campus.


## Clone Repo

While ssh'd into the Digital Lab computer, clone the playground repo:

```
git clone git@github.com:byu-ecen-224-classroom/playground.git
```

Then move into the newly created directory:

```
cd playground
```

## Running

To compile the code, you can use the included Makefile. If you add more files to the playground, you will have to modify the Makefile. To run the make file, type

```
make
```

This produces an executable called `main`. To run the code, type

```
./main
```

## Updating

I might push new updates to the playground with helpful utility functions. To update your code, you can run

```
git pull
```

This will pull down all the new changes onto your computer.
