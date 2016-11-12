package tdd

import spock.lang.*

class SomeSpockSpecification extends Specification {

    @Unroll
    def "Bar math: #a + #b + c should be #expected"() {
        given:
        def c = new Bar(1)

        when:
        def d = new Bar(a) + new Bar(b) + c

        then:
        d == expected

        where:
        a | b | expected
        1 | 1 | new Bar(3)
        2 | 2 | new Bar(5)
    }
}