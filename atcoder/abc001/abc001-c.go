package main

import (
	"fmt"
	"math"
)

func main() {
	var deg, dis float64
	var windpower int
	var direction string
	fmt.Scan(&deg, &dis)

	deg = float64(deg) / 10.0
	v := round(float64(dis)/60.0, 1)

	switch {
	case v >= 32.7:
		windpower = 12
	case v >= 28.5 && v <= 32.6:
		windpower = 11
	case v >= 24.5 && v <= 28.4:
		windpower = 10
	case v >= 20.8 && v <= 24.4:
		windpower = 9
	case v >= 17.2 && v <= 20.7:
		windpower = 8
	case v >= 13.9 && v <= 17.1:
		windpower = 7
	case v >= 10.8 && v <= 13.8:
		windpower = 6
	case v >= 8.0 && v <= 10.7:
		windpower = 5
	case v >= 5.5 && v <= 7.9:
		windpower = 4
	case v >= 3.4 && v <= 5.4:
		windpower = 3
	case v >= 1.6 && v <= 3.3:
		windpower = 2
	case v >= 0.3 && v <= 1.5:
		windpower = 1
	default:
		windpower = 0
	}

	switch {
	case windpower == 0:
		direction = "C"
	case deg < 348.75 && deg >= 326.25:
		direction = "NNW"
	case deg >= 303.75 && deg < 326.25:
		direction = "NW"
	case deg >= 281.25 && deg < 303.75:
		direction = "WNW"
	case deg >= 258.75 && deg < 281.25:
		direction = "W"
	case deg >= 236.25 && deg < 258.75:
		direction = "WSW"
	case deg >= 213.75 && deg < 236.25:
		direction = "SW"
	case deg >= 191.25 && deg < 213.75:
		direction = "SSW"
	case deg >= 168.75 && deg < 191.25:
		direction = "S"
	case deg >= 146.25 && deg < 168.75:
		direction = "SSE"
	case deg >= 123.75 && deg < 146.25:
		direction = "SE"
	case deg >= 101.25 && deg < 123.75:
		direction = "ESE"
	case deg >= 78.75 && deg < 101.25:
		direction = "E"
	case deg >= 56.25 && deg < 78.75:
		direction = "ENE"
	case deg >= 33.75 && deg < 56.25:
		direction = "NE"
	case deg >= 11.25 && deg < 33.75:
		direction = "NNE"
	default:
		direction = "N"
	}

	fmt.Printf("%s %d\n", direction, windpower)

}

func round(f float64, places int) float64 {
	shift := math.Pow(10, float64(places))
	return math.Floor(f*shift+.5) / shift
}
