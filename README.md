![bold_initiative_gnu_head](https://user-images.githubusercontent.com/571018/128744661-f4918019-b69f-4adc-859e-9d31aadac62a.png)


# Makefiles
Makefiles are such a handy tool and, yet, their sintax is kinda tricky and does not stick to your bones if you don't practice the art of writing them on a regular basis.

As an engineering manager, of course I do not. Yet, as a (very) hands-on engineering manager, I write code and, above all, I happily mentor young fellows that happen to work in my teams. Writing a clean, decent and intelligible makefile in shared development environments is a must.

I have set this repo up to remind me and my team how to start writing one in a style that has the goal of making makefile as explicit as possible. No dark arts, here, no [read the fucking manual](https://en.wikipedia.org/wiki/RTFM) to grasp some weird constructs.

Plain, simple makefiles that serve as a foundation to firestart new projects. With time and as projects grow, we accept complexity to increase, but I want to start plain and simple. I want projects to start intelligible in every aspect, even in obscure makefiles.

## What are these makefile doing?
They build the app contained in the <code>src</code> folder: a simple command line app, named <code>args-echo</code>, that dumps its entered arguments on the command line.

While the output ain't fancy and it's mission predictable, the code in src has been clearly over-engineered for such a simple task with the clear objective to increase the use cases for using make and the makefiles listed in this repo. Such a siple app is, in fact, built out of 3 (!) C files and two headers.

A <code>main()</code> function in main.c calls two functions sparsed in two distinct .c files: <code>count_args.c</code> and <code>list_args.c</code>.

For the program to build, all these three files must be compiled in the correct order. Intermediate object files must be staged in an <code>./obj</code> directory, the final executable is to be stored in a <code>./bin</code> directory.

## The simple one: makefile-explicit
This first makefile puts everything into sunlight. There is no variables, no shorcuts. All names, paths and flags are listed.

## The next step: makefile-with-variables
The makefile introduces variables for compiler flags, directories and dependencies. The sintax gets a little more complicated, yet it's still very predictable.

## Building the application

Clone this repo, enter the root folder and run:

<code>make -f makefile-explicit</code>

or

<code>make -f makefile-with-variables</code>

To clean the local build environment and start over, type the usual clean target, therefore:

<code>make -f <makefile name here> clean</code>

The commands above build the same identical binary. The do it with different strategies but the results are identical. This is a learning path: start looking at <code>makefile-explicit</code>, it's crystal clear how it build its targets. Then open <code>makefile-with-variables</code> and compare it with the previous one. It should give you the sense of a much concise sintax. Variables in makefiles turn out very useful in mid-size projects, use them wisely but use them.

## Going further
There's plenty of tutorials on the web about makefiles, by reading the few examples in this repo you now have a starting point.

When ready to make the quantum-leap jump, check out the official [GNU make documentation](https://www.gnu.org/software/make/manual/make.html).
