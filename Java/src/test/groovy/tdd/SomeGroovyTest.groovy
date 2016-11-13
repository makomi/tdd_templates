package tdd

import org.junit.Test;

class SomeGroovyTest {
    @Test
    void "Foo are equal by value"() throws Exception {
        assert new Foo(1) == new Foo(1)
    }
}
