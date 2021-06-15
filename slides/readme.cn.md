**语言选择**

[English](readme.en.md)  | [繁體中文](readme.md) | [简体中文](readme.cn.md)

目录
===

- [使用守则](#使用守则)
- [上传须知](#上传须知)
  - [第一步：fork 这个 repository](#fork这个repository)
  - [第二步：在自己 fork 的 repository里，进入 accomdemt/slide 文件路径上传文件](上传简报档)
  - [第三步：上传可预览的PDF档](上传可预览的PDF档)
  - [第四步：Commit 上传文件](Commit上传文件)
  - [第五步：提交Pull Request](提交PR)
- [资料参考](#资料参考)


使用守则
=======

**1. GitHub中剪报和PDF档为Accomdemy Google 云端硬盘中的备份，详细资料请前往[Accomdemy Google 云端硬盘](https://drive.google.com/drive/u/1/folders/10jkvGMkOb0- lPl3-siXw0lDfmpxfrrnQ) 进行下载**

**2. 文件夹结构介绍**

```bash
   |- slides
      |- 210101 - 陪你入门GitHub
         |- 210101 - 陪你入门GitHub.ppt
         |- preview
            |- 210101 - 陪你入门GitHub.pdf
```
按照文件命名守则上传的资料夹（例如 `210101 - 陪你入门GitHub`）内必须包含一个与文件夹同名的 `.ppt` 文件和一个命名为 `preview` 的文件夹

每个文件夹中的 `Preview` 路径可以直接点击，包含一个与文件夹同名的 `.pdf` 档方便网页内进行简报内容预览。

**3. 文件命名守则**

为了方便后续文件档的管理以及伴学成员们阅读的便利，在进行幻灯片和PDF的PR上传时，请按照如下文件命名方式进行文件夹和文件的重命名
   
   - `时间（YYMMDD）- 简报名称` （例如 `210101 - 陪你入门GitHub`）

**4. 会直接使用`markdown` 写幻灯片的朋友，也可以将架设在您GitHub 服务器上的简报路径, 在资料夹添加`readme.MD` 文件后贴入，并请详细标注使用方法，便于伴学成员们的使用**

上传须知
=======

请大家按照以下步骤来上传最新的幻灯片

fork这个repository
------------------

进入伴伴学 Accomdemy GitHub 然后点击右上方 `fork` 按钮

![slide_fork](/media//slide-readme/slide_fork.jpg)


上传幻灯片
---------

在自己 `fork` 的 repository上，进入slide文件路径上传文件

![slide_upload](/media//slide-readme/slide_upload.jpg)

> 若是同名幻灯片则直接替换，不然则直接上传新的幻灯片*


上传可预览的PDF档
----------------

若是想要生成预览档，则使用 PowerPoint 或者 Google Sheet 将 `.ppt` 转换成 `.pdf` 档并放入 `preview` 文件夹

![slide_preview](/media//slide-readme/slide_preview.jpg)

> 下面将以上传 `test.pdf` 为例进行操作演示

Commit上传文件
--------------

文件拖曳到 GitHub 页面 上传完成后填写上传内容以及原因，点击下方绿色的 `Commit changes` 按钮

![slide_commit](/media//slide-readme/slide_commit.jpg)

提交PR
------

点击页面上的 `Pull Request` 后，点击绿色的 `New Pull Request` 按钮

![slide_PR](/media//slide-readme/slide_PR.jpg)

检查上传信息无误后即可将 `Pull Request` 提交至伴伴学 Accomdemy GitHub 等待审核批准即可

![slide_submitPR](/media//slide-readme/slide_submitPR.jpg)


资料参考
=======

> 不太熟悉Github的操作？看[这里](https://forum.amebaiot.com/t/5-github-ameba/459)就好！
