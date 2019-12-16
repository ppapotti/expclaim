./gdown.pl https://drive.google.com/open?id=1XqH_efF_TbsC15Klm0J_GgELOedJc9E9 scripts/Bing/FactCheck.jar

conda create -y -n expclaim python=3.6
conda activate expclaim
conda install -y -c potassco clingo
conda install -y -c anaconda ply
conda install -y -c anaconda sympy
conda install -y -c conda-forge ipdb
conda install -y -c conda-forge sparqlwrapper
