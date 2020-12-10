# Learn about vx-6

This is a copy of [xv-6-risc-v](https://github.com/mit-pdos/xv6-riscv) for my own learning purpose.

## Packages to install

I use fedora 33 with the following packages installed

- `qemu-system-riscv.x86_64`
- `gcc-riscv64-linux-gnu.x86_64`

They are available from `dnf`

## Dev environment

I use VS Code to do the development with the help of [clangd](https://clangd.llvm.org/) and its accompanying VS Code plugin. Clangd depends on `compile_commands.json` to perform its analysis, so we have to extract this json file out of the `Makefile`. And I found out [bear](https://github.com/rizsotto/Bear) is a great tool for this.

```bash
sudo dnf install bear
make clean
bear make
```

And you'll get the `compile_commands.json` file in the xv-6 directory. It's already included in this git repo and clangd should be able to recognize that.