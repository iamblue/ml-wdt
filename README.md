# ml-wdt

## API

* __wdtInit

``` js
  __wdtInit(
    second, // number
  )

```

* __wdtEnable

``` js
  __wdtEnable()

```

* __wdtFeed

``` js
  __wdtFeed()

```

## Example

``` js

print('reboot!');
__wdtInit(4);
__wdtEnable();

setInterval(function() {
  __wdtFeed();
}, 7000);

```
