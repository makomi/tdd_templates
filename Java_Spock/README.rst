==============
Java and Spock
==============

=====================  ==================
Programming language:  `Java`_, `Groovy`_
Unit test framework:   `Spock`_
Build automation:      `Maven`_
=====================  ==================


This project template will get you going when you want to get started with TDD in Groovy and/or Java.


How to build
============
* Install Java 1.8 or later
* Install Apache Maven (try sdkman_)
* ``cd`` to the Java folder
* ``$ mvn clean install``


Keeping your versions stable
============================
The project as it is will use the latest release versions of all plugins and libraries. If you want to use it in production, you will have to keep the versions stable::

    $ mvn versions:use-latest-releases


.. _Java: https://en.wikipedia.org/wiki/Java_%28programming_language%29
.. _Groovy: https://en.wikipedia.org/wiki/Groovy_%28programming_language%29
.. _Spock: https://en.wikipedia.org/wiki/Spock_%28testing_framework%29
.. _Maven: https://en.wikipedia.org/wiki/Apache_Maven
.. _sdkman: http://sdkman.io/
