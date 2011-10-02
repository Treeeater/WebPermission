//setTimeout("var test = document.getElementById('secret').innerHTML; var a = test + 'test';",1000);
function addd(){
var scriptNode = document.createElement("script"); 
scriptNode.text = "aaa = 0;"; 
document.body.appendChild(scriptNode);
};
setTimeout("addd();",10);