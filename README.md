![FIVEG](https://i.imgur.com/28UX83V.png)

Project site:

Block Explorer: https://5gexplorer.bitpool.ro/

Type: Cryptocurrency

Ticker: FIVEG

Algo: x16r

Max supply: 21.000.000

Current block size:

### 5G Principles:

All contributors are welcome

As a miner you should not use the biggest pools to follow main principles.

Easy to mine: x16r algorithm.

### Roadmap

Linux build - (COMPLETED)

Linux CLI binaries - (COMPLETED)

Windows build - (COMPLETED) 

Windows CLI binaries - (COMPLETED)

Windows GUI wallet - (COMPLETED)

Explorer - (COMPLETED)



### Ports:

RPC port: 8333

### Linux Install: First, install prerequisites listed above.
sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils python3 libboost-system-dev libboost-filesystem-dev libboost-chrono-dev libboost-test-dev libboost-thread-dev

### Download the github repository
git clone https://github.com/5G-Cash/5G.git
### Depending on your setup you may need to modify permissions (OPTIONAL)
chmod -R +x 5G/  
### Change directories to the newly created 5G directory
cd 5G
### Build the 5G application
./autogen.sh

./configure

make

make install # optional

### Change to one folder lower (your user home folder)
cd ..
### Create a folder named .5G
mkdir .5G
### Change to the .5G directory
cd .5G
### Create a new file named 5g.conf
nano 5g.conf

### To save this new file, hit CTRL-X, then Y to save new file.
### Change back to your home folder
cd ..
### Start 5G
~/5G/src/5gd
### The node will download blocks. You are now running a 5G node and wallet!

### Optional
#### If you want to run 5G in the background, start 5G with the -daemon flag:
~/5G/src/5gd -daemon
#### To stop 5G safely if it is running in daemon, close the application with 5g-cli stop
5g-cli stop
#### If you want to mine 5G in the background, start 5G with the -setgenerate true flag:
5g-cli setgenerate true

5G integration/staging tree
===========================

What is 5G?
----------------

5G is an experimental digital currency that enables instant payments to
anyone, anywhere in the world. 5G uses peer-to-peer technology to operate
with no central authority: managing transactions and issuing money are carried
out collectively by the network. 5G is the name of open source
software which enables the use of this currency.

For more information, as well as an immediately useable, binary version of
the 5G software, see https://5gcore.org/en/download/, or read the
[original whitepaper](https://5gcore.org/5g.pdf).

License
-------

5G is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/5g/5g/tags) are created
regularly to indicate new official, stable release versions of 5G.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write [unit tests](src/test/README.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`. Further details on running
and extending unit tests can be found in [/src/test/README.md](/src/test/README.md).

There are also [regression and integration tests](/test), written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/test) are installed) with: `test/functional/test_runner.py`

The Travis CI system makes sure that every pull request is built for Windows, Linux, and macOS, and that unit/sanity tests are run automatically.

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.

Translations
------------

Changes to translations as well as new translations can be submitted to
[5G's Transifex page](https://www.transifex.com/projects/p/5g/).

Translations are periodically pulled from Transifex and merged into the git repository. See the
[translation process](doc/translation_process.md) for details on how this works.

**Important**: We do not accept translation changes as GitHub pull requests because the next
pull from Transifex would automatically overwrite them again.

Translators should also subscribe to the [mailing list](https://groups.google.com/forum/#!forum/5g-translators).
