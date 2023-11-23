//EventEmitter
import {EventEmitter} from 'events';

const emitter = new EventEmitter();

const listener1 = () => console.log("Listener 1 listening");
const listener2 = () => console.log("Listener 2 listening");
const listener3 = () => console.log("Listener 3 listening");

emitter.setMaxListeners(3);
console.log(emitter.getMaxListeners());

emitter.on('event1', listener1);
emitter.on('event1', listener2);
emitter.prependListener('event1', listener3);
emitter.addListener('event2', listener1);
emitter.once('event2', listener2);
emitter.prependOnceListener('event2', listener3);

console.log(emitter.listenerCount('event1'));
console.log(emitter.listeners('event1'));
console.log(emitter.rawListeners('event1'));
console.log(emitter.eventNames());

emitter.emit('event1');
emitter.emit('event2');

emitter.off('event1', listener1);
emitter.removeAllListeners('event1');
emitter.removeListener('event2', listener1);