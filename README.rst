=============
TDD templates
=============

Ready-to-use TDD templates for Code Katas/ Coding Dojos


What it does
============

`Kata (programming)`_, Wikipedia:

    A **code kata** is an exercise in programming which helps a programmer hone
    their skills through practice and repetition.

**The problem.** Before you can start working on a kata, you have to prepare a development environment for the programming language and test framework you want to use. Ideally this environment includes a build automation tool that simplifies compiling and running your tests and application.

**The solution.** These templates provide you with such environments. Use them and focus on the coding: all necessary files exist and common build automation tools make it easy to compile and run your tests and application.

The current focus lies on unit tests but integration tests might follow in the future.

Typical use cases
-----------------

* *Getting started with unit testing/ test-driven development (TDD)*

  Choose a template and start coding.
  The README files will explain everything you need to know to get started.

* *Playing around with unit tests/ working on a code kata*

  Just select a programming language along with a unit testing framework and start by adding your tests.
  It is a repeatable way for quickly getting started with a deliberate practice session.

Key features
------------

* *Start coding right away.* Everything is in place; no further setup is needed.
* *Build targets* make it easy to compile and run your tests or application.
* *Minimal dependencies.* No ``autotools``, no advanced build systems.
* Distributable application binaries do not include any built-in tests.


Getting started
===============

Using a template for a Coding Dojo
----------------------------------

1. Clone this repo: ``$ https://github.com/makomi/tdd_templates.git``
2. Enter the template's folder: ``$ cd tdd_templates/C_CppUTest``
3. Checkout a new branch: ``$ git checkout -b dojo_yyyy-mm-dd``
4. Have a look at the template's README. It explains how to perform a typical TDD cycle with the template, c.p. `C_CppUTest`_.
5. Setup your IDE resp. editor so you can add your code to the template
6. Write code by following the 3 step TDD cycle: red, green, refactor
7. Commit your results for each step, e.g. ``$ git commit -am "Add test for 'loneliness'"``

Last but not least: Have fun :)

Example Code
------------

You can switch to the `TDD examples`_ repository to see these templates in action with actual application and test code.

Further reading
---------------

Have a look at `Dave Thomas' website`_ if you want to learn more about the concept of code katas or are looking for some katas to work on.


Contributing
============

This collection still lacks many common programming languages and unit testing frameworks. For additional ideas on how to contribute, have a look at the `open issues`_. Furthermore, if you have a neat idea for a new feature or some other improvement, I am looking forward to recieving a pull request from you:

1. `Fork this repo`_
2. Create your feature branch: ``$ git checkout -b my_new_feature``
3. Commit all your changes: ``$ git commit -am 'Add some feature'``
4. Push to your feature branch: ``$ git push origin my_new_feature``
5. Submit a `pull request`_

Please follow the `contribution guidelines`_ prior to making a pull request.


License
=======

**MIT**

See LICENSE_ for details.


Related projects
================

* `13coders/cookiecutter-kata-cpputest`_


Source
======

You can get the newest version from the `project's website`_.



.. _Kata (programming): https://en.wikipedia.org/wiki/Kata_%28programming%29
.. _xUnit: http://www.martinfowler.com/bliki/Xunit.html
.. _C_CppUTest: https://github.com/makomi/tdd_templates/tree/master/C_CppUTest
.. _TDD examples: https://github.com/makomi/tdd_examples/
.. _Dave Thomas' website: http://codekata.com/
.. _open issues: https://github.com/makomi/tdd_templates/issues
.. _Fork this repo: https://help.github.com/articles/fork-a-repo/
.. _pull request: https://help.github.com/articles/creating-a-pull-request/
.. _contribution guidelines: CONTRIBUTING.mkd
.. _LICENSE: LICENSE
.. _13coders/cookiecutter-kata-cpputest: https://github.com/13coders/cookiecutter-kata-cpputest
.. _project's website: http://github.com/makomi/tdd_templates/
