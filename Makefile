
git-update:
	git add .
	git commit -m "$(shell date) updated"
	git push origin main
