# FrameManager-public
传奇序列帧助手，用在AE里面，方便快速地调用600/360序列帧图片


## 简介
我本身呢，是一名传奇广告设计师，
平时工作中主要使用ae来制作传奇游戏的广告，
有一种类型的广告叫做序列帧，它们看起来像这样的：

https://user-images.githubusercontent.com/40317014/212533492-b07c3f82-4eec-41a9-a084-5432e124e01f.mp4

本质上整个游戏广告的画面由图片一张张拼合起来，
在调用这个图片的时候我遇到一些麻烦事：

为了模拟出游戏中主角的动作和方向，
它往往会有很多的图片组合成一个角色，
在这个武侠人物中拥有600级图片，
里面包含了11个动作，
其中每个动作又拥有8个方向，
当我们需要挑选其中某动作的某一个方向出来时，
在ae中导入使用会很麻烦，

方法一是导入的时候选择好某一个动作的某一个方向，
缺点是很繁琐，每次导入需要花费很多的时间，
这只是一个角色，如果拥有多个角色，并且拥有多个怪物，
那这个时间加起来会变得非常非常夸张。

方法二是提前把每个动作和每一个方向提前分好文件夹，
一次性导入所有的文件夹至ae里面使用，
缺点是文件夹很多，ae每次预览或者渲染都要读取大量的文件夹，
对性能的影响会比较高。

这个时候我们进行思考，有没有其它的办法来简化这个过程，
我发现插件可以帮我们完成这一步，
所以第三个方法是：当我们使用的时候，直接导入整个文件夹结构，600张图片，
再由插件来选择我们需要显示的是哪些图片，
这个方式的好处是，ae只需要读取一次文件夹，性能提升，
不需要手动创建非常多的文件夹，时间消耗节省，
不需要手动选择图片导入，繁琐性一下子降低到几乎为0。


