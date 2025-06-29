# git命令

### 初始化Git仓库（如果还没初始化）在zhang目录下打开终端（命令行）执行： 
```
cd zhang
git init
```

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
- 查看git的状态（修改了哪些文件，哪些文件未提交）
```
git status
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

### 如果是第一次推送（且远程仓库为空），执行：
```
git branch -M main
git push -u origin main
```

### 如果远程仓库已有内容（或你用的是master分支），则需处理冲突或合并，常见命令为：
```
git pull origin main --allow-unrelated-histories
# 解决冲突后再推送
git push -u origin main
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
8. 不想提交这些文件，但希望它们仍然留在本地
```
git rm --cached (文件名)
# 比如
git rm --cached main.cc
```

### 删除错误的远程仓库
```
git remote remove origin

```