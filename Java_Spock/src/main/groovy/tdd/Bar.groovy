package tdd

import groovy.transform.Immutable

@Immutable
class Bar {
    int value

    public Bar plus(Bar other) {
        return new Bar(this.value + other.value)
    }
}
