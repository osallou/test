workflow "On new collaborator" {
  on = "push"
  resolves = ["test action to create issues"]
}

action "test action to create issues" {
  uses = "osallou/test-github-action@master"
  secrets = ["GITHUB_TOKEN"]
}
