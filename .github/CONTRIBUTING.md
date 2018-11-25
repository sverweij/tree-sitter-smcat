## Contributing

So you want to contribute to tree-sitter-smcat? We already love you!

To make this as easy as possible for you, here's some simple guidelines:

### Reporting issues
- All **issues** are **welcome**.    
  - These include bug reports, questions, feature requests and enhancement
    proposals
    [GitHub's issue tracker](https://github.com/sverweij/tree-sitter-smcat/issues)
    or 
  - [GitLab's one](https://gitlab.com/sverweij/tree-sitter-smcat/issues)
    are the easiest way to submit them.
- We prefer bug reports in  **_steps taken_ - _expected_ - _found_** format.
  -  that makes it more easy to reproduce it, and concoct a solution that fits
     your expectation.
  - If applicable, it is also nice when you provide
    - the **input** you used and
    - the **environment** (browser version/ os, or node.js version + os).
  - [template](ISSUE_TEMPLATE.md)
- In turn, we try to **respond within a week**.    
  This might or might not include an actual code fix.

### Contributing code
- We prefer well documented
  **[pull requests](https://help.github.com/articles/creating-a-pull-request/)**
  based on the most recent version of the **master** branch.
- Code quality
    - Additions pass eslint (as configured in this repo)
    - Mocha tests prove your code does what it intends.
    - Your code does not introduce regressions - ```make check``` proves this.
    - Code style (you know, petty things like indentations, where brackets go,
      how variables & parameters are named) fits in with the current code base.
- Plan to do something drastic?     
  Leave an
  [issue](https://github.com/sverweij/tree-sitter-smcat/issues/new) on GitHub
- state-machine-cat is released with a [code of conduct](CODE_OF_CONDUCT.md), adapted
  from the [contributor covenant](http://contributor-covenant.org/).

### Legal
- the code you add will be subject to the
  [MIT](../LICENSE) license, just like the rest of
  smcat
- the code you add is your own original work
