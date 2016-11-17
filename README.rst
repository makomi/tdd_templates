=============
TDD templates
=============

a collection of ready-to-use code skeletons, each setup for a specific combination of programming language and unit testing framework


What it does
============

These TDD templates give you everything you need in order to start a small test driven project. They are sorted according to the programming language and unit testing framework they use.

Everything is setup so you can immediately start coding: all necessary files exist and the ``Makefile`` allows you to compile and run your application via ``$ make main`` and your tests via ``$ make test``.

Typical use cases
-----------------

* *You are new to unit testing and want to get your feet wet?*

  These templates allow you to start coding immediately.
  They also provide you with a good opportunity to compare different unit test frameworks.

* *You just want a bare bone TDD project so you can play around with unit tests?*

  Select a programming language along with a unit testing framework and start coding.

Key features
------------

* *Start coding right away.* Everything is in place; no further setup is needed.
* ``$ make test`` compiles and runs the tests
* ``$ make main`` compiles and executes the application


Getting started
===============

Setup:

#. Clone the repo: ``$ git clone https://github.com/makomi/tdd_templates.git``
#. Enter a template's folder: ``$ cd tdd_templates/C_CppUTest``

A typical TDD cycle consisting of writing a test, writing the function code, and refactoring:

#. Write a test in ``./test/UnitTests.cc``
#. Compile and run the test: ``$ make test``
#. Write function code in ``./src/module.h` and `./src/module.c``
#. Compile and run the test: ``$ make test``
#. Refactor if the test passes
#. Repeat

In order to run the application, you will have to also follow these steps:

#. Write application code in ``./src/main.c``
#. Compile and run the application: ``$ make main``

At the end you might want to delete the temporary files: ``$ make clean``

Have a look at the `TDD examples`_ repository to see these templates in action.


Contributing
============

This collection still lacks many common programming languages and unit test frameworks. Have a look at the `open issues`_ for additional ideas on how to contribute. Furthermore, if you have a neat idea for a new feature or some other improvement, I am looking forward to recieving a pull request from you:

1. `Fork it`_
2. Create your feature branch: ``$ git checkout -b my-new-feature``
3. Commit all your changes: ``$ git commit -am 'add some feature'``
4. Push to your feature branch: ``$ git push origin my-new-feature``
5. Submit a `pull request`_

Please follow the `contribution guidelines`_ prior to making a pull request.


License
=======

**MIT**

See LICENSE_ for details.


Source
======

You can get the newest version from the `project's website`_.



.. _TDD examples: https://github.com/makomi/tdd_examples/
.. _open issues: https://github.com/makomi/tdd_templates/issues
.. _Fork it: https://help.github.com/articles/fork-a-repo/
.. _pull request: https://help.github.com/articles/creating-a-pull-request/
.. _contribution guidelines: CONTRIBUTING.mkd
.. _LICENSE: LICENSE
.. _project's website: http://github.com/makomi/tdd_templates/
