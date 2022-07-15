# 伴伴學 x HACK a nice day：Linux for Beginners


## 活動進行摘要

* Zoom 聊天室用

```
FB社團: https://www.facebook.com/groups/accomdemy
分享共筆: https://hackmd.io/@andrewintw/ByP9nsesO
活動一覽: https://hackmd.io/@accomdemy/rkmKTY1Yu
```

* 分享時間 (section1~3)
* 玩玩 GitHub (有時間的話)
    * 從伴伴學 github fork [accomdemy](https://github.com/accomdemy/accomdemy)
    * 把這份共筆 push 到我的 forked repo
    * 對伴伴學 github 送出 pull request (PR)
    * Ref: [commit emoji]([https://github.com/ikatyang/emoji-cheat-sheet](https://gist.github.com/parmentf/035de27d6ed1dce0b36a))


## 預先準備軟體

在課程之前，你可以事先下載（甚至安裝）以下的軟體

* [VirtualBox](https://www.virtualbox.org/wiki/Downloads) (win/mac/linux)
    * VirtualBox platform packages (主程式, 可以先安裝)
    * VirtualBox Oracle VM VirtualBox Extension Pack (建議下載)
* [Vagrant](https://www.vagrantup.com/downloads) (win/mac/linux) (可以先安裝)
* [Ubuntu 18.04LTS 伺服器版本 iso](https://ftp.ubuntu-tw.org/ubuntu-releases/18.04.5/ubuntu-18.04.5-live-server-amd64.iso)
* [MobaXterm Home Edition (Portable edition)](https://mobaxterm.mobatek.net/download-home-edition.html) (非必要。用來連線 ssh、打 windows 指令的環境)


## Section 1 -- 前導


### What is OS

![](https://i.imgur.com/zBSJ2b7.png)

* Application 和 Hardware 之間的中介層
* 控制硬體的資源（RAM、儲存空間、行程...）
    * 執行 WORD 的時候，需要 OS 配記憶體資源給 WORD 運作
    * 下載 5GB 的檔案時，OS 需要保留能夠存放 5GB 資料的資源(ex: 硬碟空間)


### Linux 歷史

* 1985, GNU Project, Richard Stallman(RMS)
* 1987/5/23, GCC (GNU Compiler Collection/GNU C Compiler)
* 1989/6/8, bash 
* 1991/8/25, comp.os.minix Newsgroup

![](https://i.imgur.com/L6B7Ffi.jpg)

* 1991/9/17, linux kernel 0.01 Released (10,239 lines)
* 芬蘭三寶 :joy:：聖誕老人、Nokia、Linux
* 1993, Red Hat, Inc
* 1993/9/15, Debian 0.01 Released
* Hacker 文化
    * [Revolution OS (作業系統革命)](https://www.youtube.com/watch?v=vWwvh3036Fw) (紀錄片 2001)
    * [The Code](https://www.bilibili.com/video/BV1us411z7X4) (紀錄片 2001)
    * How To Become A Hacker ([英文](http://www.catb.org/~esr/faqs/hacker-howto.html)/[簡中](https://translations.readthedocs.io/en/latest/hacker_howto.html))


### Linux Distribution

* 發行版 (distro)
* Linux --> 指的是 Linux Kernel
* 作業系統要能夠讓人使用，還需要應用程式
* https://distrowatch.com/
* [LFS Project - Linux From Scratch!](https://www.linuxfromscratch.org/lfs/)


## Section 2 -- 建立 Linux 環境


* Multi-booting (多重開機)

### What is virtualization (虛擬化技術)

![](https://decotl.com/wp-content/uploads/2020/01/VIRTUALIZATION.png)

* 使用軟體
    * [Oracle VirtualBox](https://www.virtualbox.org/)
    * [VMware](https://www.vmware.com/tw.html)
    * Microsoft Virtual PC
* 延伸伴學: [20210610 伴伴學：揚翔帶你用 Docker 自架服務](https://youtu.be/gNuTBnhdOuQ)


### Lab Time!

* Create your First Virtual Machine
* Install Ubuntu OS on Virtual Machine


## Section 3 -- CLI & Linux File System Hierarchy


### SSH 連線

* ip address
* port --> service


### 基礎指令

* ls
* cd
* pwd
* mkdir
* touch
* cp
* mv
* rm
* cat
* less

### 安裝套件

```
$ sudo apt-get update
$ apt-cache search <pkgname> # 搜尋套件
$ sudo apt-get install <pkgname>  # 安裝
```

### Linux vs Windows


* [FHS, Filesystem Hierarchy Standard](https://zh.wikipedia.org/wiki/%E6%96%87%E4%BB%B6%E7%B3%BB%E7%BB%9F%E5%B1%82%E6%AC%A1%E7%BB%93%E6%9E%84%E6%A0%87%E5%87%86)
* mount point vs C:\ D:\
* /dev device node vs 裝置管理員
* apt/yum/... vs 控制台>程式和功能
* 可執行檔 vs .exe


### 其他你應該知道的

* 行程相關　ps, kill, jobs, &
* 導向操作　>, >>, 1>, 2>, 2>&1
* 管線操作　|
* xargs
* awk
* sed
* tr
* vim 或 nano 編輯器的使用


## 補充 (如果有時間的話)

* [install raspberry pi OS](https://www.raspberrypi.org/documentation/installation/)
* [use google VPS](https://andrewintw.github.io/create-a-vps-on-google-compute-engine/)



## 工商時間 :joy:

[Learn Linux with the Raspberry Pi](https://www.youtube.com/watch?v=0k23A-GIRjw&list=PLyHt1h0azRjBHl51dAS10jcCs0XxQ6Iw7) 是今年 3 月份在 [HACK a nice day](https://www.facebook.com/groups/hackanicedays) 社團執行的線上分享計畫。

目的是帶領大家透過 Raspberry Pi 官網的資料去學 Linux。目前執行了兩個系列分享：「Raspberry Pi Documentation 導讀」以及「Linux Command Night」。


### Raspberry Pi Documentation 導讀

主要是導讀 Pi 官方的文件。

[分享筆記](https://hackmd.io/@andrewintw/rJFgInh-d) 

part1 忘記錄影了 :joy: 不過不太重要 XD

{%youtube 0k23A-GIRjw %}

{%youtube t39lHga7eYU %}


### Linux Command Night

主要是分享 Linux 指令，這些都是我工作上會用到的指令和觀念。

[分享筆記](https://hackmd.io/@andrewintw/BJJ1JImM_)

{%youtube VrIP07CeseU %}

{%youtube fcuHtJqBP-Q %}

{%youtube iTkB0Af3sQo %}


### 特定主題分享 (內網穿透)

{%youtube 9u6n45gaXWY %}

# Q&A
- Q from Paul: 如何盈利？
- A from Andrew & 黑貓: 有分社群版本或企業版，可能是靠企業版在賺錢（實際上不是靠企業版在賺錢的）在購買官方技術支援的時候才付費，Ubuntu本身是沒有在營利的，但相關技術支援公司Canonical 公司有在盈利。
- 馬爸之後可以分享Linux的賺錢模式

- Q from Adam: Virtual Box還支援32位元嗎？
- A from Andrew: 現在還有支援
- A from Jerry: https://www.virtualbox.org/wiki/Downloads
上面沒寫清楚
不知道32bit os是否可以安裝
- A from Will: If you're looking for the latest VirtualBox 5.2 packages, see VirtualBox 5.2 builds. Please also use version 5.2 if you still need support for 32-bit hosts, as this has been discontinued in 6.0. Version 5.2 will remain supported until July 2020. 所以能用的只有5.2
- A from Zhu Qi: 補充一下，一般Vitual box / VMWare 等虛擬機軟體，都能支持32-bit/64-bit的.iso鏡像安裝包

- Q from Bruce: 請問有用過WSL嗎 
- A from Andrew: 沒用過，待會可以玩玩看
- A from 舜傑：用過，讚讚

- Q from 皮爸:如果有兩個鍵盤，兩個滑鼠，可以操作嗎？
- A from Andrew: 可以，但是不太知道為什麼
- A from Jerry: 以前有這樣的設備，以前電腦貴，真的有這樣的裝置在賣

- Q from 皮爸: 真的很像docker，為什麼不用docker?
- A from Andrew: VM比較像機器，要裝什麼就裝什麼。Docker有相依性的問題，如果熟的話也可以用Docker。Virtual box建立網路拓墣很方便。可以搜尋vagrant vs docker
- Sharing from Adam: 16.4 ubuntu 有中文版。
- A from Will: VM是從硬體開始模擬，模擬完整的電腦。Docker還是需要靠主機系統。

- Q from Paul: what is sudo?
- A from Dar: super user do
- A from Andrew: Sudo 事實上是一個群組，有加入這個群組的人就可以使用這個指令，執行root的權限

- Q from 皮爸：副檔名
- A from Andrew: 關於.exe檔可以用file指令來看看

- Q from 皮爸：apt可以下載，但公司網路有限制，有辦法離線安裝嗎？
- A from Andrew: 用deb這個關鍵字搜尋，可以使用manual install
- A from Dar: https://pkgs.org/download/apt-offline
- https://gist.github.com/ycku/fa3110bce427cf2c1f1ca4a680d594e8
- A from Dahai: https://www.debian.org/distrib/packages
- A from Will: /etc/apt/source.conf
- 裡面就藏.DEB的主機
- 不然就是找package mirror server

From Dar:
保護 電腦不輸入 rm

http://blog.xsoin.com/2016/10/rm-rf.html

alias rm = trash
trash() {
  mv $@ ~/.trash/
}

alias rm='echo "This is not the command you are looking for."; false'