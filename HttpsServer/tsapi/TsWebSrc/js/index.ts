const globalAny: any = globalThis;
globalAny.globalAny = globalAny;

const requireAny: any = require;
globalAny.requireAny = requireAny;