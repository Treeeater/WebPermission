var str2write = "test = document.getElementById('secret').innerHTML;";
var n = document.createElement('script');
n.text=str2write;
document.body.appendChild(n);