#font installation
wget https://github.com/ryanoasis/nerd-fonts/releases/download/v3.4.0/JetBrainsMono.zip
unzip JetBrainsMono.zip -d JetBrainsMono
mkdir -p ~/.local/share/fonts
cp JetBrainsMono/*.ttf ~/.local/share/fonts/
fc-cache -fv
fc-list | grep "JetBrains Mono"

#dwm installation
cd dwm
sudo make clean install
cd ..

#dwmblocks installation
cd dwmblocks
sudo make clean install
cd ..

clear
echo "Installation complete )"
