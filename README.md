<h1 align="center">
  Discord Token Generator
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
The Discord website creates a unique identifier for each visitor, they also create a server-side value that determines a certain trust-factor. We will call these `user_id` and `trust_factor`, when looking at Discord's API, it uses a very unique way of determining trust and whether it should serve a captcha or not.

### Discord trust factor
The Discord API has not been fully reversed and a lot of people still do not know of the 'trust' aspect regarding the API. Trust values are as follows,
```
< 10 trust = untrusted state
> 30 trust = semi-trusted state
> 50 trust = trusted state
> 75 trust = ?
```

We can exploit the trust factor in order to bypass captchas but we must take into mind, with each new account comes a new visitor id, using this new ID will not allow us to abuse the API flaws. **Not patched since API v6**

Trust is heavily based on how the user engages with Discord, for example - someone who spams a lot or a 'ladder typer' will usually sit around 25 - 40 trust.
A user who sends a small amount of messages and usually only engages with certain people will sit at around 30 trust. Someone who engages a lot with other members but does not spam will usually be fully trusted.

To decrease your trust factor you can use a selfbot or send random, unclear requests to many endpoints such as `/science`, be aware this will probably get you disabled

To increase trust factor, you may visit the Discord homepage (https://discord.com) and for some strange reason, a regular visitor will be fully trusted after completing a single captcha. Your visitor ID will be temporary but does not expire for 48+ hrs.

### Setup for generation

Make sure you complete and manually create at least one account before starting the generator, this ensures max trust factor. Do not sign in on any low trust accounts.

## Proof
As they say, the proof is in the pudding: so go ahead, try it. Download from the releases tab or optionally compile it from the source provided. Have fun!
