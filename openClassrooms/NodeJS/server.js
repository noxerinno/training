var http = require('http');
var url = require('url'); 
var test = require('test');
var querystring = require('querystring');
var markdown = require('markdown').markdown;

var server = http.createServer(function(req, res){
    var page = url.parse(req.url).pathname;
    var params = querystring.parse(url.parse(req.url).query);    
    //console.log(page);
    
    switch (page){
        case "/" :
            res.writeHead(200, {"Content-Type": "text/plain"});
            res.end('Acceuil');
            break;
        
        case "/nom" :
            res.writeHead(200, {"Content-Type": "text/plain"});

            if('prenom' in params && 'nom' in params && 'age' in params){ 
                res.write('Vous vous appelez ' + params['prenom'] + ' ' + params['nom'] + ' et vous avez ' + params['age'] + ' ans.');
            }
            res.end();

            break;

        case "/maman" :
            res.writeHead(200, {"Content-Type": "text/plain"});
            test.taMamanEstGentille(res);
            res.end();

        case "/markdown" : 
            res.writeHead(200, {"Content-Type": "text/html"});
            res.end(markdown.toHTML('Un paragraphe en **markdown** !'));

        default: 
            res.writeHead(404, {"Content-Type": "text/plain"});
            res.end('La page demandee n\'est pas disponible.')
            break;

    }
}); 

// server.on('close', function(){
//     console.log('Alrigth then...');
// });

server.listen(8080);

// server.close();