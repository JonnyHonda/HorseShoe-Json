# HorseShoe-Json

A project to light a Horse Shoe Christmas tree with an Arduino pattern generator.

_Ideas_
Using 50 addressable LED string.
10 Horseshoes each with 5 LEDs arraged in a pyramid, 4,3,2,1 per row

The Arduino must be able to load a pattern file which will drive the pattern generator
A pattern file example:  
```
{
	"name": "Chase Shoe By Row Up",
	"description":"Turn on each row Shoes on in sequence up",
	"delay": 1000,
	"commands":[{
		"reverse" : true, 
		"blank": true, 
		"random": false, 
		"invert": true,
        "frequency": "*"
		}],
	"sequence": {
		"steps": {
			"0": [0, 1, 2, 3, 4 ,5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19],
			"1": [20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34], 
			"2": [35, 36, 37, 38, 39, 40, 41, 42, 43, 44], 
			"3": [45, 46, 47, 48, 49]
		}
	}
}
```
`name` a Simple name for the pattern,
`description` a short descsription of what the pattern doesween 
`delay` the default delay between sequence steps
`sequence` container for the pattern steps
`steps` each step in the pattern, containing an array of the LEDs to turn on  

`commands` allows for addtional funtions to be applied to sequence as a whole or on each step
- `reverse` plays the sequence but in reverse order
- `blank` will turn all LEDs off after the sequence has completed
- `random` will play the steps in a random order (see also `frequency`)
- `invert` will invert the current step once it has been played
- `frequency` how often to play this pattern for before exiting. "*" is infinet 
The above example will turn on each row of LEDs on in turn from the bottom.

More to come as the project evolves...