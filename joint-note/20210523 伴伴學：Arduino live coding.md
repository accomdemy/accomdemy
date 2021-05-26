# 20210523 伴伴學：Arduino live coding

## 簡介
因為 arduino.taipei 社團的網友在使用 arduino 遇到問題無法順利解決，因此邀請他做視訊交流，分享他是如何寫程式使用開發板，希望獲得大家有效及時的幫助解決他面臨的問題。
社團發文討論請見：
https://www.facebook.com/groups/arduinotaipei/permalink/4510042565689826/?locale=zh_TW

### 活動過程中的亮點
剛剛聽他說「真的有耶！！」讓人想起第一次看到自己程式的輸出成功的喜悅！！

### 引導者
張書銘

### 時間
2021 0523 10:00 ~ 13:00

### 活動資訊
https://fb.me/e/2gU2aUhK0

### 共筆
https://hackmd.io/YvYWAfxSSgSImFg9tn43bQ

### 參與人數
最高 19 人
最後結束 13 人

### 臉書觀看人數
最高 9 人
最後結束 4 人

## 視訊紀錄
https://youtu.be/yRzDXVvCBmc

## 聊天室記錄
```
09:57:52	 From minexo79 : good morning
09:58:01	 From 鄭鴻旗 : 哈囉，各位早安
09:58:50	 From 鄭鴻旗 : 等一下張同學上線
09:59:19	 From 鄭鴻旗 : 我在進行開場說明
10:02:55	 From Brian Huang : 早安
10:03:14	 From Q : 早
10:04:33	 From 張書銘 : 我
10:10:16	 From minexo79 : 慢慢來 別緊張
10:12:07	 From Q : 可以快速手繪一下你目前的電路圖   然後對實體電路拍照傳上來給大家看
10:13:45	 From 鄭鴻旗 : 這樣有聚焦過去嗎
10:13:56	 From 廖敏健 : 有
10:15:17	 From Q : 玻璃纖維
10:15:41	 From 廖敏健 : 要量一下馬達要舉的面罩重量
10:16:53	 From minexo79 : 眼睛安裝LED 一眼常亮 一眼閃爍
利用Servo Motor 面罩開合（向上翻）
喇叭出聲音
10:16:57	 From minexo79 : 幫你們整理重點
10:17:42	 From Q : 先讓馬達能動  再上機構負重  若無法作動或是覺得吃力  再更換馬達 與檢討供電
10:18:43	 From Q : 不是這樣算的
10:19:16	 From 黃嘉和 : 行繩子拉
10:19:29	 From 黃嘉和 : 用繩子拉
10:20:36	 From 鄭鴻旗 : mg996r
10:21:23	 From 黃嘉和 : 有很大的吸引力！！

產品規格：

尺寸:40.8*20*38mm

重量:55g

速度:4.8V@ 0.20sec/60°

6.0V@ 0.19sec/60°

扭力:4.8V@13kg-cm

6.0V@15kg-cm

電壓:4.8V-7.2V

空載工作電流: 120mA

堵轉工作電流: 1450mA

響應脈寬時間： ≤5usec

角度偏差：回中誤差0度， 左右各45°誤差≤3°

齒輪： 5級金屬齒輪組

連接線長度： 300mm

接口規格： JR/FUTABA通用

產地：中國
10:22:13	 From 廖敏健 : 電源外接就對了。
10:22:22	 From 鄭鴻旗 : 沒錯
10:27:14	 From 火腿 : 早安
10:28:30	 From Q : 使用 SG90 或是其他小電流伺服機.開arduino的servo範例.直接測試
10:32:50	 From Q : 焦距跑掉了
10:33:49	 From 馬爸 : 抱歉... 要先離線...
10:34:16	 From 鄭鴻旗 : 馬爸，bye ~
10:35:00	 From 廖敏健 : 是不是一個一個做好一點
10:35:10	 From 廖敏健 : 一次全上問題多
10:35:36	 From 鄭鴻旗 : andrew 正在補充說明
10:36:17	 From Q : 模組化測試  程式分開寫
硬體上我也會分開  不會一次都接好
10:40:09	 From 舜傑 張 : 這是哪個Linux發行版?
10:41:19	 From 黑貓 : 這些在產品開發是很重要的一環
不管是軟硬體都一樣
10:43:15	 From 彭大海 : 動手寫+1
10:44:03	 From Q : 我推薦  用範例碼複製貼上
但是必要了解你貼上的東西
10:44:47	 From 彭大海 : Pair programming正在發生！！
10:45:05	 From 鄭鴻旗 : 什麼意思？
10:45:20	 From 彭大海 : 結對程式設計
10:45:35	 From 彭大海 : 老手帶新手
10:46:15	 From Q : 用範例讓馬達動   再往下
10:48:35	 From Q : 常數
10:48:55	 From Q : 宣告成   易讀的常數
11:02:45	 From 彭大海 : 或許328裡面的fuse設定沒設好
11:05:11	 From Q : 快速鍵  ctrl+"/"
11:07:05	 From Q : 一行一行加//  很累
11:13:31	 From 謝祥辰 : DFPlayer_Mini_Mp3
11:18:34	 From Q : 我的經驗  DFPlayer_Mini_Mp3
模組 
 硬體 只接 Vcc/GND/RX  / spk
 程式使用 serial.write 就能撥放
 對我來說使用函式庫反而是多餘而複雜的
請參考
11:18:39	 From andrew_lin@gemteks.com : https://shopee.tw/%E3%80%90%E8%90%8D%E8%90%8D%E3%80%91Mini-Arduino-%E9%96%8B%E6%BA%90-Mini-MP3-Player-mini-%E6%92%AD%E6%94%BE%E6%A9%9F-DFPlayer-i.10708564.7649239983
11:19:06	 From 黑貓 : https://www.instructables.com/Tutorial-of-MP3-TF-16P/
11:19:09	 From 火腿 : https://wiki.dfrobot.com/DFPlayer_Mini_SKU_DFR0299
11:21:12	 From Q : https://www.dropbox.com/s/p7lsxs5r751wcju/df.PNG?dl=0
11:22:09	 From Q : 隨時可以找得到的資料  我都建議刪掉
11:22:47	 From Q : 這模組只要單向就可以作用
11:24:54	 From andrew_lin@gemteks.com : http://imgtest.dfrobot.com.cn/DFRobotCnWikiImage/miniplayer_pin_map.png
11:25:39	 From 鄭鴻旗 : 徵求下次主題，伴伴學 ：陪你做杜邦線～
11:27:04	 From 黑貓 : 伴伴學 ：Arduino週邊大解密 (?
11:30:39	 From 彭大海 : 感受到那美好了
11:36:49	 From 黑貓 : 我用打的
我大概懂張同學現在缺的東西 他需要把這些事情寫成筆記 然後持之以恆的碰處這些東西 這樣才會記的更深
11:39:30	 From Brian Huang : 先下線了，謝謝大家分享。
11:41:25	 From Q : 零碎的知識多吸收..
但是必要去看C的書..才能系統化學習
11:42:13	 From 黑貓 : 是的
11:42:40	 From 黑貓 : 張同學確實缺很多東西 比如C/C++的程式基礎
11:45:41	 From Q : 開發ARDUINO基礎知識
計概 / 數位邏輯 / 基本電學 / C語言
11:47:33	 From Q : 不管什麼系  你想玩好 ARDUINO 不要躲這些東西
11:47:43	 From 鄭鴻旗 : 當然
11:49:55	 From 黑貓 : 如同我剛剛說的 不要怕碰這些東西
11:50:09	 From 黑貓 : 你搞懂了 過程雖然比較繁瑣 但他會成為你未來前進的助力
11:50:34	 From 黑貓 : 不管是英文 計概 程式語言 還是電學...等等
11:50:51	 From 黑貓 : 願意去碰 就是要做的第一件事
11:51:02	 From 鄭鴻旗 : 搞懂了，他就不會背叛你，不會就是不會～
11:51:05	 From 黑貓 : 再來就是要堅持住 持之以恆的做練習
11:51:11	 From 黑貓 : 對
11:51:17	 From 黑貓 : 不會就是不會 不要去躲他
11:51:47	 From 彭大海 : 好期待 快要成功了！！
11:52:02	 From 黑貓 : 這火一定會很美
11:52:49	 From 彭大海 : 剛剛聽他說「真的有耶！！」讓人想起第一次看到自己程式的輸出成功的喜悅！！
11:52:50	 From 黑貓  To  鄭鴻旗(privately) : 突然想到 我覺得可以找人開一個關於程式基礎的伴伴學
11:53:01	 From 黑貓 : 是阿
11:53:10	 From 黑貓 : 就像原始人看到火那樣
11:53:37	 From 鄭鴻旗  To  黑貓(privately) : 我以前也經歷過，超開心，那一瞬間永遠記得。
11:53:47	 From 鄭鴻旗 : 我以前也經歷過，超開心，那一瞬間永遠記得。
11:54:05	 From 鄭鴻旗  To  黑貓(privately) : 於程式基礎的伴伴學，這主題好耶
11:54:29	 From 鄭鴻旗  To  黑貓(privately) : 你可以規劃嗎？我再來發布找人
11:54:38	 From 鄭鴻旗  To  黑貓(privately) : 每一次都抓在兩小時內
11:54:51	 From 彭大海 : 今天這個早上真美好！！
11:54:51	 From 黑貓  To  鄭鴻旗(privately) : 我要看時間...
11:55:34	 From 黑貓  To  鄭鴻旗(privately) : 還是希望鴻旗大大找比較會的來教比較好
11:55:55	 From 黑貓  To  鄭鴻旗(privately) : 我平常就比較多事情要去處裡www
11:56:19	 From 鄭鴻旗  To  黑貓(privately) : 更正我的意思，我想說的是：規劃一下框架，我再來找人
11:56:47	 From 鄭鴻旗  To  黑貓(privately) : 感覺會需要很多次
11:57:08	 From 黑貓  To  鄭鴻旗(privately) : 嗯嗯
11:57:31	 From 黑貓  To  鄭鴻旗(privately) : 或者是 伴著書
11:57:43	 From 黑貓  To  鄭鴻旗(privately) : 這樣會比較好整理
11:57:51	 From 鄭鴻旗  To  黑貓(privately) : 讀書會內型的伴讀
11:58:04	 From 鄭鴻旗  To  黑貓(privately) : 類型
11:58:15	 From 黑貓  To  鄭鴻旗(privately) : 嗯嗯
11:58:41	 From 鄭鴻旗  To  黑貓(privately) : 你的提議很有意義
11:59:08	 From 黑貓  To  鄭鴻旗(privately) : 我一開始是Arduino 再來才是c
11:59:49	 From 黑貓  To  鄭鴻旗(privately) : 我好久前鬧過一個笑話 我用Arduino來去做c的問題 結果被人笑xdd
12:03:39	 From 鄭鴻旗  To  黑貓(privately) : 都是屬於自己的寶貴經驗，沒有過去就沒有現在的自己。
12:04:46	 From 彭大海 : ._0001.mp3
12:05:41	 From 黑貓  To  鄭鴻旗(privately) : 恩阿
12:07:38	 From 黑貓 : 不好意思 有誰在用linux的嘛
12:07:57	 From 黑貓  To  鄭鴻旗(privately) : https://www.books.com.tw/products/0010856603?sloc=main
12:08:11	 From 黑貓  To  鄭鴻旗(privately) : 這一本我覺得可以
12:09:57	 From 黑貓 : 先去拿飯 罵上回來
12:10:24	 From andrew_lin@gemteks.com : 我有在用 Linux 但是只有工作上會用。平常用 windwos
12:10:26	 From 鄭鴻旗  To  黑貓(privately) : 這本書是黑貓推薦的書：https://www.books.com.tw/products/0010856603?sloc=main
12:10:36	 From 鄭鴻旗 : 這本書是黑貓推薦的書：https://www.books.com.tw/products/0010856603?sloc=main
12:10:58	 From mihoxp : 大家好
12:11:59	 From 鄭鴻旗 : ：）
12:14:17	 From 彭大海 : NOTE: The folder name needs to be mp3, placed under the SD card root directory, and the mp3 file name needs to be 4 digits, for example, "0001.mp3", placed under the mp3 folder. If you want to name it in Both English and Chinese, you can add it after the number, for example, "0001hello.mp3" or "0001后来.mp3".
12:14:57	 From 火腿 : myDFPlayer.playFolder(15, 4);  //play specific mp3 in SD:/15/004.mp3; Folder Name(1~99); File Name(1~255)
12:17:50	 From 黑貓  To  鄭鴻旗(privately) : 1.mp3
01.mp3
001.mp3
0001.mp3
12:17:55	 From 黑貓 : 1.mp3
01.mp3
001.mp3
0001.mp3
12:35:38	 From 彭大海 : 大家，我先離線，多謝！
12:35:49	 From 鄭鴻旗 : 掰掰～～～
12:35:52	 From 黑貓 : 88
12:39:39	 From andrew_lin@gemteks.com : usb 線 https://pic.pimg.tw/tu0925399900/1392562152-2602175678_n.jpg
12:43:06	 From 偉廉 : 挖
12:52:05	 From 偉廉 : 電池盒 上 加個開關
12:53:13	 From Chiang Cheng-Dar : vin 官方建議 7v-12v  
https://store.arduino.cc/usa/arduino-uno-rev3
Input Voltage (recommended)	7-12V
12:54:12	 From 鄭鴻旗 : 今天真的很有趣
12:54:14	 From 鄭鴻旗 : https://www.facebook.com/groups/accomdemy
12:54:30	 From 偉廉 : 886
```



## 社群相關討論