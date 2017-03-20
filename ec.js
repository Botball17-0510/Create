var fs = require("fs");

var C = {
	STATE_NULL: 0,
	STATE_PREPROCESER: 1
};

/**
 * reads a file
 * @param  {[string]} file path of file
 * @return {[string]}      file contents
 */
function read(file) {
	return fs.readFileSync(file, 'utf8');
}

var main_string = read('src/main.c');

function lex(str) {
	var tokens = [];
	var token_locations = [];
	function add_token(token, loc) {
		tokens.push(token);
		token_locations.push(loc);
	}
	var state = C.STATE_NULL;
	var current = "";
	for (var i = 0, len = str.length; i < len; i++) {
		if (str[i] == '\n') {
			state = C.STATE_NULL;
			current = "";
			continue;
		}
		if (state == C.STATE_PREPROCESER) {
			if (str[i] == '\s') {
				state = C.STATE_NULL;

			}
			current += str[i];

		}
		if (str[i] == '#') {
			state = C.STATE_PREPROCESER;
			continue;
		}
	}

}
console.log(main_string);
