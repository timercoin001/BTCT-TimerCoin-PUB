BTCT-TimerCoin
=====================================
TimerCoin创建于2019/02/22，是一种基于BTC技术的新型电子货币，采用了P2P技术，去中心化，任何人都能够使用它。  
TimerCoin, founded in February 22, 2019, is a new electronic currency based on BTC technology. It adopts P2P technology and is decentralized. Anyone can use it.

TimerCoin的重要特点：出块时间为10分钟，初始块奖励为100单位，挖矿奖励的数量根据挖掘高度的增加按比例减少，每个新区块的奖励数量都将微量减少。  
TimerCoin's important features: 10 minutes of block time, 100 units of initial block reward, the number of mining rewards decreases proportionally according to the increase of mining height, and the number of rewards for each new block will be reduced slightly.

TimerCoin如果保持15年不间断的挖矿，每个区块的产出将会从100不断减少至大约0.04，15年间的总量约999万个。  
If Timer Coin keeps digging for 15 years, the output of each block will decrease from 100 to about 0.04, with a total of 9.99 million in 15 years.


LOGO的含义/Meaning of logo
------
如LOGO一样，未来BTCT基金将目光聚焦在：书、路、人，三个方向。体现在教育、交通、公益的行业价值，树立新的财富观。  
Like logo, btct fund will focus on book, road and people in the future. It is reflected in the industry values of education, transportation and public welfare, and a new concept of wealth is established.


应用平台/Application platform
------
提供多平台的版本：WINDOWS/MACOS/IOS/安卓/UBUNTU/CENTOS/等  
Provide multi-platform versions: WINDOWS/MACOS/IOS/Android/UBUNTU/CENTOS/etc.

   
  
  
参考文件：
=====================================

What is Bitcoin?
----------------

Bitcoin is an experimental new digital currency that enables instant payments to
anyone, anywhere in the world. Bitcoin uses peer-to-peer technology to operate
with no central authority: managing transactions and issuing money are carried
out collectively by the network. Bitcoin Core is the name of open source
software which enables the use of this currency.

License
-------

Bitcoin Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the Bitcoin
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[mailing list](http://sourceforge.net/mailarchive/forum.php?forum_name=bitcoin-development).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see [doc/coding.md](doc/coding.md)) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/bitcoin/bitcoin/tags) are created
regularly to indicate new official, stable release versions of Bitcoin.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

Development tips and tricks
---------------------------

**compiling for debugging**

Run configure with the --enable-debug option, then make. Or run configure with
CXXFLAGS="-g -ggdb -O0" or whatever debug flags you need.

**debug.log**

If the code is behaving strangely, take a look in the debug.log file in the data directory;
error and debugging messages are written there.

The -debug=... command-line option controls debugging; running with just -debug will turn
on all categories (and give you a very large debug.log file).

The Qt code routes qDebug() output to debug.log under category "qt": run with -debug=qt
to see it.

**testnet and regtest modes**

Run with the -testnet option to run with "play bitcoins" on the test network, if you
are testing multi-machine code that needs to operate across the internet.

If you are testing something that can run on one machine, run with the -regtest option.
In regression test mode, blocks can be created on-demand; see qa/rpc-tests/ for tests
that run in -regtest mode.
