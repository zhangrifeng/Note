# git命令
1. 关联远程仓库
```
git remote add origin <远程仓库地址>
# 示例
git remote add origin https://github.com/your_username/repo_name.git
```
2. 查看远程仓库-作用：确认当前仓库已关联的远程地址。
```
git remote -v
```
3. 如果已有远程仓库但想修改：
```
git remote set-url origin <新远程仓库地址>
```
4. 添加文件到 Git 暂存区
```
git add .
```
也可以只添加特定文件：
```
git add filename.cpp
```
5. 提交代码
```
git commit -m "提交描述信息"
# 示例
git commit -m "修复Bug，优化算法"
```
6. 推送到远程仓库
```
git push
```

7. 只拉取一部分更新
```
git fetch origin
# 比如只拉取src和include目录下的更新
git checkout origin/master -- src/ include/
```