package main

import (
    "math/rand"
    "time"
	"github.com/tfriedel6/canvas/sdlcanvas"
)

func main() {
	wnd, cv, err := sdlcanvas.CreateWindow(500, 370, "bubblesort")
	if err != nil {
		panic(err)
	}

	defer wnd.Destroy()

    var shouldRun = false;

    wnd.KeyDown = func(scancode int, rn rune, name string) {
		switch name {
            case "Space":
                shouldRun = true;
        }
    }

    var arr[50]int

    for i := 0; i < 50; i++ {
        arr[i] = i
	}
    rand.Seed(time.Now().UnixNano())
    for i := len(arr) - 1; i > 0; i-- {
        j := rand.Intn(i + 1)
        arr[i], arr[j] = arr[j], arr[i]
    }
    var i = 0;
    var j = 0;

	wnd.MainLoop(func() {
		w, h := float64(cv.Width()), float64(cv.Height())
		cv.SetFillStyle("#000")
		cv.FillRect(0, 0, w, h)
        if shouldRun {
            if arr[j] > arr[j+1] {
                arr[j], arr[j+1] = arr[j+1], arr[j]
            }
            if i <= len(arr)-1 {
                j++
                if j >= len(arr)-i-1 {
                    i++
                    j = 0
                }
            }
        }
       for k := 0; k <50; k++ {
            if j == k {
               cv.SetFillStyle("#f00")
            } else {
               cv.SetFillStyle("#fff")
            }
           cv.FillRect(
               float64(k*10),
               h-float64(arr[k]*k/8),
               10,
               float64(arr[k]*k/8),
           )
       }
    })

}

