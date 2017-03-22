/*
 * Program for combining all code into one file in order to make it easier to
 * copy into the wallaby.
 */

var fs = require("fs");

/**
 * reads a file
 * @param  {[string]} file path of file
 * @return {[string]}      file contents
 */
function read(file) {
	return fs.readFileSync(file, 'utf8');
}

var settings = JSON.parse(read("project.json"));

var file = "";

console.log("Writing head...");
file+=settings.head;

console.log("Writing declarations...");
for (var i in settings.declarations) {
	var filePath = settings.declarations[i];
	console.log("Writing declaration: " + filePath);
	file+=read(filePath);
}

console.log("Writing sources...");
for (var i in settings.sources) {
	var filePath = settings.sources[i];
	console.log("Writing source: " + filePath);
	file+=read(filePath);
}

// if (!fs.exists(settings.target)) {
// 	fs.writeFileSync(settings.target, "");
// }
fs.writeFile(settings.target, file, { flag: 'w' }, function (err) {
    if (err) {
			throw err;
		}
		console.log("Done!");
});
