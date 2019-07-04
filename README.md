Konjungate Core v1.0.0
===============================


https://www.konjungate.net


What is Konjungate?
----------------

KONJUNGATE - The Artbased Blockchain
To change the funding of Artists and Institutions.
Based on the cyber novel MACHFELD by Michael Mastrototaro © 1999 

Konjungate will chance the funding of contemporary Art and Art-Institutions. 

KONJUNGATE is based on the cyber novel MACHFELD written 1999 by Michael Mastrototaro. Strangely, the main character of the book is called Nakomoto and thus resembles the pseudonym of the BITCOIN inventor Satoshi Nakomoto. What a coincidence, right? Anyway.
In his cyber novel, Michael Mastrototaro describes 9 years before Bitcoin appears on the cryptocurrency horizon the mining of KONJUNGATE.
Now 20 years after publishing the novel online, KONJUNGATE appears as a Media Art project to decentralize the funding of international contemporary Artists and Institutions and to give a strong artistic statement in times of budget cuts.

How dose it work?
During the creation of the KONJUNGATE Blockchain, 1,25% of the total digital assets was premined. This amount of Tokens will be used as an initial found for distributing the Token to a wide range of international Art-Institutions, to support contemporary Artists and as registered capital for the charitable MACHFELD-Foundation (in establishing) which will ensure further distribution of tokens in the future and its task is to ensure value security.

The art installations
The distribution of KONJUNGATE to international Art Institutions will be realized during several Media Art installations (created by the Austrian Media Art Entity MACHFELD (Sabine Maier and Michael Mastrototaro)).
The media art object has a Masternode of KONJUNGATE inside. This Masternode will generate further KONJUNGATE Tokens during the time.
The generated Tokens will be distributed 65% to the Masternode holder (i.e. Institutions) and to 35% to the Miners. (After 25% Charity Found for the Foundation.)


People will be able to store, spend, exchange and later borrow practically any Cryptocurrency in the same way as any other currency, but in a quicker, cheaper and more secure way than it is possible now in any traditional bank. KONJ is a future of Art Founding System with limitless opportunities.



License
-------

Konjungate Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is meant to be stable. Development is normally done in separate branches.
[Tags](https://github.com/konjungate-platform/konjungate/tags) are created to indicate new official,
stable release versions of Konjungate Core.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).


Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write [unit tests](/doc/unit-tests.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`

There are also [regression and integration tests](/qa) of the RPC interface, written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/qa) are installed) with: `qa/pull-tester/rpc-tests.py`

The Travis CI system makes sure that every pull request is built for Windows
and Linux, OS X, and that unit and sanity tests are automatically run.

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.
