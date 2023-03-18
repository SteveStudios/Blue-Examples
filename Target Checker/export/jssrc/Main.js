Strings = require('./Strings');
SocketTools = require('./SocketTools');
ArrayTools = require('./ArrayTools');
MathTools = require('./MathTools');
System = require('./System');
File = require('./File');


class Main
{
static target =  "NULL";
static main() {
System.varTrace(target);
}
}

module.exports.Main = Main

Main.main();