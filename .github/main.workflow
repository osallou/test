workflow "On new collaborator" {
  resolves = ["JasonEtco/create-an-issue"]
  on = "push"
}

action "JasonEtco/create-an-issue" {
  uses = "JasonEtco/create-an-issue@master"
  secrets = ["GITHUB_TOKEN"]
  args = ".github/create_account.md"
}
