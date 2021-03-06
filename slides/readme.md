**語言選擇**

[English](readme.en.md)  | [繁體中文](readme.md) | [简体中文](readme.cn.md)

目錄
===

- [使用守則](#使用守則)
- [上傳須知](#上傳須知)
  - [第一步：fork 這個 repository](#fork這個repository)
  - [第二步：在自己 fork 的 repository裡，進入 accomdemt/slide 文件路徑上傳文件](上傳簡報檔)
  - [第三步：上傳可預覽的PDF檔](上傳可預覽的PDF檔)
  - [第四步：Commit 上傳文件](Commit上傳文件)
  - [第五步：提交Pull Request](提交PR)
- [資料參考](#資料參考)


使用守則
=======

**1. GitHub中剪報和PDF檔為Accomdemy Google 雲端硬盤中的備份，詳細資料請前往[Accomdemy Google 雲端硬盤](https://drive.google.com/drive/u/1/folders/10jkvGMkOb0- lPl3-siXw0lDfmpxfrrnQ) 進行下載**

**2. 文件夾結構介紹**

```bash
   |- slides
      |- 210101 - 陪你入門GitHub
         |- 210101 - 陪你入門GitHub.ppt
         |- preview
            |- 210101 - 陪你入門GitHub.pdf
```
按照文件命名守則上傳的資料夾（例如 `210101 - 陪你入門GitHub`）內必須包含一個與文件夾同名的 `.ppt` 文件和一個命名為 `preview` 的文件夾

每個文件夾中的 `Preview` 路徑可以直接點擊，包含一個與文件夾同名的 `.pdf` 檔方便網頁內進行簡報內容預覽。

**3. 文件命名守則**

為了方便後續文件檔的管理以及伴學成員們閱讀的便利，在進行幻燈片和PDF的PR上傳時，請按照如下文件命名方式進行文件夾和文件的重命名
   
   - `時間（YYMMDD）- 簡報名稱` （例如 `210101 - 陪你入門GitHub`）

**4. 會直接使用`markdown` 寫幻燈片的朋友，也可以將架設在您GitHub 服務器上的簡報路徑, 在資料夾添加`readme.MD` 文件後貼入，並請詳細標註使用方法，便於伴學成員們的使用**


上傳須知
=======

請大家按照以下步驟來上傳最新的幻燈片

fork這個repository
------------------

進入伴伴學 Accomdemy GitHub 然後點擊右上方 `fork` 按鈕

![slide_fork](/media//slide-readme/slide_fork.jpg)


上傳幻燈片
---------

在自己 `fork` 的 repository上，進入slide文件路徑上傳文件

![slide_upload](/media//slide-readme/slide_upload.jpg)

> 若是同名幻燈片則直接替換，不然則直接上傳新的幻燈片*


上傳可預覽的PDF檔
----------------

若是想要生成預覽檔，則使用 PowerPoint 或者 Google Sheet 將 `.ppt` 轉換成 `.pdf` 檔並放入 `preview` 文件夾

![slide_preview](/media//slide-readme/slide_preview.jpg)

> 下面將以上傳 `test.pdf` 為例進行操作演示


Commit上傳文件
--------------

文件拖曳到 GitHub 頁面 上傳完成後填寫上傳內容以及原因，點擊下方綠色的 `Commit changes` 按鈕

![slide_commit](/media//slide-readme/slide_commit.jpg)


提交PR
------

點擊頁面上的 `Pull Request` 後，點擊綠色的 `New Pull Request` 按鈕

![slide_PR](/media//slide-readme/slide_PR.jpg)

檢查上傳信息無誤後即可將 `Pull Request` 提交至伴伴學 Accomdemy GitHub 等待審核批准即可

![slide_submitPR](/media//slide-readme/slide_submitPR.jpg)


資料參考
=======

> 不太熟悉Github的操作？看[這裡](https://forum.amebaiot.com/t/5-github-ameba/459)就好！
