var bjr = function(){
    console.log('Bienvenue dans NodeJS !');
}

var ntm = function(res){
    res.write("Ta maman est gentille !");
}

exports.bjr = bjr;
exports.taMamanEstGentille = ntm;