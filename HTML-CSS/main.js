function logger(log, type = 'log') {
    console[type](log);
}

logger('Example', 'error');