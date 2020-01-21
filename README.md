# HorseShoe-Json

A project to light a Horse Shoe Christmas tree with an Arduino pattern generator.

_Ideas_
Using 50 addressable LED string.
10 Horseshoes each with 5 LEDs arraged in a pyramid, 4,3,2,1 per row

The Arduino must be able to load a pattern file which will drive the pattern generator
A pattern file example:  
```
{
	"name": "Chase Shoe By Row Down",
	"description":"Turn on each row of Shoes on in sequence down",
	"delay": 1000,
	"sequence": {
		"steps": {
			"0": [45, 46, 47, 48, 49],
			"1": [35, 36, 37, 38, 39, 40, 41, 42, 43, 44], 
			"2": [20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34], 
			"3": [0, 1, 2, 3, 4 ,5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19]
		}
	}
}
```
`name` a Simple name for the pattern,
`description` a shord descsription of what the pattern doesween 
`delay` the default delay between sequence steps
`sequence` container for the pattern steps
`steps` each step in the pattern, containing an array of the LEDs to turn on  

The above example will turn on each row of LEDs on in turn from the top.

More to come as the project evolves...