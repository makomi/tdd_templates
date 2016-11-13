package tdd;

import org.junit.Test;

import static org.hamcrest.MatcherAssert.*;
import static org.hamcrest.Matchers.*;

public class SomeJavaTest {
    @Test
    public void foo_areEqual_byValue() throws Exception {
        assertThat(new Foo(1), equalTo(new Foo(1)));
    }
}
