<h1 align="center">
  Discord Token Generator (1.0.0)
</h1>
💬 Discord token generator, automatically generate auth tokens for Discord in your PC background. Currently working depending on where you live, Australia and 
United States seem to work fine. Written completely in C++ by me.

### Non-working countries
```json
Afghanistan
China
Ukraine
Norway
Sweden
Russia
```
*If you have any more countries to add: let me know in an issue*

## How does it work?
This amazing invention works by abusing a flaw with Discord's captcha system. You complete one captcha, your IP becomes trusted and they do not captcha you 
depending on how fast you query them. Can generate around 1000 tokens overnight, so is by no-means fast but works fine and there is no 2captcha or third-party
captcha service required (completely free)

I recommend running this in the background as you sleep, game, etc. All accounts have fully verified emails upon creation.

## Proof
As they say, the proof is in the pudding: so go ahead, try it. Download from the releases tab or optionally compile it from the source provided. Have fun!
