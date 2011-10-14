var str2write = "test = document.getElementById('secret').innerHTML;";
var n = document.createElement('script');
n.text=str2write;
n.src="naive.js";
n.async=true;
document.body.appendChild(n);
var m = document.createElement('script');
m.src="naive2.js";
m.async=true;	//async nodes should also work.
document.body.appendChild(m);
x=0;